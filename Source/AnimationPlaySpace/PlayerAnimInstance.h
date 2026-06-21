// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/APSAnimInstance.h"
#include "Animation/CustomAnimationTypes.h"
#include "PlayerAnimInstance.generated.h"





/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UPlayerAnimInstance : public UAPSAnimInstance
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
	UFUNCTION(BlueprintCallable)
	bool SetLocomotionState(ELocomotionState InLocomotionState);
	
protected:
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<ACharacter> PlayerCharacter;
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<class UCharacterMovementComponent> PlayerCharacterMovement;
	
};