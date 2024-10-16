// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WarriorWidgetBase.generated.h"

class UHeroUIComponent;

UCLASS()
class WARRIOR_API UWarriorWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	virtual void NativeOnInitialized() override; // This function will be called once after widget is created.

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = " On Owning Hero UI Component Initialized"))
	void BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* OwnignHeroUIComponent);
};
