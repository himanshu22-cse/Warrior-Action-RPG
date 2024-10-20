// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_OrientToTargetActor.generated.h"


UCLASS()
class WARRIOR_API UBTService_OrientToTargetActor : public UBTService
{
	GENERATED_BODY()
	

	UBTService_OrientToTargetActor();

	//~ Begin UBT_Node Interface
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
/*
the GetStaticDescription() method is often overridden in AI-related classes, such as behavior tree nodes, tasks, or decorators,
to provide a static description of the node's functionality.
This is useful for debugging and gives designers insight into what the node does when viewing it in the editor.
*/

	virtual FString GetStaticDescription() const override;
	//~ End UBT_Node Interface

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Target")
	FBlackboardKeySelector InTargetActorKey;

	UPROPERTY(EditAnywhere, Category = "Target")
	float RotationInterpSpeed;

};
