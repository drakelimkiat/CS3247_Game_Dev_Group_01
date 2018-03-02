// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAverageJoeController.generated.h"

/**
 * 
 */
UCLASS()
class CHOPITLIKEITSHOT_API AEnemyAverageJoeController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this ai-controller's properties
	AEnemyAverageJoeController();

	// Called when the controlled character is spawned
	virtual void Possess(APawn* InPawn) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	FName LocationCounterKey;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AI)
	FVector LocationCounterValue;

private:
	class UBehaviorTreeComponent *BehaviorComponent;
	class UBlackboardComponent *BlackboardComponent;



};
