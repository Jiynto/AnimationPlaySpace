// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h"

float UAPSPlayerVitalsVM::GetHealthPercentage() const
{
	return PlayerCurrentHealth / PlayerMaxHealth;
}

float UAPSPlayerVitalsVM::GetStaminaPercentage() const
{
	return PlayerCurrentStamina / PlayerMaxStamina;
}
