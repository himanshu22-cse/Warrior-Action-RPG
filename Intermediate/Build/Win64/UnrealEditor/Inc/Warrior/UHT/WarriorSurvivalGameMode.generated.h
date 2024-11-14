// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorSurvivalGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWarriorSurvialGameModeState : uint8;
#ifdef WARRIOR_WarriorSurvivalGameMode_generated_h
#error "WarriorSurvivalGameMode.generated.h already included, missing '#pragma once' in WarriorSurvivalGameMode.h"
#endif
#define WARRIOR_WarriorSurvivalGameMode_generated_h

#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_20_DELEGATE \
WARRIOR_API void FOnSurvialGameModeStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSurvialGameModeStateChangedDelegate, EWarriorSurvialGameModeState CurrentState);


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorSurvivalGameMode(); \
	friend struct Z_Construct_UClass_AWarriorSurvivalGameMode_Statics; \
public: \
	DECLARE_CLASS(AWarriorSurvivalGameMode, AWarriorGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorSurvivalGameMode)


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorSurvivalGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorSurvivalGameMode(AWarriorSurvivalGameMode&&); \
	AWarriorSurvivalGameMode(const AWarriorSurvivalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorSurvivalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorSurvivalGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorSurvivalGameMode) \
	NO_API virtual ~AWarriorSurvivalGameMode();


#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_23_PROLOG
#define FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_INCLASS_NO_PURE_DECLS \
	FID_Warrior_Action_RPG_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_ENHANCED_CONSTRUCTORS \
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
