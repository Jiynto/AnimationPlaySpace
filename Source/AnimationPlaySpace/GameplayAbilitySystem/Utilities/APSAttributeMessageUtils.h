#pragma once
#include "GameplayTagContainer.h"
#include "APSAttributeMessageUtils.generated.h"

USTRUCT(BlueprintType)
struct FAttributeChangeMessage
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	FGameplayTag AttributeChangeTag;

	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	float OldValue;
	
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	float NewValue;
};