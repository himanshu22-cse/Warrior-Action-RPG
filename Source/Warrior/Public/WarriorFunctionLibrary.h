// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WarriorFunctionLibrary.generated.h"

class UWarriorAbilitySystemComponent;

UENUM()
enum class EWarriorConfirmType : uint8
{
	Yes,
	No
};


UCLASS()
class WARRIOR_API UWarriorFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()
	
public:

	static UWarriorAbilitySystemComponent* NativeGetWarriorASCFromActor(AActor* InActor);

	UFUNCTION(BlueprintCallable, Category = "Warrior|FunctionLibrary")
	static void AddGameplayTagsIfNone(AActor* InActor, FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category = "Warrior|FunctionLibrary")
	static void RemoveGameplayFromActorIfFound(AActor* InActor,FGameplayTag TagToRemove);
	
	static bool NativeDoesActorHaveTag(AActor* InActor,FGameplayTag TagToCheck);

/*
So by using an enum as an out parameter in the blueprint only function, we can give this function multiple

execution pins.
*/

	UFUNCTION(BlueprintCallable, Category = "Warrior|FunctionLibrary", meta = (DisplayName = "Does Actor Have Tag", ExpandEnumAsExecs = "OutConfirmType"))
	static void BP_DoesActorHasTag(AActor* InActor,FGameplayTag TagToCheck,EWarriorConfirmType& OutConfirmType);
};
