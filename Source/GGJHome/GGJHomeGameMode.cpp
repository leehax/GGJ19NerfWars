// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GGJHomeGameMode.h"
#include "GGJHomeHUD.h"
#include "GGJHomeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJHomeGameMode::AGGJHomeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGGJHomeHUD::StaticClass();
}
