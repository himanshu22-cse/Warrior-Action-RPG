// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/GameModes/WarriorSurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorSurvivalGameMode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature();
// End Cross Module References

// Begin Enum EWarriorSurvialGameModeState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorSurvialGameModeState;
static UEnum* EWarriorSurvialGameModeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorSurvialGameModeState"));
	}
	return Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorSurvialGameModeState>()
{
	return EWarriorSurvialGameModeState_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllWavesDone.Name", "EWarriorSurvialGameModeState::AllWavesDone" },
		{ "BlueprintType", "true" },
		{ "InProgress.Name", "EWarriorSurvialGameModeState::InProgress" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
		{ "PlayerDied.Name", "EWarriorSurvialGameModeState::PlayerDied" },
		{ "SpawningNewWave.Name", "EWarriorSurvialGameModeState::SpawningNewWave" },
		{ "WaitSpawnNewWave.Name", "EWarriorSurvialGameModeState::WaitSpawnNewWave" },
		{ "WaveCompleted.Name", "EWarriorSurvialGameModeState::WaveCompleted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorSurvialGameModeState::WaitSpawnNewWave", (int64)EWarriorSurvialGameModeState::WaitSpawnNewWave },
		{ "EWarriorSurvialGameModeState::SpawningNewWave", (int64)EWarriorSurvialGameModeState::SpawningNewWave },
		{ "EWarriorSurvialGameModeState::InProgress", (int64)EWarriorSurvialGameModeState::InProgress },
		{ "EWarriorSurvialGameModeState::WaveCompleted", (int64)EWarriorSurvialGameModeState::WaveCompleted },
		{ "EWarriorSurvialGameModeState::AllWavesDone", (int64)EWarriorSurvialGameModeState::AllWavesDone },
		{ "EWarriorSurvialGameModeState::PlayerDied", (int64)EWarriorSurvialGameModeState::PlayerDied },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorSurvialGameModeState",
	"EWarriorSurvialGameModeState",
	Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState()
{
	if (!Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorSurvialGameModeState.InnerSingleton;
}
// End Enum EWarriorSurvialGameModeState

// Begin Delegate FOnSurvialGameModeStateChangedDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms
	{
		EWarriorSurvialGameModeState CurrentState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms, CurrentState), Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState, METADATA_PARAMS(0, nullptr) }; // 197778781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnSurvialGameModeStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSurvialGameModeStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSurvialGameModeStateChangedDelegate, EWarriorSurvialGameModeState CurrentState)
{
	struct _Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms
	{
		EWarriorSurvialGameModeState CurrentState;
	};
	_Script_Warrior_eventOnSurvialGameModeStateChangedDelegate_Parms Parms;
	Parms.CurrentState=CurrentState;
	OnSurvialGameModeStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSurvialGameModeStateChangedDelegate

// Begin Class AWarriorSurvivalGameMode
void AWarriorSurvivalGameMode::StaticRegisterNativesAWarriorSurvivalGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorSurvivalGameMode);
UClass* Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister()
{
	return AWarriorSurvivalGameMode::StaticClass();
}
struct Z_Construct_UClass_AWarriorSurvivalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorSurvivalGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSurvialGameModeState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSurvialGameModeStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSurvialGameModeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSurvialGameModeState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSurvialGameModeStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorSurvivalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState = { "CurrentSurvialGameModeState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, CurrentSurvialGameModeState), Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSurvialGameModeState_MetaData), NewProp_CurrentSurvialGameModeState_MetaData) }; // 197778781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_OnSurvialGameModeStateChanged = { "OnSurvialGameModeStateChanged", nullptr, (EPropertyFlags)0x0020180010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, OnSurvialGameModeStateChanged), Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSurvialGameModeStateChanged_MetaData), NewProp_OnSurvialGameModeStateChanged_MetaData) }; // 320274975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_OnSurvialGameModeStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::ClassParams = {
	&AWarriorSurvivalGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorSurvivalGameMode()
{
	if (!Z_Registration_Info_UClass_AWarriorSurvivalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorSurvivalGameMode.OuterSingleton, Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorSurvivalGameMode.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorSurvivalGameMode>()
{
	return AWarriorSurvivalGameMode::StaticClass();
}
AWarriorSurvivalGameMode::AWarriorSurvivalGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorSurvivalGameMode);
AWarriorSurvivalGameMode::~AWarriorSurvivalGameMode() {}
// End Class AWarriorSurvivalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorSurvialGameModeState_StaticEnum, TEXT("EWarriorSurvialGameModeState"), &Z_Registration_Info_UEnum_EWarriorSurvialGameModeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 197778781U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorSurvivalGameMode, AWarriorSurvivalGameMode::StaticClass, TEXT("AWarriorSurvivalGameMode"), &Z_Registration_Info_UClass_AWarriorSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorSurvivalGameMode), 771723620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_1240167341(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
