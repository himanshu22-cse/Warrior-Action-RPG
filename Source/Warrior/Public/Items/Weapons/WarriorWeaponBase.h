// Himanshu Third Project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorWeaponBase.generated.h"

class UBoxComponent;

UCLASS()
class WARRIOR_API AWarriorWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWarriorWeaponBase();

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UStaticMeshComponent>WeaponMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UBoxComponent>WeaponMeshCollisionBox;

public:

	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponMeshCollisionBox;}
};
