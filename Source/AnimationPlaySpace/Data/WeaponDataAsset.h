// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Items/Weapons/APSWeaponsBase.h"
#include "WeaponDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UWeaponDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	
		
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	FVector AttachLocationOffset = FVector::ZeroVector;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	FRotator AttachRotationOffset = FRotator::ZeroRotator;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TSubclassOf<AAPSWeaponsBase> WeaponActorClass;
	 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TArray<TObjectPtr<class UGameplayAbility>> GameplayAbilitiesToGrant;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TArray<TObjectPtr<class UAnimationAsset>> AttackMontages;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TObjectPtr<class ULocomotionAnimationSet> LocomotionAnimSet;
};
