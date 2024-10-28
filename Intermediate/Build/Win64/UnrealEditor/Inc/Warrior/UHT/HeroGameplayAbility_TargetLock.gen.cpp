// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_TargetLock() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
// End Cross Module References

// Begin Class UHeroGameplayAbility_TargetLock
void UHeroGameplayAbility_TargetLock::StaticRegisterNativesUHeroGameplayAbility_TargetLock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility_TargetLock);
UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock_NoRegister()
{
	return UHeroGameplayAbility_TargetLock::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceDistance_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceBoxSize_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceChannel_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPersistentDebugShape_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActorsToLook_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxTraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBoxSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoxTraceChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxTraceChannel;
	static void NewProp_bShowPersistentDebugShape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPersistentDebugShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActorsToLook_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActorsToLook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_TargetLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceDistance = { "BoxTraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, BoxTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceDistance_MetaData), NewProp_BoxTraceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TraceBoxSize = { "TraceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TraceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceBoxSize_MetaData), NewProp_TraceBoxSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel_Inner = { "BoxTraceChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel = { "BoxTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, BoxTraceChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceChannel_MetaData), NewProp_BoxTraceChannel_MetaData) }; // 1798967895
void Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape_SetBit(void* Obj)
{
	((UHeroGameplayAbility_TargetLock*)Obj)->bShowPersistentDebugShape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape = { "bShowPersistentDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility_TargetLock), &Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPersistentDebugShape_MetaData), NewProp_bShowPersistentDebugShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLook_Inner = { "AvailableActorsToLook", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLook = { "AvailableActorsToLook", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, AvailableActorsToLook), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActorsToLook_MetaData), NewProp_AvailableActorsToLook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TraceBoxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLook_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::ClassParams = {
	&UHeroGameplayAbility_TargetLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroGameplayAbility_TargetLock>()
{
	return UHeroGameplayAbility_TargetLock::StaticClass();
}
UHeroGameplayAbility_TargetLock::UHeroGameplayAbility_TargetLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_TargetLock);
UHeroGameplayAbility_TargetLock::~UHeroGameplayAbility_TargetLock() {}
// End Class UHeroGameplayAbility_TargetLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility_TargetLock, UHeroGameplayAbility_TargetLock::StaticClass, TEXT("UHeroGameplayAbility_TargetLock"), &Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility_TargetLock), 2268648700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_3236302597(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
