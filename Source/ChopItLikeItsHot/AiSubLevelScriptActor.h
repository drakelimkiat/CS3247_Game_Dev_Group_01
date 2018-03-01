// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnemyAverageJoe.h"
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "AiSubLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class CHOPITLIKEITSHOT_API AAiSubLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

public:
	// Sets default values for this level-script-actor's properties
	AAiSubLevelScriptActor();

	// Called to spawn an instance of the EnemyAverageJoe class
	UFUNCTION(BlueprintCallable, Category = Custom)
	void SpawnEnemyAverageJoe();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AiSubLevel)
	float SpawnEnemyRadius;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = AiSubLevel)
	TSubclassOf<AEnemyAverageJoe> BpEnemyAverageJoe;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	FTimerHandle MemberTimerHandle;

	float EnemyAverageJoeHalfHeight;



};
