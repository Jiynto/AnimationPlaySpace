// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "APSGameplayAbility_EquipItem.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSGameplayAbility_EquipItem : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:
	
	// We need to enforce the triggereventdata for this ability, as it will contain the data on what weapon we are equipping. 
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
};
