// Himanshu Third Project


#include "Items/Weapons/WarriorWeaponBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AWarriorWeaponBase::AWarriorWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);

	WeaponMeshCollisionBox = CreateDefaultSubobject<UBoxComponent>("WeaponMeshCollisionBox");
	WeaponMeshCollisionBox->SetupAttachment(GetRootComponent());
	WeaponMeshCollisionBox->SetBoxExtent(FVector(20.f));
	WeaponMeshCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


