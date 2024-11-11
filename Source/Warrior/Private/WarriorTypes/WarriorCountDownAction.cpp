// Himanshu Third Project


#include "WarriorTypes/WarriorCountDownAction.h"

void FWarriorCountDownAction::UpdateOperation(FLatentResponse& Response)
{
	if (bNeedToCancel)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Cancelled;

		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);

		return;
	}
	
	if (ElapsedTimeSinceStart >= TotalCountDownTime)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Completed;

		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);

		return;
	}

	//Countdown is not completed
	if (ElapsedInterval < UpdateInterval)
	{
		ElapsedInterval += Response.ElapsedTime(); // "ElapsedTime" is like delta time (Update every frame)
	}
	else
	{
		ElapsedTimeSinceStart += UpdateInterval > 0.f ? UpdateInterval : Response.ElapsedTime();

		OutRemainingTime = TotalCountDownTime - ElapsedTimeSinceStart;

		CountDownOutput = EWarriorCountDownActionOutput::Updated;

		Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);

		ElapsedInterval = 0.f; // prepare for the next cycle of time updates or cooldown checks
	}
}

void FWarriorCountDownAction::CancelAction()
{
	bNeedToCancel = true;
}
