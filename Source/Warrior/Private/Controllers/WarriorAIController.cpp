// Himanshu Third Project


#include "Controllers/WarriorAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "WarriorDebugHelper.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AWarriorAIController::AWarriorAIController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent")) // "PathFollowingComponent" ->this is component that's responsible for pathfinding for the AI.
{
	if (UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))  //"GetPathFollowingComponent()"-> return PathFollowingComponent
	{

		AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("EnemySenseConfig_Sight");
		AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;
		AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false; // AI characters do not detect friendly actors.
		AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false; //Neutral characters (like civilians or non-combat NPCs) are ignored by the AI.
		AISenseConfig_Sight->SightRadius = 5000.f;
		AISenseConfig_Sight->LoseSightRadius = 0.f; // Enemies will never lose sight radius of our player.
		AISenseConfig_Sight->PeripheralVisionAngleDegrees = 360.f; // determines vision angle of our enemy,if we making stealth game then we might decrease this value lower than 180


		EnemyPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("EnemyPerceptionComponent");
		EnemyPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);
		EnemyPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());

		EnemyPerceptionComponent->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &ThisClass::OnEnemyPerceptionUpdated);

		Debug::Print(TEXT("CrowdFollowingComponent"), FColor::Cyan);
	}	
}

void AWarriorAIController::OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{

}
