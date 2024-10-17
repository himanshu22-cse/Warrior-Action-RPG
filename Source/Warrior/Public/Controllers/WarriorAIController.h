// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WarriorAIController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;

UCLASS()
class WARRIOR_API AWarriorAIController : public AAIController
{
	GENERATED_BODY()

public:

	AWarriorAIController(const FObjectInitializer& ObjectInitializer);

protected:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly) // Perception means AI agent see the target and move to the target.
	TObjectPtr<UAIPerceptionComponent>EnemyPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UAISenseConfig_Sight> AISenseConfig_Sight;


	UFUNCTION()
	virtual void OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

};
