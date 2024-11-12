// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_HeroGameplayAbility_PickUpStones_generated_h
#error "HeroGameplayAbility_PickUpStones.generated.h already included, missing '#pragma once' in HeroGameplayAbility_PickUpStones.h"
#endif
#define WARRIOR_HeroGameplayAbility_PickUpStones_generated_h

#define FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConsumeStones); \
	DECLARE_FUNCTION(execCollectStones);


#define FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility_PickUpStones(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayAbility_PickUpStones, UWarriorHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayAbility_PickUpStones)


#define FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayAbility_PickUpStones(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroGameplayAbility_PickUpStones(UHeroGameplayAbility_PickUpStones&&); \
	UHeroGameplayAbility_PickUpStones(const UHeroGameplayAbility_PickUpStones&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility_PickUpStones); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility_PickUpStones); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayAbility_PickUpStones) \
	NO_API virtual ~UHeroGameplayAbility_PickUpStones();


#define FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_11_PROLOG
#define FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_INCLASS_NO_PURE_DECLS \
	FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UHeroGameplayAbility_PickUpStones>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
