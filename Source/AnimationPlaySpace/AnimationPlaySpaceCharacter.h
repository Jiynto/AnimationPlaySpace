// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AnimationPlaySpaceCharacter.generated.h"

struct FGameplayTag;
DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS(abstract)
class AAnimationPlaySpaceCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:
	
	// Should likely be moved to an inventory system in the future.
	UFUNCTION(BlueprintCallable, Category = "Equipment|Weapons")
	bool TrySpawnAndEquipWeapon(const class UWeaponDataAsset* weaponData, FGameplayTag equipSocketTag);
	
	UFUNCTION(Category = "Equipment|Weapons")
	void OnNewWeaponEquipped();
	
	UFUNCTION(BlueprintCallable)
	void SetStance(const bool bInStance);
	
	UFUNCTION(BlueprintCallable)
	bool GetStance() const { return bInWeaponStance; };
	
protected:
	
	UPROPERTY(BlueprintReadOnly, Category = "Equipment|Weapons")
	TObjectPtr<class AAPSWeaponsBase> EquippedWeaponLeft;
	
	UPROPERTY(BlueprintReadOnly, Category = "Equipment|Weapons")
	TObjectPtr<class AAPSWeaponsBase> EquippedWeaponRight;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	FName LeftHandSocketName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	FName RightHandSocketName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	bool bInWeaponStance = false;

public:

	/** Constructor */
	AAnimationPlaySpaceCharacter();	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Equipment|Weapons")
	TObjectPtr<const class UWeaponDataAsset> EquippedWeaponDataLeft;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Equipment|Weapons")
	TObjectPtr<const class UWeaponDataAsset> EquippedWeaponDataRight;

	FName GetEquipmentSocketNameByTag( FGameplayTag tag ) const;
};

