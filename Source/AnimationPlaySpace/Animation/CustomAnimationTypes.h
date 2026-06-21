#pragma once

#include "CoreMinimal.h"
#include "CustomAnimationTypes.generated.h"

UENUM(Blueprintable)
enum class ELocomotionState : uint8
{
	LocomotionStateStandard,
	LocomotionStateDodging,
	LocomotionStateInAir,
};

USTRUCT(BlueprintType)
struct FLocomotionAnimationData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ELocomotionState LocomotionState = ELocomotionState::LocomotionStateStandard;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShouldMove = false;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsFalling;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CharacterSpeed;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector CharacterVelocity2D;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector CharacterAcceleration;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FRotator WorldRotation;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Direction;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> LocomotionStoppingSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> LocomotionStartSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> LocomotionMovingSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector StrideDirection;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StrideScale;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StrideAlpha;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LocomotionPlayRate;
	
	// animation set to select from for locomotion animations.
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class ULocomotionAnimationSet> LocomotionAnimSetBase;
	
	// additional animation set introduced by the primary equipped item (weapon).
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class ULocomotionAnimationSet> LocomotionAnimEquipmentPrimary;
	
	// additional animation set introduced by the secondary equipped item (weapon).
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class ULocomotionAnimationSet> LocomotionAnimEquipmentSecondary;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentPrimaryStartSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentPrimaryStopSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentPrimaryMovingSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentSecondaryStartSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentSecondaryStopSequence;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UAnimSequence> EquipmentSecondaryMovingSequence;
};