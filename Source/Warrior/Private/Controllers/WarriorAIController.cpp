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
		
}

ETeamAttitude::Type AWarriorAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* PawnToCheck = Cast<APawn>(&Other);

	IGenericTeamAgentInterface* OtherTeamAgent = Cast<IGenericTeamAgentInterface>(PawnToCheck->GetController());

	if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() < GetGenericTeamId()) // Using " < " will enable enemy to see only hero character and not eqs 
	{
		 return ETeamAttitude::Hostile;
	}

	return ETeamAttitude::Friendly;
}

void AWarriorAIController::BeginPlay()
{
	Super::BeginPlay();

	if (UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))  //"GetPathFollowingComponent()"-> return PathFollowingComponent
	{
		//"SetCrowdSimulationState()" we can use to toggle this crowd avoidance on and off.
		CrowdComp->SetCrowdSimulationState(bEnableDetourCrowdAvoidance ? ECrowdSimulationState::Enabled : ECrowdSimulationState::Disabled);

		// "SetCrowdAvoidanceQuality()"-> how well AI characters avoid each other in crowded space
		
		switch (DetourCrowdAvoidanceQuality)
		{
		case 1:CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);
			break;

		case 2:CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Medium);
			break;
				
		case 3:CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Good);
			break;

		case 4:CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);
			break;

		default:
			break;
		}

/*
  "SetAvoidanceGroup()" ->how AI characters interact with each other in terms of avoidance.
  *This is particularly useful when you want to group certain AI characters together
  *Allowing them to avoid each other while ignoring other groups.
*/
		CrowdComp->SetAvoidanceGroup(1);

		CrowdComp->SetGroupsToAvoid(1);

//"SetCrowdCollisionQueryRange()" ->how far away an AI character can "see" other characters and obstacles when navigating
		CrowdComp->SetCrowdCollisionQueryRange(CollisonQueryRange);

	}
}

void AWarriorAIController::OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (UBlackboardComponent* BlackboardComponent = GetBlackboardComponent())
	{
		if (!BlackboardComponent->GetValueAsObject(FName("TargetActor")))
		{
			if (Stimulus.WasSuccessfullySensed() && Actor)
			{
				BlackboardComponent->SetValueAsObject(FName("TargetActor"), Actor);
			}
		}
	}

}
