// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyFirstPersonProjectGameMode.h"
#include "MyFirstPersonProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyFirstPersonProjectGameMode::AMyFirstPersonProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
