// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "APSGameplayAbility_Dodge.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSGameplayAbility_Dodge : public UGameplayAbility
{
	GENERATED_BODY()
	
	UAPSGameplayAbility_Dodge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
public:
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FGameplayTag gameplayCueTag;
	
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	
protected:
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UFUNCTION()
	void OnDodgeFinished();
	
	UFUNCTION()
	float GetMaxSpeed() const;
	
	UPROPERTY()
	TObjectPtr<class UAbilityTask_ApplyRootMotionConstantForce> currentMoveTask = nullptr;
	
	UPROPERTY(EditDefaultsOnly)
	float defaultRunSpeed = 600;
};
