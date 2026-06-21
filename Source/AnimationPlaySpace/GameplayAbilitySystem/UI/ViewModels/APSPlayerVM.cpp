// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h"

#include "APSPlayerVitalsVM.h"

UAPSPlayerVM::UAPSPlayerVM()
{
	PlayerVitalsVM = NewObject<UAPSPlayerVitalsVM>();
}
