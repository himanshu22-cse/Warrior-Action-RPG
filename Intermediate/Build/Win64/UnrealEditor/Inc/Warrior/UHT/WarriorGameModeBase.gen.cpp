// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/GameModes/WarriorGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorGameDifficulty();
// End Cross Module References

// Begin Class AWarriorGameModeBase
void AWarriorGameModeBase::StaticRegisterNativesAWarriorGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorGameModeBase);
UClass* Z_Construct_UClass_AWarriorGameModeBase_NoRegister()
{
	return AWarriorGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AWarriorGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameDifficulty_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGameDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGameDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorGameModeBase_Statics::NewProp_CurrentGameDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorGameModeBase_Statics::NewProp_CurrentGameDifficulty = { "CurrentGameDifficulty", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorGameModeBase, CurrentGameDifficulty), Z_Construct_UEnum_Warrior_EWarriorGameDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameDifficulty_MetaData), NewProp_CurrentGameDifficulty_MetaData) }; // 1999907421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorGameModeBase_Statics::NewProp_CurrentGameDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorGameModeBase_Statics::NewProp_CurrentGameDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorGameModeBase_Statics::ClassParams = {
	&AWarriorGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorGameModeBase()
{
	if (!Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton, Z_Construct_UClass_AWarriorGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorGameModeBase>()
{
	return AWarriorGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorGameModeBase);
AWarriorGameModeBase::~AWarriorGameModeBase() {}
// End Class AWarriorGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorGameModeBase, AWarriorGameModeBase::StaticClass, TEXT("AWarriorGameModeBase"), &Z_Registration_Info_UClass_AWarriorGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorGameModeBase), 2616286565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorGameModeBase_h_3906878019(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
