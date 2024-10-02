// Himanshu Third Project

#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Characters/WarriorHeroCharacter.h"
#include "Controllers/WarriorHeroController.h"
#include "Components/Combat/HeroCombatComponent.h"

AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo() 
{
	if (!CachedWarriorHeroCharacter.IsValid())
	{
	 CachedWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
	}
	
	return CachedWarriorHeroCharacter.IsValid()? CachedWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroController* UWarriorHeroGameplayAbility::GetWarriorHeroControllerFromActorInfo()
{
	if (CachedWarriorHeroController.IsValid())
	{
	  CachedWarriorHeroController = Cast<AWarriorHeroController>(CurrentActorInfo->AvatarActor);
	}

	return CachedWarriorHeroController.IsValid() ? CachedWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
