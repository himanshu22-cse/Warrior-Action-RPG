// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/UI/HeroUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature();
// End Cross Module References

// Begin Class UHeroUIComponent
void UHeroUIComponent::StaticRegisterNativesUHeroUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroUIComponent);
UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister()
{
	return UHeroUIComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/UI/HeroUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentRageChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged = { "OnCurrentRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnCurrentRageChanged), Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentRageChanged_MetaData), NewProp_OnCurrentRageChanged_MetaData) }; // 2445266534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams = {
	&UHeroUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroUIComponent()
{
	if (!Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton, Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroUIComponent>()
{
	return UHeroUIComponent::StaticClass();
}
UHeroUIComponent::UHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroUIComponent);
UHeroUIComponent::~UHeroUIComponent() {}
// End Class UHeroUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroUIComponent, UHeroUIComponent::StaticClass, TEXT("UHeroUIComponent"), &Z_Registration_Info_UClass_UHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroUIComponent), 3890425437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Components_UI_HeroUIComponent_h_1052001567(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Warrior_Action_RPG_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS