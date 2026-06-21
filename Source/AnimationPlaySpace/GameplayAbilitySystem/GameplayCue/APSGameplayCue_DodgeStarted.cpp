// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GameplayCue/APSGameplayCue_DodgeStarted.h"

#include "AnimationPlaySpaceCharacter.h"
#include "PlayerCharacter.h"


bool UAPSGameplayCue_DodgeStarted::OnActive_Implementation(AActor* MyTarget,
	const FGameplayCueParameters& Parameters) const
{
	if (APlayerCharacter* MyCharacter = Cast<APlayerCharacter>(MyTarget))
	{
		MyCharacter->OnDodgeStart();
	}
	
	return Super::OnActive_Implementation(MyTarget, Parameters);
}

bool UAPSGameplayCue_DodgeStarted::OnRemove_Implementation(AActor* MyTarget,
	const FGameplayCueParameters& Parameters) const
{
	if (APlayerCharacter* MyCharacter = Cast<APlayerCharacter>(MyTarget))
	{
		MyCharacter->OnDodgeEnd();
	}
	
	return Super::OnRemove_Implementation(MyTarget, Parameters);
}

