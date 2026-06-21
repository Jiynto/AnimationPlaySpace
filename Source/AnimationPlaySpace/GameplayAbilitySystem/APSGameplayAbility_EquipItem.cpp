// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/APSGameplayAbility_EquipItem.h"

#include "AbilitySystemLog.h"
#include "AnimationPlaySpaceCharacter.h"
#include "APSGameplayTags.h"
#include "Data/WeaponDataAsset.h"

void UAPSGameplayAbility_EquipItem::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                    const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                    const FGameplayEventData* TriggerEventData)
{
	//Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (TriggerEventData)
	{
		if (const UWeaponDataAsset* weaponDataAsset = Cast<UWeaponDataAsset>(TriggerEventData->OptionalObject))
		{
			FGameplayTag slotTag = TriggerEventData->TargetTags.First();
			if(slotTag != FGameplayTag::EmptyTag)
			{
				if (AAnimationPlaySpaceCharacter* character = Cast<AAnimationPlaySpaceCharacter>(GetAvatarActorFromActorInfo()))
				{
					character->TrySpawnAndEquipWeapon(weaponDataAsset, slotTag);
					CommitAbility(Handle, ActorInfo, ActivationInfo);
					return EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
				}
			}
		}
	}
	UE_LOG(LogAbilitySystem, Warning, TEXT("Ability %s expects event data but none is being supplied. Use 'Activate Ability' instead of 'Activate Ability From Event' in the Blueprint."), *GetName());
	constexpr bool bReplicateEndAbility = false;
	constexpr bool bWasCancelled = true;
	EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
