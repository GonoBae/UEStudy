// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEStudyGameMode.h"
#include "UEStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEStudyGameMode::AUEStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
