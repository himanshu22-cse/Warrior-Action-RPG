// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "GameModes/WarriorGameModeBase.h"
#include "WarriorSurvivalGameMode.generated.h"

UENUM(BlueprintType)
enum class EWarriorSurvialGameModeState : uint8
{
	WaitSpawnNewWave,
	SpawningNewWave,
	InProgress,
	WaveCompleted,
	AllWavesDone,
	PlayerDied
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSurvialGameModeStateChangedDelegate, EWarriorSurvialGameModeState, CurrentState);


UCLASS()
class WARRIOR_API AWarriorSurvivalGameMode : public AWarriorGameModeBase
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState InState);

	UPROPERTY()
	EWarriorSurvialGameModeState CurrentSurvialGameModeState;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnSurvialGameModeStateChangedDelegate OnSurvialGameModeStateChanged;

};
