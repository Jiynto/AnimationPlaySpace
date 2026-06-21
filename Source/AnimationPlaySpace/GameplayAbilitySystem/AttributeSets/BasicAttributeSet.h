// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BasicAttributeSet.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPostAttributeChangedDelegate,const FGameplayAttribute&, Attribute, float, OldValue, float, NewValue);

UCLASS()
class ANIMATIONPLAYSPACE_API UBasicAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
	
public:
	
	UBasicAttributeSet();
	
	FPostAttributeChangedDelegate PostAttributeChangedDelegate;
	
	// Health
	UPROPERTY(BlueprintReadOnly, Category= "Attributes", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSet, Health);
	
	UPROPERTY(BlueprintReadOnly, Category= "Attributes", ReplicatedUsing=OnRep_HealthMax)
	FGameplayAttributeData HealthMax;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSet, HealthMax);
	
	
	// Stamina
	UPROPERTY(BlueprintReadOnly, Category= "Attributes", ReplicatedUsing=OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSet, Stamina);
	
	UPROPERTY(BlueprintReadOnly, Category= "Attributes", ReplicatedUsing=OnRep_StaminaMax)
	FGameplayAttributeData StaminaMax;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSet, StaminaMax);
	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
public:
	
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& oldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, Health, oldValue);
	}
	
	UFUNCTION()
	void OnRep_HealthMax(const FGameplayAttributeData& oldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, HealthMax, oldValue);
	}
	
	UFUNCTION()
	void OnRep_Stamina(const FGameplayAttributeData& oldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, Stamina, oldValue);
	}
	
	UFUNCTION()
	void OnRep_StaminaMax(const FGameplayAttributeData& oldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, StaminaMax, oldValue);
	}
	
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
};
