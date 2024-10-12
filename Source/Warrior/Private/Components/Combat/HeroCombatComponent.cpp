// Himanshu Third Project

#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/WarriorHeroWeapon.h"
#include "WarriorDebugHelper.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"

AWarriorHeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AWarriorHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    // First we make sure ....
    if (OverlappedActors.Contains(HitActor))
    {
        return;     
    } 
    // ... that we can only damage the target actor once per attack.

    OverlappedActors.AddUnique(HitActor); // To make sure we don't add the same one multiple times.

    FGameplayEventData Data;
    Data.Instigator = GetOwningPawn();
    Data.Target = HitActor;

    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        WarriorGameplayTags::Shared_Event_MeleeHit,
        Data
        );

}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
    
}
