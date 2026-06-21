// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimationUtilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAnimationUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public: 
	
	UFUNCTION(BlueprintCallable)
	static UAnimSequence* GetSequenceFromLocomotionAnimSet(const float direction, const float speed, struct FLocomotionAnimationSubSet locomotionAnimSet);
	
	UFUNCTION(BlueprintCallable, Category = "Curve", meta=(BlueprintThreadSafe))
	static float GetKeyFromAnimationCurve(const UAnimSequenceBase* InAnimSequence, const float& InValue, FName InCurveName, bool bDescendingCurve = false);
	
	UFUNCTION(BlueprintCallable, Category = "Curve", meta=(BlueprintThreadSafe))
	static float GetKeyFromAnimationCurveUnsorted(const UAnimSequenceBase* InAnimSequence, const float& InValue, FName InCurveName);
};
