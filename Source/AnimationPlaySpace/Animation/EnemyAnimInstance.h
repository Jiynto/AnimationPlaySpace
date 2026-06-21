// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "APSAnimInstance.h"
#include "CustomAnimationTypes.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UEnemyAnimInstance : public UAPSAnimInstance
{
	GENERATED_BODY()
public:
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	
protected:
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<ACharacter> EnemyCharacter;
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<class UCharacterMovementComponent> EnemyCharacterMovement;
	
};
