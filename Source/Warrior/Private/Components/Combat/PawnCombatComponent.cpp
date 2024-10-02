// Himanshu Third Project

#include "Components/Combat/PawnCombatComponent.h"

void UPawnCombatComponent::RegisterSpawnWeapon(FGameplayTag InWeaponTagToResister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisteraAsEquippedWeapon)
{
	checkf(!CharacterCarriedWeapon.Contains(InWeaponTagToResister), TEXT("A Named %s has already been added"),*InWeaponTagToResister.ToString());
	check(InWeaponToRegister);

	CharacterCarriedWeapon.Emplace(InWeaponTagToResister, InWeaponToRegister); // Emplace Sets the key value

	if (bRegisteraAsEquippedWeapon)
	{
		CurrentEquippedWeaponTag = InWeaponTagToResister;
	}

}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const
{
	if (!CharacterCarriedWeapon.Contains(InWeaponTagToGet))
	{
		if (AWarriorWeaponBase* const* FoundWeapon = CharacterCarriedWeapon.Find(InWeaponTagToGet))
		{
			return *FoundWeapon;
		}
	}
	return nullptr;
}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCurrentEquippedWeapon() const
{
	if (!CurrentEquippedWeaponTag.IsValid())
	{
		return nullptr;
	}

	return GetCharacterCarriedWeaponByTag(CurrentEquippedWeaponTag);
}
