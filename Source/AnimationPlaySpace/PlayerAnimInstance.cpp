#include "PlayerAnimInstance.h"

#include "AnimationPlaySpaceCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetAnimationLibrary.h"
#include "LocomotionAnimationSet.h"
#include "Animation/AnimationUtilityFunctionLibrary.h"


void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UPlayerAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	
	if (!Character)
	{
		return;
	}
	
	if (!CharacterMovement)
	{
		return;
	}
	
	LocomotionAnimationData.CharacterSpeed = CharacterMovement->Velocity.Size2D();
	LocomotionAnimationData.CharacterVelocity2D = CharacterMovement->Velocity * FVector(1,1,0);
	LocomotionAnimationData.WorldRotation = Character->GetActorRotation();
	LocomotionAnimationData.CharacterAcceleration = CharacterMovement->GetCurrentAcceleration();
	
	// will need to add the clamping thing for strafing.
	float directionActual = UKismetAnimationLibrary::CalculateDirection(CharacterMovement->Velocity, Character->GetActorRotation());
	if (CharacterMovement->bOrientRotationToMovement)
	{
		LocomotionAnimationData.Direction = UKismetMathLibrary::Clamp(directionActual, -45, 45);
	}
	else
	{
		LocomotionAnimationData.Direction = directionActual;
	}

	LocomotionAnimationData.bShouldMove = CharacterMovement->GetCurrentAcceleration() != FVector::ZeroVector;
	LocomotionAnimationData.bIsFalling = CharacterMovement->IsFalling();
	
	
	
	if (LocomotionAnimationData.CharacterSpeed > 0)
	{
		//const float speedGate = AnimationData.PlayerSpeed > 300 ? 600 : 300;
		const float maxSpeedGate = CharacterMovement->MaxWalkSpeed;
		
		
		LocomotionAnimationData.LocomotionStoppingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StopAnimations);
		LocomotionAnimationData.LocomotionStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->StartAnimations);
		LocomotionAnimationData.LocomotionMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimSetBase->MovingAnimations);

		
		LocomotionAnimationData.EquipmentPrimaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentPrimaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentPrimaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
		
		LocomotionAnimationData.EquipmentSecondaryStartSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StartAnimations);
		LocomotionAnimationData.EquipmentSecondaryStopSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->StopAnimations);
		LocomotionAnimationData.EquipmentSecondaryMovingSequence = UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(LocomotionAnimationData.Direction, maxSpeedGate, LocomotionAnimationData.LocomotionAnimEquipmentPrimary->MovingAnimations);
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
