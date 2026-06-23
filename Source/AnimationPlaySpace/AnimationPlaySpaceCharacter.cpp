// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimationPlaySpaceCharacter.h"

#include "APSGameplayTags.h"
#include "GameplayTagContainer.h"
#include "PlayerAnimInstance.h"
#include "Engine/LocalPlayer.h"

#include "Components/CapsuleComponent.h"
#include "Data/WeaponDataAsset.h"

#include "GameFramework/CharacterMovementComponent.h"

#include "GameFramework/Controller.h"
#include "Items/Weapons/APSWeaponsBase.h"

bool AAnimationPlaySpaceCharacter::TrySpawnAndEquipWeapon(const class UWeaponDataAsset* weaponData, FGameplayTag equipSocketTag)
{
	if (!weaponData->WeaponActorClass)
	{
		return false;
	}
	
	if (equipSocketTag == FGameplayTag::EmptyTag)
	{
		return false;
	}
	
	if (UWorld* world = GetWorld())
	{
		FName equipSocket = GetEquipmentSocketNameByTag(equipSocketTag);
		FActorSpawnParameters spawnInfo;
		//FVector offset = GetMesh()->GetSocketTransform(equipSocket, RTS_Component).TransformPosition(weaponData->AttachLocationOffset);
		FVector location = GetMesh()->GetSocketLocation(equipSocket); //+offset;
		FRotator rotation = GetMesh()->GetSocketRotation(equipSocket); //+ weaponData->AttachRotationOffset;
		
		if (AAPSWeaponsBase* newWeapon = world->SpawnActor<AAPSWeaponsBase>(weaponData->WeaponActorClass,location, rotation, spawnInfo))
		{
			//newWeapon->SetActorLocation(newWeapon->GetActorLocation() + newWeapon->GetActorTransform().TransformPosition(weaponData->AttachLocationOffset));
			FAttachmentTransformRules attachmentRules = FAttachmentTransformRules(FAttachmentTransformRules::KeepWorldTransform);
			if (newWeapon->AttachToComponent(GetMesh(),attachmentRules, equipSocket))
			{
				newWeapon->SetMeshLocationAndRotationOffset(weaponData->AttachLocationOffset, weaponData->AttachRotationOffset);
				// replace with a proper inventory system.
				if (equipSocket == LeftHandSocketName)
				{
					EquippedWeaponLeft = newWeapon;
					EquippedWeaponDataLeft = weaponData;
				}
				else if (equipSocket == RightHandSocketName)
				{
					EquippedWeaponRight = newWeapon;
					EquippedWeaponDataRight = weaponData;
				}
				OnNewWeaponEquipped();
				return true;
			}
			
		}
	}
	return false;
}

void AAnimationPlaySpaceCharacter::OnNewWeaponEquipped()
{
	if (USkeletalMeshComponent* mesh = GetMesh())
	{
		// needs to be replaced with a refactor to the structure of the anim instance base class so locomotion sets are not unique to the player.
		if (UPlayerAnimInstance* animInstance = Cast<UPlayerAnimInstance>(mesh->GetAnimInstance()))
		{
			if (EquippedWeaponDataRight)
			{
				animInstance->LocomotionAnimationData.LocomotionAnimEquipmentPrimary = EquippedWeaponDataRight->LocomotionAnimSet;
			}
			else
			{
				animInstance->LocomotionAnimationData.LocomotionAnimEquipmentPrimary = animInstance->LocomotionAnimationData.LocomotionAnimSetBase;
			}
			
			if (EquippedWeaponDataLeft)
			{
				animInstance->LocomotionAnimationData.LocomotionAnimEquipmentSecondary = EquippedWeaponDataLeft->LocomotionAnimSet;
			}
			else
			{
				animInstance->LocomotionAnimationData.LocomotionAnimEquipmentPrimary = animInstance->LocomotionAnimationData.LocomotionAnimSetBase;
			}
		}
	}
}

void AAnimationPlaySpaceCharacter::SetStance(const bool bInStance)
{
	bInWeaponStance = bInStance;
}

AAnimationPlaySpaceCharacter::AAnimationPlaySpaceCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	
	
}

FName AAnimationPlaySpaceCharacter::GetEquipmentSocketNameByTag(FGameplayTag tag) const
{
	if (tag == TAG_EQUIPMENT_SLOT_LEFT)
	{
		return LeftHandSocketName;
	}
	
	if (tag == TAG_EQUIPMENT_SLOT_RIGHT)
	{
		return RightHandSocketName;
	}
	
	return NAME_None;
}




