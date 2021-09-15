// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToonPlatformerGameMode.h"
#include "ToonPlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToonPlatformerGameMode::AToonPlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
