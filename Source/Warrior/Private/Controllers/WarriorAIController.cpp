// Himanshu Third Project


#include "Controllers/WarriorAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "WarriorDebugHelper.h"

AWarriorAIController::AWarriorAIController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent")) // "PathFollowingComponent" ->this is component that's responsible for pathfinding for the AI.
{
	if (UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))  //"GetPathFollowingComponent()"-> return PathFollowingComponent
	{
		Debug::Print(TEXT("CrowdFollowingComponent"), FColor::Cyan);
	}	
}
