// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Controllers/WarriorHeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroController();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister();
// End Cross Module References

// Begin Class AWarriorHeroController
void AWarriorHeroController::StaticRegisterNativesAWarriorHeroController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroController);
UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister()
{
	return AWarriorHeroController::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/WarriorHeroController.h" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorHeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWarriorHeroController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AWarriorHeroController, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams = {
	&AWarriorHeroController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroController()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton, Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorHeroController>()
{
	return AWarriorHeroController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroController);
AWarriorHeroController::~AWarriorHeroController() {}
// End Class AWarriorHeroController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroController, AWarriorHeroController::StaticClass, TEXT("AWarriorHeroController"), &Z_Registration_Info_UClass_AWarriorHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroController), 2757846201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Controllers_WarriorHeroController_h_3092950862(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
