// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"




/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditDefaultsOnly)
	FName BlackboardKey_AttackTarget;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UBehaviorTree> BehaviorTree;
	
	virtual void Tick(float DeltaSeconds) override;
	
protected:
	
	virtual void OnPossess(APawn* InPawn) override;
	
};
