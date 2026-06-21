#include "PlayerAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetAnimationLibrary.h"
#include "LocomotionAnimationSet.h"
#include "Animation/AnimationUtilityFunctionLibrary.h"


void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	PlayerCharacter = Cast<ACharacter>(GetOwningActor());
	if (PlayerCharacter)
	{
		PlayerCharacterMovement = PlayerCharacter->GetCharacterMovement();
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UPlayerAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	
	if (!PlayerCharacter)
	{
		return;
	}
	
	if (!PlayerCharacterMovement)
	{
		return;
	}
	
	LocomotionAnimationData.CharacterSpeed = PlayerCharacterMovement->Velocity.Size2D();
	LocomotionAnimationData.CharacterVelocity2D = PlayerCharacterMovement->Velocity * FVector(1,1,0);
	LocomotionAnimationData.WorldRotation = PlayerCharacter->GetActorRotation();
	LocomotionAnimationData.CharacterAcceleration = PlayerCharacterMovement->GetCurrentAcceleration();
	
	// will need to add the clamping thing for strafing.
	float directionActual = UKismetAnimationLibrary::CalculateDirection(PlayerCharacterMovement->Velocity, PlayerCharacter->GetActorRotation());
	if (PlayerCharacterMovement->bOrientRotationToMovement)
	{
		LocomotionAnimationData.Direction = UKismetMathLibrary::Clamp(directionActual, -45, 45);
	}
	else
	{
		LocomotionAnimationData.Direction = directionActual;
	}

	LocomotionAnimationData.bShouldMove = PlayerCharacterMovement->GetCurrentAcceleration() != FVector::ZeroVector;
	LocomotionAnimationData.bIsFalling = PlayerCharacterMovement->IsFalling();
	
	
	
	if (LocomotionAnimationData.CharacterSpeed > 0)
	{
		//const float speedGate = AnimationData.PlayerSpeed > 300 ? 600 : 300;
		const float maxSpeedGate = PlayerCharacterMovement->MaxWalkSpeed;
	
		float directionGate = 0;

	
		if (LocomotionAnimationData.Direction > 0)
		{
			if (LocomotionAnimationData.Direction >  157.5)
			{
				directionGate = 180;
			}
			else if (LocomotionAnimationData.Direction > 112.5)
			{
				directionGate = 135;
			} 
			else if (LocomotionAnimationData.Direction > 67.5)
			{
				directionGate = 90;
			}
			else if (LocomotionAnimationData.Direction > 22.5)
			{
				directionGate = 45;
			}
		}
		else if (LocomotionAnimationData.Direction < 0)
		{
			if (LocomotionAnimationData.Direction < -157.5)
			{
				directionGate = -180;
			}
			else if (LocomotionAnimationData.Direction < -112.5)
			{
				directionGate = -135;
			}
			else if (LocomotionAnimationData.Direction < -67.5)
			{
				directionGate = -90;
			}
			else if (LocomotionAnimationData.Direction < -22.5)
			{
				directionGate = -45;
			}
		}
		
		LocomotionAnimationData.LocomotionStoppingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StopAnimations);
		LocomotionAnimationData.LocomotionStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StartAnimations);
		LocomotionAnimationData.LocomotionMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->MovingAnimations);

		
		LocomotionAnimationData.EquipmentPrimaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentPrimaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentPrimaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
		
		LocomotionAnimationData.EquipmentSecondaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentSecondaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentSecondaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
		
		/*
		LocomotionAnimationData.LocomotionStoppingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StopAnimations);
		LocomotionAnimationData.LocomotionStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StartAnimations);
		
		LocomotionAnimationData.EquipmentPrimaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentPrimaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentPrimaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
		
		LocomotionAnimationData.EquipmentSecondaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentSecondaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentSecondaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(directionGate, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
		*/
	}
}

bool UPlayerAnimInstance::SetLocomotionState(ELocomotionState InLocomotionState)
{
	if (InLocomotionState != ELocomotionState::LocomotionStateStandard && LocomotionAnimationData.LocomotionState != ELocomotionState::LocomotionStateStandard)
	{
		return false;
	}

	LocomotionAnimationData.LocomotionState = InLocomotionState;
	return true;
	
}
