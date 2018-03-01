// Fill out your copyright notice in the Description page of Project Settings.

#include "AiSubLevelScriptActor.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AAiSubLevelScriptActor::AAiSubLevelScriptActor()
{
	SpawnEnemyRadius = 1000.0f;
	EnemyAverageJoeHalfHeight = 88.0f;

}

// Called when the game starts or when spawned
void AAiSubLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
	// Call SpawnEnemyAverageJoe once per two seconds, starting two seconds from now.
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AAiSubLevelScriptActor::SpawnEnemyAverageJoe, 2.0f, true, 2.0f);

}

// Called to spawn an instance of the EnemyAverageJoe class
void AAiSubLevelScriptActor::SpawnEnemyAverageJoe()
{
	const float randFloat = FMath::FRandRange(0.0f, 180.0f);
	float randSin, randCos;
	FMath::SinCos(&randSin, &randCos, FMath::DegreesToRadians(randFloat));

	const FVector spawnVector = FVector(randSin * SpawnEnemyRadius, randCos * SpawnEnemyRadius, EnemyAverageJoeHalfHeight);
	const FRotator spawnRotator = FRotator(0.0f, -90.0f - randFloat, 0.0f);
	GetWorld()->SpawnActor<AEnemyAverageJoe>(BpEnemyAverageJoe, spawnVector, spawnRotator);

}

