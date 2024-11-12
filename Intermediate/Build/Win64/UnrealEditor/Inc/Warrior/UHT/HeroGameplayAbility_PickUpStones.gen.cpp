// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_PickUpStones() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
// End Cross Module References

// Begin Class UHeroGameplayAbility_PickUpStones
void UHeroGameplayAbility_PickUpStones::StaticRegisterNativesUHeroGameplayAbility_PickUpStones()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility_PickUpStones);
UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_NoRegister()
{
	return UHeroGameplayAbility_PickUpStones::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_PickUpStones>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::ClassParams = {
	&UHeroGameplayAbility_PickUpStones::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroGameplayAbility_PickUpStones>()
{
	return UHeroGameplayAbility_PickUpStones::StaticClass();
}
UHeroGameplayAbility_PickUpStones::UHeroGameplayAbility_PickUpStones(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_PickUpStones);
UHeroGameplayAbility_PickUpStones::~UHeroGameplayAbility_PickUpStones() {}
// End Class UHeroGameplayAbility_PickUpStones

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility_PickUpStones, UHeroGameplayAbility_PickUpStones::StaticClass, TEXT("UHeroGameplayAbility_PickUpStones"), &Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility_PickUpStones), 1020089375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_3331240145(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
