// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/APSGameplayAbility_Dodge.h"

#include "AbilitySystemComponent.h"
#include "AnimationPlaySpace.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UAPSGameplayAbility_Dodge::UAPSGameplayAbility_Dodge(const FObjectInitializer& ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void UAPSGameplayAbility_Dodge::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                const FGameplayEventData* TriggerEventData)
{
	//Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (ACharacter* character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
	{
		if (AController* controller = character->GetController())
		{
			controller->SetIgnoreMoveInput(true);
			FVector direction = character->GetLastMovementInputVector().IsZero() ? character->GetActorForwardVector() : character->GetLastMovementInputVector();
			float clampVelocity = GetMaxSpeed();
		
			currentMoveTask = UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(this, NAME_None, direction, 600, 0.5,
			
				false, nullptr, ERootMotionFinishVelocityMode::ClampVelocity,
				FVector::ZeroVector, clampVelocity, false);
		
			currentMoveTask->OnFinish.AddDynamic(this, &ThisClass::OnDodgeFinished);

			if (UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo_Ensured())
			{
				FGameplayEffectContextHandle context = MakeEffectContext(CurrentSpecHandle, CurrentActorInfo);
				context.SetAbility(this);
				AbilitySystemComponent->AddGameplayCue(gameplayCueTag, context);
				TrackedGameplayCues.Add(gameplayCueTag);
			}
			
			currentMoveTask->ReadyForActivation();
			CommitAbility(Handle, ActorInfo, ActivationInfo, nullptr);
			
			UE_LOG(LogAnimationPlaySpace, Warning, TEXT("Dodge ability activated."));
			return;
		}
	}
	
	CancelAbility(Handle, ActorInfo, ActivationInfo, true);
}

bool UAPSGameplayAbility_Dodge::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		if (ACharacter* character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
		{
			if(UCharacterMovementComponent* movementComponent = character->GetCharacterMovement())
			{
				// we should not be rolling if we are anything other than on the ground.
				if (movementComponent->MovementMode < EMovementMode::MOVE_Falling)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}

void UAPSGameplayAbility_Dodge::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	
	UE_LOG(LogAnimationPlaySpace, Warning, TEXT("Dodge ability ended."));
}

void UAPSGameplayAbility_Dodge::OnDodgeFinished()
{
	ensure(CurrentActorInfo);

	if (ACharacter* character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
	{
		if (AController* controller = character->GetController())
		{
			controller->ResetIgnoreMoveInput();
		}
	}
	
	bool bReplicateEndAbility = true;
	bool bWasCancelled = false;
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, bReplicateEndAbility, bWasCancelled);
}

float UAPSGameplayAbility_Dodge::GetMaxSpeed() const
{
	if (ACharacter* character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
	{
		if(UMovementComponent* movementComponent = character->GetMovementComponent())
		{
			return movementComponent->GetMaxSpeed();
		}
	}
	
	return defaultRunSpeed;
}
