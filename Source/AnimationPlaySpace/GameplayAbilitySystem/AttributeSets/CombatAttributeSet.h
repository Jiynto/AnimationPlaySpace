// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "CombatAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UCombatAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	
	UCombatAttributeSet();
	
	
	// Health
	UPROPERTY(BlueprintReadOnly, Category= "Attributes", ReplicatedUsing=OnRep_BaseDamage)
	FGameplayAttributeData BaseDamage;
	ATTRIBUTE_ACCESSORS_BASIC(UCombatAttributeSet, BaseDamage);
	
public:
	
	UFUNCTION()
	void OnRep_BaseDamage(const FGameplayAttributeData& oldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UCombatAttributeSet, BaseDamage, oldValue);
	}
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
};
