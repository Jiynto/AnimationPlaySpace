// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSVMBase.h"
#include "APSPlayerVM.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSPlayerVM : public UAPSVMBase
{
	GENERATED_BODY()
	
public:
	
	UAPSPlayerVM();
	
	UPROPERTY(BlueprintReadWrite, FieldNotify)
	TObjectPtr<class UAPSPlayerVitalsVM> PlayerVitalsVM;
	
};
