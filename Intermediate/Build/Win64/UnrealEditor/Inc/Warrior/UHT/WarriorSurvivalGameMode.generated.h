// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorSurvivalGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EWarriorSurvialGameModeState : uint8;
#ifdef WARRIOR_WarriorSurvivalGameMode_generated_h
#error "WarriorSurvivalGameMode.generated.h already included, missing '#pragma once' in WarriorSurvivalGameMode.h"
#endif
#define WARRIOR_WarriorSurvivalGameMode_generated_h

#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_22_DELEGATE \
WARRIOR_API void FOnSurvialGameModeStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSurvialGameModeStateChangedDelegate, EWarriorSurvialGameModeState CurrentState);


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerInfo_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct();


template<> WARRIOR_API UScriptStruct* StaticStruct<struct FWarriorEnemyWaveSpawnerInfo>();

#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WARRIOR_API UScriptStruct* StaticStruct<struct FWarriorEnemyWaveSpawnerTableRow>();

#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyDestroyed);


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorSurvivalGameMode(); \
	friend struct Z_Construct_UClass_AWarriorSurvivalGameMode_Statics; \
public: \
	DECLARE_CLASS(AWarriorSurvivalGameMode, AWarriorGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorSurvivalGameMode)


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorSurvivalGameMode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorSurvivalGameMode(AWarriorSurvivalGameMode&&); \
	AWarriorSurvivalGameMode(const AWarriorSurvivalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorSurvivalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorSurvivalGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorSurvivalGameMode) \
	NO_API virtual ~AWarriorSurvivalGameMode();


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_53_PROLOG
#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_INCLASS_NO_PURE_DECLS \
	FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorSurvivalGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h


#define FOREACH_ENUM_EWARRIORSURVIALGAMEMODESTATE(op) \
	op(EWarriorSurvialGameModeState::WaitSpawnNewWave) \
	op(EWarriorSurvialGameModeState::SpawningNewWave) \
	op(EWarriorSurvialGameModeState::InProgress) \
	op(EWarriorSurvialGameModeState::WaveCompleted) \
	op(EWarriorSurvialGameModeState::AllWavesDone) \
	op(EWarriorSurvialGameModeState::PlayerDied) 

enum class EWarriorSurvialGameModeState : uint8;
template<> struct TIsUEnumClass<EWarriorSurvialGameModeState> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorSurvialGameModeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
