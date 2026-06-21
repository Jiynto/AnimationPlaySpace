// Fill out your copyright notice in the Description page of Project Settings.


#include "APSPlayerState.h"

#include "AbilitySystemComponent.h"
#include "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h"
#include "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h"

AAPSPlayerState::AAPSPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(AscReplicationMode);
	
	BasicAttributeSet = CreateDefaultSubobject<UBasicAttributeSet>(TEXT("BasicAttributeSet"));
	CombatAttributeSet = CreateDefaultSubobject<UCombatAttributeSet>(TEXT("CombatAttributeSet"));
	
	PlayerVM = NewObject<UAPSPlayerVM>();
	UpdatePlayerVitalsViewModel();
	
	BasicAttributeSet->PostAttributeChangedDelegate.AddUniqueDynamic(this, &AAPSPlayerState::PostBasicAttributeChange);
}

void AAPSPlayerState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	if (BasicAttributeSet)
	{
		BasicAttributeSet->PostAttributeChangedDelegate.RemoveDynamic(this, &AAPSPlayerState::PostBasicAttributeChange);
	}
}

UAbilitySystemComponent* AAPSPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAPSPlayerState::UpdatePlayerVitalsViewModel() const
{
	if (BasicAttributeSet && PlayerVM)
	{
		PlayerVM->PlayerVitalsVM->SetPlayerCurrentHealth(BasicAttributeSet->GetHealth());
		PlayerVM->PlayerVitalsVM->SetPlayerMaxHealth(BasicAttributeSet->GetHealthMax());
		PlayerVM->PlayerVitalsVM->SetPlayerCurrentStamina(BasicAttributeSet->GetStamina());
		PlayerVM->PlayerVitalsVM->SetPlayerMaxStamina(BasicAttributeSet->GetStaminaMax());
	}
}

void AAPSPlayerState::PostBasicAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	UpdatePlayerVitalsViewModel();
}
