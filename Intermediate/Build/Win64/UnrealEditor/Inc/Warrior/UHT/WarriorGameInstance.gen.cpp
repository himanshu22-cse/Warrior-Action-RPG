// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister();
// End Cross Module References

// Begin Class UWarriorGameInstance
void UWarriorGameInstance::StaticRegisterNativesUWarriorGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorGameInstance);
UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister()
{
	return UWarriorGameInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WarriorGameInstance.h" },
		{ "ModuleRelativePath", "Public/WarriorGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameInstance_Statics::ClassParams = {
	&UWarriorGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton, Z_Construct_UClass_UWarriorGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorGameInstance>()
{
	return UWarriorGameInstance::StaticClass();
}
UWarriorGameInstance::UWarriorGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameInstance);
UWarriorGameInstance::~UWarriorGameInstance() {}
// End Class UWarriorGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameInstance, UWarriorGameInstance::StaticClass, TEXT("UWarriorGameInstance"), &Z_Registration_Info_UClass_UWarriorGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameInstance), 1505932852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorGameInstance_h_561121846(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
