// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetFilRougeGameMode.h"
#include "ProjetFilRougeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetFilRougeGameMode::AProjetFilRougeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
