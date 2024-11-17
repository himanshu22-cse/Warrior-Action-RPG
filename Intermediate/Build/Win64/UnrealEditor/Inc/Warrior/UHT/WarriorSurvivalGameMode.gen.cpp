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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow();
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

// Begin ScriptStruct FWarriorEnemyWaveSpawnerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo;
class UScriptStruct* FWarriorEnemyWaveSpawnerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorEnemyWaveSpawnerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.OuterSingleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FWarriorEnemyWaveSpawnerInfo>()
{
	return FWarriorEnemyWaveSpawnerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftEnemyClassToSpawn_MetaData[] = {
		{ "Category", "WarriorEnemyWaveSpawnerInfo" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPerSpawnCount_MetaData[] = {
		{ "Category", "WarriorEnemyWaveSpawnerInfo" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerSpawnCount_MetaData[] = {
		{ "Category", "WarriorEnemyWaveSpawnerInfo" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftEnemyClassToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPerSpawnCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPerSpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorEnemyWaveSpawnerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_SoftEnemyClassToSpawn = { "SoftEnemyClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorEnemyWaveSpawnerInfo, SoftEnemyClassToSpawn), Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftEnemyClassToSpawn_MetaData), NewProp_SoftEnemyClassToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_MinPerSpawnCount = { "MinPerSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorEnemyWaveSpawnerInfo, MinPerSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPerSpawnCount_MetaData), NewProp_MinPerSpawnCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_MaxPerSpawnCount = { "MaxPerSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorEnemyWaveSpawnerInfo, MaxPerSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPerSpawnCount_MetaData), NewProp_MaxPerSpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_SoftEnemyClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_MinPerSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewProp_MaxPerSpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	&NewStructOps,
	"WarriorEnemyWaveSpawnerInfo",
	Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::PropPointers),
	sizeof(FWarriorEnemyWaveSpawnerInfo),
	alignof(FWarriorEnemyWaveSpawnerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.InnerSingleton, Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo.InnerSingleton;
}
// End ScriptStruct FWarriorEnemyWaveSpawnerInfo

// Begin ScriptStruct FWarriorEnemyWaveSpawnerTableRow
static_assert(std::is_polymorphic<FWarriorEnemyWaveSpawnerTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWarriorEnemyWaveSpawnerTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow;
class UScriptStruct* FWarriorEnemyWaveSpawnerTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorEnemyWaveSpawnerTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.OuterSingleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FWarriorEnemyWaveSpawnerTableRow>()
{
	return FWarriorEnemyWaveSpawnerTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyWaveSpawnerDefinitions_MetaData[] = {
		{ "Category", "WarriorEnemyWaveSpawnerTableRow" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalEnemyToSpawnThisWave_MetaData[] = {
		{ "Category", "WarriorEnemyWaveSpawnerTableRow" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyWaveSpawnerDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyWaveSpawnerDefinitions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalEnemyToSpawnThisWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorEnemyWaveSpawnerTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_EnemyWaveSpawnerDefinitions_Inner = { "EnemyWaveSpawnerDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo, METADATA_PARAMS(0, nullptr) }; // 2099128578
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_EnemyWaveSpawnerDefinitions = { "EnemyWaveSpawnerDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorEnemyWaveSpawnerTableRow, EnemyWaveSpawnerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyWaveSpawnerDefinitions_MetaData), NewProp_EnemyWaveSpawnerDefinitions_MetaData) }; // 2099128578
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_TotalEnemyToSpawnThisWave = { "TotalEnemyToSpawnThisWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorEnemyWaveSpawnerTableRow, TotalEnemyToSpawnThisWave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalEnemyToSpawnThisWave_MetaData), NewProp_TotalEnemyToSpawnThisWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_EnemyWaveSpawnerDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_EnemyWaveSpawnerDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewProp_TotalEnemyToSpawnThisWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WarriorEnemyWaveSpawnerTableRow",
	Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::PropPointers),
	sizeof(FWarriorEnemyWaveSpawnerTableRow),
	alignof(FWarriorEnemyWaveSpawnerTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.InnerSingleton, Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow.InnerSingleton;
}
// End ScriptStruct FWarriorEnemyWaveSpawnerTableRow

// Begin Class AWarriorSurvivalGameMode Function OnEnemyDestroyed
struct Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics
{
	struct WarriorSurvivalGameMode_eventOnEnemyDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorSurvivalGameMode_eventOnEnemyDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorSurvivalGameMode, nullptr, "OnEnemyDestroyed", nullptr, nullptr, Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::WarriorSurvivalGameMode_eventOnEnemyDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::WarriorSurvivalGameMode_eventOnEnemyDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorSurvivalGameMode::execOnEnemyDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class AWarriorSurvivalGameMode Function OnEnemyDestroyed

// Begin Class AWarriorSurvivalGameMode Function RegisterSpawnEnemey
struct Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics
{
	struct WarriorSurvivalGameMode_eventRegisterSpawnEnemey_Parms
	{
		TArray<AWarriorEnemyCharacter*> InEnemiesToRegister;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEnemiesToRegister_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnemiesToRegister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InEnemiesToRegister;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::NewProp_InEnemiesToRegister_Inner = { "InEnemiesToRegister", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::NewProp_InEnemiesToRegister = { "InEnemiesToRegister", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorSurvivalGameMode_eventRegisterSpawnEnemey_Parms, InEnemiesToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEnemiesToRegister_MetaData), NewProp_InEnemiesToRegister_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::NewProp_InEnemiesToRegister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::NewProp_InEnemiesToRegister,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorSurvivalGameMode, nullptr, "RegisterSpawnEnemey", nullptr, nullptr, Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::WarriorSurvivalGameMode_eventRegisterSpawnEnemey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::WarriorSurvivalGameMode_eventRegisterSpawnEnemey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorSurvivalGameMode::execRegisterSpawnEnemey)
{
	P_GET_TARRAY_REF(AWarriorEnemyCharacter*,Z_Param_Out_InEnemiesToRegister);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSpawnEnemey(Z_Param_Out_InEnemiesToRegister);
	P_NATIVE_END;
}
// End Class AWarriorSurvivalGameMode Function RegisterSpawnEnemey

// Begin Class AWarriorSurvivalGameMode
void AWarriorSurvivalGameMode::StaticRegisterNativesAWarriorSurvivalGameMode()
{
	UClass* Class = AWarriorSurvivalGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyDestroyed", &AWarriorSurvivalGameMode::execOnEnemyDestroyed },
		{ "RegisterSpawnEnemey", &AWarriorSurvivalGameMode::execRegisterSpawnEnemey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyWaveSpawnerDataTable_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWavesToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaveCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnedEnemiesCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSpawnedEnemiesThisWaveCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimePassedSinceStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnNewWaveWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEnemiesDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveCompletedWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WaveDefinition" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreLoadedEnemyClassMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/WarriorSurvivalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSurvialGameModeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSurvialGameModeState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSurvialGameModeStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyWaveSpawnerDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWavesToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWaveCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSpawnedEnemiesCounter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSpawnedEnemiesThisWaveCounter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPointsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPointsArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedSinceStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnNewWaveWaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnEnemiesDelayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveCompletedWaitTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreLoadedEnemyClassMap_ValueProp;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PreLoadedEnemyClassMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PreLoadedEnemyClassMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorSurvivalGameMode_OnEnemyDestroyed, "OnEnemyDestroyed" }, // 4245079357
		{ &Z_Construct_UFunction_AWarriorSurvivalGameMode_RegisterSpawnEnemey, "RegisterSpawnEnemey" }, // 3697445602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorSurvivalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState = { "CurrentSurvialGameModeState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, CurrentSurvialGameModeState), Z_Construct_UEnum_Warrior_EWarriorSurvialGameModeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSurvialGameModeState_MetaData), NewProp_CurrentSurvialGameModeState_MetaData) }; // 197778781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_OnSurvialGameModeStateChanged = { "OnSurvialGameModeStateChanged", nullptr, (EPropertyFlags)0x0020180010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, OnSurvialGameModeStateChanged), Z_Construct_UDelegateFunction_Warrior_OnSurvialGameModeStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSurvialGameModeStateChanged_MetaData), NewProp_OnSurvialGameModeStateChanged_MetaData) }; // 320274975
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_EnemyWaveSpawnerDataTable = { "EnemyWaveSpawnerDataTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, EnemyWaveSpawnerDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyWaveSpawnerDataTable_MetaData), NewProp_EnemyWaveSpawnerDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TotalWavesToSpawn = { "TotalWavesToSpawn", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, TotalWavesToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWavesToSpawn_MetaData), NewProp_TotalWavesToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentWaveCount = { "CurrentWaveCount", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, CurrentWaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWaveCount_MetaData), NewProp_CurrentWaveCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSpawnedEnemiesCounter = { "CurrentSpawnedEnemiesCounter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, CurrentSpawnedEnemiesCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpawnedEnemiesCounter_MetaData), NewProp_CurrentSpawnedEnemiesCounter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TotalSpawnedEnemiesThisWaveCounter = { "TotalSpawnedEnemiesThisWaveCounter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, TotalSpawnedEnemiesThisWaveCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSpawnedEnemiesThisWaveCounter_MetaData), NewProp_TotalSpawnedEnemiesThisWaveCounter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TargetPointsArray_Inner = { "TargetPointsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TargetPointsArray = { "TargetPointsArray", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, TargetPointsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointsArray_MetaData), NewProp_TargetPointsArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TimePassedSinceStart = { "TimePassedSinceStart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, TimePassedSinceStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimePassedSinceStart_MetaData), NewProp_TimePassedSinceStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_SpawnNewWaveWaitTime = { "SpawnNewWaveWaitTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, SpawnNewWaveWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnNewWaveWaitTime_MetaData), NewProp_SpawnNewWaveWaitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_SpawnEnemiesDelayTime = { "SpawnEnemiesDelayTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, SpawnEnemiesDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEnemiesDelayTime_MetaData), NewProp_SpawnEnemiesDelayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_WaveCompletedWaitTime = { "WaveCompletedWaitTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, WaveCompletedWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveCompletedWaitTime_MetaData), NewProp_WaveCompletedWaitTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap_ValueProp = { "PreLoadedEnemyClassMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap_Key_KeyProp = { "PreLoadedEnemyClassMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap = { "PreLoadedEnemyClassMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorSurvivalGameMode, PreLoadedEnemyClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreLoadedEnemyClassMap_MetaData), NewProp_PreLoadedEnemyClassMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSurvialGameModeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_OnSurvialGameModeStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_EnemyWaveSpawnerDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TotalWavesToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentWaveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_CurrentSpawnedEnemiesCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TotalSpawnedEnemiesThisWaveCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TargetPointsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TargetPointsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_TimePassedSinceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_SpawnNewWaveWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_SpawnEnemiesDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_WaveCompletedWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::NewProp_PreLoadedEnemyClassMap,
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
	FuncInfo,
	Z_Construct_UClass_AWarriorSurvivalGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
AWarriorSurvivalGameMode::AWarriorSurvivalGameMode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorSurvivalGameMode);
AWarriorSurvivalGameMode::~AWarriorSurvivalGameMode() {}
// End Class AWarriorSurvivalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorSurvialGameModeState_StaticEnum, TEXT("EWarriorSurvialGameModeState"), &Z_Registration_Info_UEnum_EWarriorSurvialGameModeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 197778781U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorEnemyWaveSpawnerInfo::StaticStruct, Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics::NewStructOps, TEXT("WarriorEnemyWaveSpawnerInfo"), &Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorEnemyWaveSpawnerInfo), 2099128578U) },
		{ FWarriorEnemyWaveSpawnerTableRow::StaticStruct, Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics::NewStructOps, TEXT("WarriorEnemyWaveSpawnerTableRow"), &Z_Registration_Info_UScriptStruct_WarriorEnemyWaveSpawnerTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorEnemyWaveSpawnerTableRow), 1555226298U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorSurvivalGameMode, AWarriorSurvivalGameMode::StaticClass, TEXT("AWarriorSurvivalGameMode"), &Z_Registration_Info_UClass_AWarriorSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorSurvivalGameMode), 1143601159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_2283792037(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
