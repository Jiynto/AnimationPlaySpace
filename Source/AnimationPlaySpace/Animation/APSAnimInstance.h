// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomAnimationTypes.h"
#include "Animation/AnimInstance.h"
#include "APSAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FLocomotionAnimationData LocomotionAnimationData;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bInWeaponStance = false;
	
protected:
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<class AAnimationPlaySpaceCharacter> Character;
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<class UCharacterMovementComponent> CharacterMovement;
};
