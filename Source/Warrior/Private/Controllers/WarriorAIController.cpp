// Himanshu Third Project


#include "Controllers/WarriorAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "WarriorDebugHelper.h"

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

		SetGenericTeamId(FGenericTeamId(1));

		Debug::Print(TEXT("CrowdFollowingComponent"), FColor::Cyan);
	}	
}

ETeamAttitude::Type AWarriorAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* PawnToCheck = Cast<APawn>(&Other);

	IGenericTeamAgentInterface* OtherTeamAgent = Cast<IGenericTeamAgentInterface>(PawnToCheck->GetController());

	if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() != GetGenericTeamId())
	{
		 return ETeamAttitude::Hostile;
	}

	return ETeamAttitude::Friendly;
}

void AWarriorAIController::OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed() && Actor)
	{
		if (UBlackboardComponent* BlackboardComponent = GetBlackboardComponent())
		{
			BlackboardComponent->SetValueAsObject(FName("TargetActor"), Actor);
		}
	}
}
