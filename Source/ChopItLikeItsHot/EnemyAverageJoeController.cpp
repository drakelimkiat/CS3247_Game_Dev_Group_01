// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAverageJoe.h"
#include "EnemyAverageJoeController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"


// Sets default values
AEnemyAverageJoeController::AEnemyAverageJoeController()
{
	BehaviorComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));

	LocationCounterKey = "LocationCounter";
	LocationCounterValue = FVector(-460.0f, 0.0f, 88.0f);

}

// Called when the controlled character is spawned
void AEnemyAverageJoeController::Possess(APawn* InPawn)
{
	Super::Possess(InPawn);

	AEnemyAverageJoe *EnemyAverageJoe = Cast<AEnemyAverageJoe>(InPawn);
	if (EnemyAverageJoe) {
		UBehaviorTree *BehaviorTree = EnemyAverageJoe->GetBehaviorTree();
		if (BehaviorTree && BehaviorTree->BlackboardAsset) {
			BlackboardComponent->InitializeBlackboard(*(BehaviorTree->BlackboardAsset));
			BlackboardComponent->SetValueAsVector(LocationCounterKey, LocationCounterValue);

		}

		BehaviorComponent->StartTree(*BehaviorTree);
	}

}

