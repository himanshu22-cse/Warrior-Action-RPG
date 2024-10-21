// Himanshu Third Project

#include "AnimInstances/WarriorBaseAnimInstance.h"
#include "WarriorFunctionLibrary.h"

bool UWarriorBaseAnimInstance::DoesOwnerHaveTag(FGameplayTag TagToCheck) const
{
    if (APawn* OnwningPawn = TryGetPawnOwner())
    {
        return UWarriorFunctionLibrary::NativeDoesActorHaveTag(OnwningPawn, TagToCheck);
    }

    return false;
}
