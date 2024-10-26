// Himanshu Third Project


#include "AbilitySystem/WarriorAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "WarriorDebugHelper.h"
#include "WarriorFunctionLibrary.h"
#include "WarriorGameplayTags.h"
#include "Interfaces/PawnUIInterface.h"
#include "Components/UI/PawnUIComponent.h"
#include "Components/UI/HeroUIComponent.h"

UWarriorAttributeSet::UWarriorAttributeSet()
{
	InitCurrentHealth(1.f);
	InitMaxHealth(1.f);
	InitCurrentRage(1.f);
	InitMaxRage(1.f);
	InitAttackPower(1.f);
	InitDefensePower(1.f);
}

void UWarriorAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (!CachedPawnUIInterface.IsValid())
	{
		CachedPawnUIInterface = TWeakInterfacePtr<IPawnUIInterface>(Data.Target.GetAvatarActor());
	}

	checkf(CachedPawnUIInterface.IsValid(), TEXT("%s is didn't implement IPawnInterface"),*Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	  UPawnUIComponent* PawnUIComponent = CachedPawnUIInterface->GetPawnUIComponent();

	  checkf(PawnUIComponent, TEXT("couldn't extrac a PawnUIComponent from %s"),*Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
	{
		const float NewCurrentHealth = FMath::Clamp(GetCurrentHealth(), 0.f, GetMaxHealth());
		SetCurrentHealth(NewCurrentHealth);

		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());
	}

	if (Data.EvaluatedData.Attribute == GetCurrentRageAttribute())
	{
		const float NewCurrentRage = FMath::Clamp(GetCurrentRage(), 0.f, GetMaxRage());
		SetCurrentRage(NewCurrentRage);

		if (UHeroUIComponent* HeroUIComponent = CachedPawnUIInterface->GetHeroUIComponent())
		{
			HeroUIComponent->OnCurrentRageChanged.Broadcast(GetCurrentRage() / GetMaxRage());
		}
	}
		if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
		{
			const float OldHealth = GetCurrentHealth();
			const float DamageDone = GetDamageTaken();

			const float NewCurrentHealth = FMath::Clamp(OldHealth - DamageDone, 0.f, GetMaxHealth());

			SetCurrentHealth(NewCurrentHealth);

			/*
			const FString DebugString = FString::Printf(
				TEXT("Old Health: %f, Damage Done: %f, NewCurrentHealth: %f"),
				OldHealth,
				DamageDone,
				NewCurrentHealth
			);
			Debug::Print(DebugString, FColor::Green);
			*/

			// Notify the UI
			PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());

			// Handle Character Death
			if (GetCurrentHealth() == 0.f)
			{
				//"AddGameplayTagsToActorIfNone()" ->prevents us from adding the same tag to this actor multiple times.
				UWarriorFunctionLibrary::AddGameplayTagsToActorIfNone(Data.Target.GetAvatarActor(), WarriorGameplayTags::Shared_Status_Dead);
			}
		}
	}

