// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/Controllers/EnemyAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	if (IsValid(BehaviorTree))
	{
		RunBehaviorTree(BehaviorTree);
	}
}


void AEnemyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (IsValid(Blackboard))
	{
		if (Blackboard->GetValueAsObject(BlackboardKey_AttackTarget) == nullptr)
		{
			Blackboard->SetValueAsObject(BlackboardKey_AttackTarget, UGameplayStatics::GetPlayerCharacter(this, 0));
		}
	}
}


