// Himanshu Third Project


#include "Interfaces/PawnUIInterface.h"
#include "Components/UI/HeroUIComponent.h"

// Add default functionality here for any IPawnUIInterface functions that are not pure virtual.

UHeroUIComponent* IPawnUIInterface::GetHeroUIComponent() const
{
    return nullptr;
}
