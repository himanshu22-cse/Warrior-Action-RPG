// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorFunctionLibrary.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorConfirmType();
// End Cross Module References

// Begin Enum EWarriorConfirmType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorConfirmType;
static UEnum* EWarriorConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorConfirmType, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorConfirmType"));
	}
	return Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorConfirmType>()
{
	return EWarriorConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
		{ "No.Name", "EWarriorConfirmType::No" },
		{ "Yes.Name", "EWarriorConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorConfirmType::Yes", (int64)EWarriorConfirmType::Yes },
		{ "EWarriorConfirmType::No", (int64)EWarriorConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorConfirmType",
	"EWarriorConfirmType",
	Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorConfirmType()
{
	if (!Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton;
}
// End Enum EWarriorConfirmType

// Begin Class UWarriorFunctionLibrary Function AddGameplayTagsToActorIfNone
struct Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics
{
	struct WarriorFunctionLibrary_eventAddGameplayTagsToActorIfNone_Parms
	{
		AActor* InActor;
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagsToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagsToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "AddGameplayTagsToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagsToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagsToActorIfNone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execAddGameplayTagsToActorIfNone)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::AddGameplayTagsToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function AddGameplayTagsToActorIfNone

// Begin Class UWarriorFunctionLibrary Function BP_DoesActorHasTag
struct Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics
{
	struct WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms
	{
		AActor* InActor;
		FGameplayTag TagToCheck;
		EWarriorConfirmType OutConfirmType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nSo by using an enum as an out parameter in the blueprint only function, we can give this function multiple\n\nexecution pins.\n*/" },
#endif
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "So by using an enum as an out parameter in the blueprint only function, we can give this function multiple\n\nexecution pins." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms, OutConfirmType), Z_Construct_UEnum_Warrior_EWarriorConfirmType, METADATA_PARAMS(0, nullptr) }; // 2514264220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_OutConfirmType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::NewProp_OutConfirmType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "BP_DoesActorHasTag", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execBP_DoesActorHasTag)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_GET_ENUM_REF(EWarriorConfirmType,Z_Param_Out_OutConfirmType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::BP_DoesActorHasTag(Z_Param_InActor,Z_Param_TagToCheck,(EWarriorConfirmType&)(Z_Param_Out_OutConfirmType));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function BP_DoesActorHasTag

// Begin Class UWarriorFunctionLibrary Function RemoveGameplayFromActorIfFound
struct Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics
{
	struct WarriorFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms
	{
		AActor* InActor;
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "RemoveGameplayFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execRemoveGameplayFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::RemoveGameplayFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function RemoveGameplayFromActorIfFound

// Begin Class UWarriorFunctionLibrary
void UWarriorFunctionLibrary::StaticRegisterNativesUWarriorFunctionLibrary()
{
	UClass* Class = UWarriorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagsToActorIfNone", &UWarriorFunctionLibrary::execAddGameplayTagsToActorIfNone },
		{ "BP_DoesActorHasTag", &UWarriorFunctionLibrary::execBP_DoesActorHasTag },
		{ "RemoveGameplayFromActorIfFound", &UWarriorFunctionLibrary::execRemoveGameplayFromActorIfFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorFunctionLibrary);
UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister()
{
	return UWarriorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WarriorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagsToActorIfNone, "AddGameplayTagsToActorIfNone" }, // 852209678
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHasTag, "BP_DoesActorHasTag" }, // 1101614502
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayFromActorIfFound, "RemoveGameplayFromActorIfFound" }, // 531772590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams = {
	&UWarriorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorFunctionLibrary>()
{
	return UWarriorFunctionLibrary::StaticClass();
}
UWarriorFunctionLibrary::UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorFunctionLibrary);
UWarriorFunctionLibrary::~UWarriorFunctionLibrary() {}
// End Class UWarriorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorConfirmType_StaticEnum, TEXT("EWarriorConfirmType"), &Z_Registration_Info_UEnum_EWarriorConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2514264220U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorFunctionLibrary, UWarriorFunctionLibrary::StaticClass, TEXT("UWarriorFunctionLibrary"), &Z_Registration_Info_UClass_UWarriorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorFunctionLibrary), 1114189410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_412396134(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
