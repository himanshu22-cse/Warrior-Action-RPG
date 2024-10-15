// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Interfaces/PawnCombatInterface.h"
#include "Interfaces/PawnUIInterface.h"
#include "WarriorBaseCharacter.generated.h"

class UWarriorAttributeSet;
class UWarriorAbilitySystemComponent;
class UDataAsset_StartUpDataBase;

UCLASS()
class WARRIOR_API AWarriorBaseCharacter : public ACharacter,public IAbilitySystemInterface,public IPawnCombatInterface,public IPawnUIInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarriorBaseCharacter();

	// Begin IAbilitySystemInterface 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// End IAbilitySystemInterface

	// Begin IPawnCombatInterface 
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	// End IPawnCombatInterface

	// Begin IPawnUIInterface
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	// End IPawnUIInterface

protected:

	// Begin APawn Interface
	virtual void PossessedBy(AController* NewController) override;
	// End APawn Interface

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UWarriorAbilitySystemComponent> WarriorAbilitySystemComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UWarriorAttributeSet> WarriorAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

public:
	FORCEINLINE UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponent() const { return WarriorAbilitySystemComponent; }

	FORCEINLINE UWarriorAttributeSet* GetAttributeSet() const { return WarriorAttributeSet; }

};

