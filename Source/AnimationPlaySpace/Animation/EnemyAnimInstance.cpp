// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/EnemyAnimInstance.h"

#include "AIController.h"
#include "KismetAnimationLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PathFollowingComponent.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	EnemyCharacter = Cast<ACharacter>(GetOwningActor());
	if (EnemyCharacter)
	{
		EnemyCharacterMovement = EnemyCharacter->GetCharacterMovement();
	}
}

void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
		
	if (!EnemyCharacter || !EnemyCharacter->GetController())
	{
		return;
	}
	
	if (!EnemyCharacterMovement)
	{
		return;
	}
	
	LocomotionAnimationData.CharacterSpeed = EnemyCharacterMovement->Velocity.Size2D();
	LocomotionAnimationData.CharacterVelocity2D = EnemyCharacterMovement->Velocity * FVector(1,1,0);
	LocomotionAnimationData.WorldRotation = EnemyCharacter->GetActorRotation();
	LocomotionAnimationData.CharacterAcceleration = EnemyCharacterMovement->GetCurrentAcceleration();
	LocomotionAnimationData.Direction = UKismetAnimationLibrary::CalculateDirection(EnemyCharacterMovement->Velocity, EnemyCharacter->GetActorRotation());
	
	
	if(AAIController* controller = Cast<AAIController>(EnemyCharacter->GetController()))
	{
		LocomotionAnimationData.bShouldMove = controller->GetMoveStatus() == EPathFollowingStatus::Moving;
	}
	else
	{
		LocomotionAnimationData.bShouldMove = false;
	}

	LocomotionAnimationData.bIsFalling = EnemyCharacterMovement->IsFalling();
}
