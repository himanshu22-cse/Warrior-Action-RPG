// Himanshu Third Project

#include "Components/Combat/PawnCombatComponent.h"
#include "Components/BoxComponent.h"
#include "Items/Weapons/WarriorWeaponBase.h"
#include "WarriorDebugHelper.h"

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
	if (CharacterCarriedWeapon.Contains(InWeaponTagToGet))
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

void UPawnCombatComponent::ToggleWeaponCollision(bool bShouldEnable, EToggleDamageType ToggleDamageType)
{
	if (ToggleDamageType == EToggleDamageType::CurrentEquippedWeapon)
	{
	  AWarriorWeaponBase* WeaponToToggle = GetCharacterCurrentEquippedWeapon();

	  check(WeaponToToggle);

	  if (bShouldEnable)
	  {
		  WeaponToToggle->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		  Debug::Print(WeaponToToggle->GetName() + TEXT(" collision enabled"), FColor::Green);
	  }
	  else
	  {
		  WeaponToToggle->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		  Debug::Print(WeaponToToggle->GetName() + TEXT(" collision disabled"), FColor::Red);

	  }
	}
}
