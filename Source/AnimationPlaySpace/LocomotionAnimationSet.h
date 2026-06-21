// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LocomotionAnimationSet.generated.h"



USTRUCT(Blueprintable)
struct FLocomotionAnimationSequenceSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Direction;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<float,TObjectPtr<UAnimSequence>> Sequences;
	
};


USTRUCT(Blueprintable)
struct FLocomotionAnimationSubSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool bUseBlendSpace = false;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="!bUseBlendSpace"))
	TArray<FLocomotionAnimationSequenceSet> SequencesSets;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="bUseBlendSpace"))
	TObjectPtr<UBlendSpace> BlendSpace;
	
	bool TryGetSequenceSetByDirection(float direction, FLocomotionAnimationSequenceSet& result) const;
	
};

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API ULocomotionAnimationSet : public UDataAsset
{
	GENERATED_BODY()
	
public:
		
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<UAnimSequence> IdleAnimation;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FLocomotionAnimationSubSet StartAnimations;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FLocomotionAnimationSubSet StopAnimations;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FLocomotionAnimationSubSet MovingAnimations;

};



