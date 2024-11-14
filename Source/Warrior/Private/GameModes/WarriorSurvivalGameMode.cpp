// Himanshu Third Project

#include "GameModes/WarriorSurvivalGameMode.h"

void AWarriorSurvivalGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AWarriorSurvivalGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWarriorSurvivalGameMode::SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState InState)
{
	CurrentSurvialGameModeState = InState;

	OnSurvialGameModeStateChanged.Broadcast(CurrentSurvialGameModeState);
}
