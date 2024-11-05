// Himanshu Third Project

#include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h"
#include "AbilitySystemComponent.h"
#include "Engine/AssetManager.h"
#include "NavigationSystem.h"
#include "Characters/WarriorEnemyCharacter.h"

#include "WarriorDebugHelper.h"

UAbilityTask_WaitSpawnEnemies* UAbilityTask_WaitSpawnEnemies::WaitSpawnEnemies(UGameplayAbility* OwningAbility, FGameplayTag EventTag, TSoftClassPtr<AWarriorEnemyCharacter> SoftEnemyClassToSpawn, int32 NumToSpawn, const FVector& SpawnOrigin, float RandomSpawnRadius, const FRotator& SpawnRotation)
{
    UAbilityTask_WaitSpawnEnemies* Node = NewAbilityTask<UAbilityTask_WaitSpawnEnemies>(OwningAbility);

    Node->CachedEventTag = EventTag;
    Node->CachedSoftEnemyClassToSpawn = SoftEnemyClassToSpawn;
    Node->CachedNumToSpawn = NumToSpawn;
    Node->CachedSpawnOrigin = SpawnOrigin;
    Node->CachedRandomSpawnRadius = RandomSpawnRadius;
    Node->CachedSpawnRotation = SpawnRotation;

	return Node;
}

void UAbilityTask_WaitSpawnEnemies::Activate()
{
    FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);

    DelegateHandle = Delegate.AddUObject(this, &ThisClass::OnGameplayEventReceived);
}

void UAbilityTask_WaitSpawnEnemies::OnDestroy(bool bInOwnerFinished)
{
    FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);

    Delegate.Remove(DelegateHandle);

    Super::OnDestroy(bInOwnerFinished);
}

void UAbilityTask_WaitSpawnEnemies::OnGameplayEventReceived(const FGameplayEventData* InPayload)
{
    if (ensure(!CachedSoftEnemyClassToSpawn.IsNull()))
    {
        UAssetManager::GetStreamableManager().RequestAsyncLoad(
            CachedSoftEnemyClassToSpawn.ToSoftObjectPath(),
            FStreamableDelegate::CreateUObject(this, &ThisClass::OnEnemyClassLoaded) // We use "FStreamableDelegate" as we need to handle many things when the loading completes so when no use lambda for this.
        );
    }
    else
    {
        if (ShouldBroadcastAbilityTaskDelegates())
        {
            DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());
        }

        EndTask();
    }
}

void UAbilityTask_WaitSpawnEnemies::OnEnemyClassLoaded()
{
   UClass* LoadedClass  = CachedSoftEnemyClassToSpawn.Get();
   UWorld* World = GetWorld();

   if (!LoadedClass || !World)
   {
       if (ShouldBroadcastAbilityTaskDelegates())
       {
           DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());
       }

       EndTask();
       return;
   }

   TArray<AWarriorEnemyCharacter*> SpawnedEnemies;

   FActorSpawnParameters SpawnParam;
   SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

   for (int32 i = 0; i < CachedNumToSpawn; i++)
   {
       FVector RandomLocation;
       UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(World, CachedSpawnOrigin, RandomLocation, CachedRandomSpawnRadius);

       RandomLocation += FVector(0.f, 0.f, 150.f);

     AWarriorEnemyCharacter* SpawnedEnemy = World->SpawnActor<AWarriorEnemyCharacter>(LoadedClass, RandomLocation, CachedSpawnRotation, SpawnParam);

     if (SpawnedEnemy)
     {
         SpawnedEnemies.Add(SpawnedEnemy);
     }
   }
   
   if (ShouldBroadcastAbilityTaskDelegates())
   {
       if (!SpawnedEnemies.IsEmpty())
       {
           OnSpawnFinished.Broadcast(SpawnedEnemies);
       }
       else
       {
           DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());
       }
   }
      EndTask();
}
