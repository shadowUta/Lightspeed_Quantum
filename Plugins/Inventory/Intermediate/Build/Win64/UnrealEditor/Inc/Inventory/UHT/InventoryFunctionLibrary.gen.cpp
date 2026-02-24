// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/InventoryFunctionLibrary.h"
#include "Inventory/Public/InventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInventoryFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInventoryFunctionLibrary_NoRegister();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInventoryFunctionLibrary Function IsEmpty
struct Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics
{
	struct InventoryFunctionLibrary_eventIsEmpty_Parms
	{
		FInventorySlot Slot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Data" },
		{ "CompactNodeTitle", "IsEmpty" },
		{ "DisplayName", "Slot\xe4\xb8\xba\xe7\xa9\xba" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventIsEmpty_Parms, Slot), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 2173197574
void Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryFunctionLibrary_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFunctionLibrary_eventIsEmpty_Parms), &Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "IsEmpty", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::InventoryFunctionLibrary_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::InventoryFunctionLibrary_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execIsEmpty)
{
	P_GET_STRUCT_REF(FInventorySlot,Z_Param_Out_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventoryFunctionLibrary::IsEmpty(Z_Param_Out_Slot);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function IsEmpty

// Begin Class UInventoryFunctionLibrary Function ItemDataEquals
struct Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics
{
	struct InventoryFunctionLibrary_eventItemDataEquals_Parms
	{
		FItemData A;
		FItemData B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Data" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae\xe7\x9b\xb8\xe7\xad\x89" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventItemDataEquals_Parms, A), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2364454653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventItemDataEquals_Parms, B), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2364454653
void Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryFunctionLibrary_eventItemDataEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFunctionLibrary_eventItemDataEquals_Parms), &Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "ItemDataEquals", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::InventoryFunctionLibrary_eventItemDataEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::InventoryFunctionLibrary_eventItemDataEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execItemDataEquals)
{
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_A);
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventoryFunctionLibrary::ItemDataEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function ItemDataEquals

// Begin Class UInventoryFunctionLibrary Function ItemDataNotEquals
struct Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics
{
	struct InventoryFunctionLibrary_eventItemDataNotEquals_Parms
	{
		FItemData A;
		FItemData B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Data" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\x8d\xe7\x9b\xb8\xe7\xad\x89" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventItemDataNotEquals_Parms, A), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2364454653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventItemDataNotEquals_Parms, B), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2364454653
void Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryFunctionLibrary_eventItemDataNotEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFunctionLibrary_eventItemDataNotEquals_Parms), &Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "ItemDataNotEquals", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::InventoryFunctionLibrary_eventItemDataNotEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::InventoryFunctionLibrary_eventItemDataNotEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execItemDataNotEquals)
{
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_A);
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventoryFunctionLibrary::ItemDataNotEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function ItemDataNotEquals

// Begin Class UInventoryFunctionLibrary
void UInventoryFunctionLibrary::StaticRegisterNativesUInventoryFunctionLibrary()
{
	UClass* Class = UInventoryFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEmpty", &UInventoryFunctionLibrary::execIsEmpty },
		{ "ItemDataEquals", &UInventoryFunctionLibrary::execItemDataEquals },
		{ "ItemDataNotEquals", &UInventoryFunctionLibrary::execItemDataNotEquals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFunctionLibrary);
UClass* Z_Construct_UClass_UInventoryFunctionLibrary_NoRegister()
{
	return UInventoryFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UInventoryFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_IsEmpty, "IsEmpty" }, // 1612580850
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataEquals, "ItemDataEquals" }, // 860071756
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_ItemDataNotEquals, "ItemDataNotEquals" }, // 2498103872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFunctionLibrary_Statics::ClassParams = {
	&UInventoryFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_UInventoryFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInventoryFunctionLibrary>()
{
	return UInventoryFunctionLibrary::StaticClass();
}
UInventoryFunctionLibrary::UInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFunctionLibrary);
UInventoryFunctionLibrary::~UInventoryFunctionLibrary() {}
// End Class UInventoryFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFunctionLibrary, UInventoryFunctionLibrary::StaticClass, TEXT("UInventoryFunctionLibrary"), &Z_Registration_Info_UClass_UInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFunctionLibrary), 4265577309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_3034598383(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
