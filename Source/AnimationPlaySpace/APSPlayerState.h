// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "APSPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API AAPSPlayerState : public APlayerState, public IAbilitySystemInterface
{

	GENERATED_BODY()
	
public:
	
	AAPSPlayerState();
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	TObjectPtr<class UBasicAttributeSet> BasicAttributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	TObjectPtr<class UCombatAttributeSet> CombatAttributeSet;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="UI")
	TObjectPtr<class UAPSPlayerVM> PlayerVM;
	
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AbilitySystem")
	EGameplayEffectReplicationMode AscReplicationMode = EGameplayEffectReplicationMode::Mixed;
	
	// Ability System Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	TObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;
	
	UFUNCTION()
	void UpdatePlayerVitalsViewModel() const;
	
	UFUNCTION()
	void PostBasicAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue);
	
};
