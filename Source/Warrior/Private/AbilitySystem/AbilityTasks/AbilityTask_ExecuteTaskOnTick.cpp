// Himanshu Third Project

#include "AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h"

UAbilityTask_ExecuteTaskOnTick::UAbilityTask_ExecuteTaskOnTick()
{
	bTickingTask = true;
}

UAbilityTask_ExecuteTaskOnTick* UAbilityTask_ExecuteTaskOnTick::ExecuteTaskOnTick(UGameplayAbility* OwningAbility)
{

   UAbilityTask_ExecuteTaskOnTick* Node = NewAbilityTask<UAbilityTask_ExecuteTaskOnTick>(OwningAbility);
	
   return Node;

}

void UAbilityTask_ExecuteTaskOnTick::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);

	// "ShouldBroadcastAbilityTaskDelegates()" determines whether an ability task should send notifications to listeners (delegates) regarding its state.
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnAbilityTaskTickDelegate.Broadcast(DeltaTime);
	}
	else
	{
		EndTask();
	}
}
