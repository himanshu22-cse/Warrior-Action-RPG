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

protected:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UStaticMeshComponent>WeaponMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UBoxComponent>WeaponMeshCollisionBox;

	UFUNCTION()
	virtual void OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:

	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponMeshCollisionBox;}
};
