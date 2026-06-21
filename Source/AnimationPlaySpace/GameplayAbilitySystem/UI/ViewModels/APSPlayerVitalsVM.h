// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSVMBase.h"
#include "APSPlayerVitalsVM.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSPlayerVitalsVM : public UAPSVMBase
{
	GENERATED_BODY()
	
protected:
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float PlayerCurrentHealth;
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float PlayerMaxHealth;
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float PlayerCurrentStamina;
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float PlayerMaxStamina;
	
public:
	

	void SetPlayerCurrentHealth(float newHealth)
	{
		if (UE_MVVM_SET_PROPERTY_VALUE(PlayerCurrentHealth, newHealth))
		{
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetPlayerCurrentHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercentage);
		}
	}
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetPlayerCurrentHealth() const
	{
		return PlayerCurrentHealth;
	}
	
	
	void SetPlayerMaxHealth(float newHealth)
	{
		if (UE_MVVM_SET_PROPERTY_VALUE(PlayerMaxHealth, newHealth))
		{
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetPlayerMaxHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercentage);
		}
	}
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetPlayerMaxHealth() const
	{
		return PlayerMaxHealth;
	}
	
	
	void SetPlayerCurrentStamina(float newStamina)
	{
		if (UE_MVVM_SET_PROPERTY_VALUE(PlayerCurrentStamina, newStamina))
		{
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetPlayerCurrentStamina);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetStaminaPercentage);
		}
	}
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetPlayerCurrentStamina() const
	{
		return PlayerCurrentStamina;
	}
	
	
	void SetPlayerMaxStamina(float newStamina)
	{
		if (UE_MVVM_SET_PROPERTY_VALUE(PlayerMaxStamina, newStamina))
		{
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetPlayerMaxStamina);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetStaminaPercentage);
		}
	}
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetPlayerMaxStamina() const
	{
		return PlayerMaxStamina;
	}
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetHealthPercentage() const;
	
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetStaminaPercentage() const;
};
