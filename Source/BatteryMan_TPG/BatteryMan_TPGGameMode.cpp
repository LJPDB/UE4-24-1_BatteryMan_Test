// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatteryMan_TPGGameMode.h"
#include "BatteryMan_TPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABatteryMan_TPGGameMode::ABatteryMan_TPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
