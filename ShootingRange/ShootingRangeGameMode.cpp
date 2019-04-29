// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ShootingRangeGameMode.h"
#include "ShootingRangeHUD.h"
#include "ShootingRangeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingRangeGameMode::AShootingRangeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootingRangeHUD::StaticClass();
}
