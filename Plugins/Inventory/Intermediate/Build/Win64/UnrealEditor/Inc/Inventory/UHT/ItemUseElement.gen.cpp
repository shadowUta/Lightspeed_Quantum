// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/ItemUseElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemUseElement() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UItemUseElement();
INVENTORY_API UClass* Z_Construct_UClass_UItemUseElement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UItemUseElement Function OnUse
struct ItemUseElement_eventOnUse_Parms
{
	AActor* User;
	FName ItemID;
	int32 Count;
};
static const FName NAME_UItemUseElement_OnUse = FName(TEXT("OnUse"));
void UItemUseElement::OnUse(AActor* User, FName ItemID, int32 Count)
{
	ItemUseElement_eventOnUse_Parms Parms;
	Parms.User=User;
	Parms.ItemID=ItemID;
	Parms.Count=Count;
	UFunction* Func = FindFunctionChecked(NAME_UItemUseElement_OnUse);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UItemUseElement_OnUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6" },
		{ "ModuleRelativePath", "Public/ItemUseElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_User;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventOnUse_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventOnUse_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventOnUse_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemUseElement_OnUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_OnUse_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_OnUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemUseElement_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemUseElement, nullptr, "OnUse", nullptr, nullptr, Z_Construct_UFunction_UItemUseElement_OnUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_OnUse_Statics::PropPointers), sizeof(ItemUseElement_eventOnUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_OnUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemUseElement_OnUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemUseElement_eventOnUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemUseElement_OnUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemUseElement_OnUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UItemUseElement Function OnUse

// Begin Class UItemUseElement Function UseItem
struct Z_Construct_UFunction_UItemUseElement_UseItem_Statics
{
	struct ItemUseElement_eventUseItem_Parms
	{
		AActor* User;
		FName ItemID;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/ItemUseElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_User;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventUseItem_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventUseItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemUseElement_eventUseItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemUseElement_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUseElement_UseItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemUseElement_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemUseElement, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_UItemUseElement_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemUseElement_UseItem_Statics::ItemUseElement_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemUseElement_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemUseElement_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemUseElement_UseItem_Statics::ItemUseElement_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemUseElement_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemUseElement_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemUseElement::execUseItem)
{
	P_GET_OBJECT(AActor,Z_Param_User);
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItem(Z_Param_User,Z_Param_ItemID,Z_Param_Count);
	P_NATIVE_END;
}
// End Class UItemUseElement Function UseItem

// Begin Class UItemUseElement
void UItemUseElement::StaticRegisterNativesUItemUseElement()
{
	UClass* Class = UItemUseElement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UseItem", &UItemUseElement::execUseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemUseElement);
UClass* Z_Construct_UClass_UItemUseElement_NoRegister()
{
	return UItemUseElement::StaticClass();
}
struct Z_Construct_UClass_UItemUseElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemUseElement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemUseElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ItemUseElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemUseElement_OnUse, "OnUse" }, // 2400461141
		{ &Z_Construct_UFunction_UItemUseElement_UseItem, "UseItem" }, // 286383648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemUseElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemUseElement_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0011000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUseElement, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemUseElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUseElement_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUseElement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemUseElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUseElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemUseElement_Statics::ClassParams = {
	&UItemUseElement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemUseElement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemUseElement_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUseElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemUseElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemUseElement()
{
	if (!Z_Registration_Info_UClass_UItemUseElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemUseElement.OuterSingleton, Z_Construct_UClass_UItemUseElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemUseElement.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UItemUseElement>()
{
	return UItemUseElement::StaticClass();
}
UItemUseElement::UItemUseElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemUseElement);
UItemUseElement::~UItemUseElement() {}
// End Class UItemUseElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemUseElement, UItemUseElement::StaticClass, TEXT("UItemUseElement"), &Z_Registration_Info_UClass_UItemUseElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemUseElement), 38554380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_510865392(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
