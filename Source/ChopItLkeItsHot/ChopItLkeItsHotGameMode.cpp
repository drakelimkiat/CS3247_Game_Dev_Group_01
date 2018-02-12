// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ChopItLkeItsHotGameMode.h"
#include "ChopItLkeItsHotHUD.h"
#include "ChopItLkeItsHotCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChopItLkeItsHotGameMode::AChopItLkeItsHotGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChopItLkeItsHotHUD::StaticClass();
}
