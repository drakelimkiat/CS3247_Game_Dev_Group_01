// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAverageJoe.h"
#include "EnemyAverageJoeMovementComponent.h"


// Sets default values
AEnemyAverageJoe::AEnemyAverageJoe(const FObjectInitializer &ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UEnemyAverageJoeMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyAverageJoe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyAverageJoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyAverageJoe::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

