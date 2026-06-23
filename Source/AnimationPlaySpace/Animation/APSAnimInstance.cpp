// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/APSAnimInstance.h"

#include "AnimationPlaySpaceCharacter.h"

void UAPSAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Character = Cast<AAnimationPlaySpaceCharacter>(GetOwningActor());
	if (Character)
	{
		CharacterMovement = Character->GetCharacterMovement();
	}
}

void UAPSAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	if (Character)
	{
		bInWeaponStance = Character->GetStance();
	}
}

