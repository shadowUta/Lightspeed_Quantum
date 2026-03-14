// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/InventoryComponent.h"
#include "Inventory/Public/InventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Delegate FOnInventoryUpdated
struct Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI \xe5\x88\xb7\xe6\x96\xb0\xe5\xb9\xbf\xe6\x92\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xe5\x88\xb7\xe6\x96\xb0\xe5\xb9\xbf\xe6\x92\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInventoryUpdated

// Begin Delegate FOnConsumableUsed
struct Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics
{
	struct _Script_Inventory_eventOnConsumableUsed_Parms
	{
		FName ItemID;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe5\xb9\xbf\xe6\x92\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb9\xbf\xe6\x92\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventOnConsumableUsed_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventOnConsumableUsed_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "OnConsumableUsed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::_Script_Inventory_eventOnConsumableUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::_Script_Inventory_eventOnConsumableUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnConsumableUsed_DelegateWrapper(const FMulticastScriptDelegate& OnConsumableUsed, FName ItemID, int32 Quantity)
{
	struct _Script_Inventory_eventOnConsumableUsed_Parms
	{
		FName ItemID;
		int32 Quantity;
	};
	_Script_Inventory_eventOnConsumableUsed_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.Quantity=Quantity;
	OnConsumableUsed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConsumableUsed

// Begin Delegate FOnItemDropped
struct Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics
{
	struct _Script_Inventory_eventOnItemDropped_Parms
	{
		FName ItemID;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xa2\xe5\xbc\x83\xe5\xb9\xbf\xe6\x92\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xa2\xe5\xbc\x83\xe5\xb9\xbf\xe6\x92\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventOnItemDropped_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventOnItemDropped_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "OnItemDropped__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::_Script_Inventory_eventOnItemDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::_Script_Inventory_eventOnItemDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemDropped_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropped, FName ItemID, int32 Quantity)
{
	struct _Script_Inventory_eventOnItemDropped_Parms
	{
		FName ItemID;
		int32 Quantity;
	};
	_Script_Inventory_eventOnItemDropped_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.Quantity=Quantity;
	OnItemDropped.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemDropped

// Begin Class UInventoryComponent Function AddItem
struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
{
	struct InventoryComponent_eventAddItem_Parms
	{
		FName ItemID;
		int32 Quantity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe5\x88\xb0\xe8\x83\x8c\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddItem(Z_Param_ItemID,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddItem

// Begin Class UInventoryComponent Function DropItem
struct Z_Construct_UFunction_UInventoryComponent_DropItem_Statics
{
	struct InventoryComponent_eventDropItem_Parms
	{
		int32 SlotIndex;
		int32 Quantity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_Quantity", "1" },
		{ "DisplayName", "\xe4\xb8\xa2\xe5\xbc\x83\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDropItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDropItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDropItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "DropItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::InventoryComponent_eventDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::InventoryComponent_eventDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execDropItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DropItem(Z_Param_SlotIndex,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function DropItem

// Begin Class UInventoryComponent Function GetItemData
struct Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics
{
	struct InventoryComponent_eventGetItemData_Parms
	{
		FName ItemID;
		FItemData OutItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemData_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_OutItemData = { "OutItemData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemData_Parms, OutItemData), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 2364454653
void Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventGetItemData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventGetItemData_Parms), &Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_OutItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::InventoryComponent_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::InventoryComponent_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_OutItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetItemData(Z_Param_ItemID,Z_Param_Out_OutItemData);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetItemData

// Begin Class UInventoryComponent Function IncreaseInventorySize
struct Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics
{
	struct InventoryComponent_eventIncreaseInventorySize_Parms
	{
		int32 IncreaseSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x97\xa0\xe6\xb3\x95\xe5\x87\x8f\xe5\xb0\x91\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xef\xbc\x8c\xe5\xa2\x9e\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xe6\x97\xb6\xe4\xbc\x9a\xe5\x9c\xa8\xe6\x9c\xab\xe5\xb0\xbe\xe6\xb7\xbb\xe5\x8a\xa0\xe7\xa9\xba\xe6\xa7\xbd\n//\xe8\xbe\x93\xe5\x85\xa5\xe8\xb4\x9f\xe6\x95\xb0\xe6\x88\x96""0\xe5\xb0\x86\xe4\xb8\x8d\xe4\xbc\x9a\xe5\xa2\x9e\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e""false\n" },
#endif
		{ "CPP_Default_IncreaseSize", "1" },
		{ "DisplayName", "\xe5\xa2\x9e\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xa0\xe6\xb3\x95\xe5\x87\x8f\xe5\xb0\x91\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xef\xbc\x8c\xe5\xa2\x9e\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xe6\x97\xb6\xe4\xbc\x9a\xe5\x9c\xa8\xe6\x9c\xab\xe5\xb0\xbe\xe6\xb7\xbb\xe5\x8a\xa0\xe7\xa9\xba\xe6\xa7\xbd\n\xe8\xbe\x93\xe5\x85\xa5\xe8\xb4\x9f\xe6\x95\xb0\xe6\x88\x96""0\xe5\xb0\x86\xe4\xb8\x8d\xe4\xbc\x9a\xe5\xa2\x9e\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e""false" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IncreaseSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_IncreaseSize = { "IncreaseSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventIncreaseInventorySize_Parms, IncreaseSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventIncreaseInventorySize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventIncreaseInventorySize_Parms), &Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_IncreaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "IncreaseInventorySize", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::InventoryComponent_eventIncreaseInventorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::InventoryComponent_eventIncreaseInventorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execIncreaseInventorySize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IncreaseSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IncreaseInventorySize(Z_Param_IncreaseSize);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function IncreaseInventorySize

// Begin Class UInventoryComponent Function MergeSlot
struct Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics
{
	struct InventoryComponent_eventMergeSlot_Parms
	{
		int32 IndexA;
		int32 IndexB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe5\x90\x88\xe5\xb9\xb6\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_IndexA = { "IndexA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventMergeSlot_Parms, IndexA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_IndexB = { "IndexB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventMergeSlot_Parms, IndexB), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventMergeSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventMergeSlot_Parms), &Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_IndexA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_IndexB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "MergeSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::InventoryComponent_eventMergeSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::InventoryComponent_eventMergeSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_MergeSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_MergeSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execMergeSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexA);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MergeSlot(Z_Param_IndexA,Z_Param_IndexB);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function MergeSlot

// Begin Class UInventoryComponent Function OnConsumableUsed_Implementation
struct InventoryComponent_eventOnConsumableUsed_Implementation_Parms
{
	FName ItemID;
	int32 Quantity;
};
static const FName NAME_UInventoryComponent_OnConsumableUsed_Implementation = FName(TEXT("OnConsumableUsed_Implementation"));
void UInventoryComponent::OnConsumableUsed_Implementation(FName ItemID, int32 Quantity)
{
	InventoryComponent_eventOnConsumableUsed_Implementation_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_OnConsumableUsed_Implementation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnConsumableUsed_Implementation_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnConsumableUsed_Implementation_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnConsumableUsed_Implementation", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::PropPointers), sizeof(InventoryComponent_eventOnConsumableUsed_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventOnConsumableUsed_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryComponent Function OnConsumableUsed_Implementation

// Begin Class UInventoryComponent Function OnInventoryUpdated_Implementation
static const FName NAME_UInventoryComponent_OnInventoryUpdated_Implementation = FName(TEXT("OnInventoryUpdated_Implementation"));
void UInventoryComponent::OnInventoryUpdated_Implementation()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_OnInventoryUpdated_Implementation);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe5\x88\xb7\xe6\x96\xb0\xe8\x83\x8c\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnInventoryUpdated_Implementation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryComponent Function OnInventoryUpdated_Implementation

// Begin Class UInventoryComponent Function OnItemDropped_Implementation
struct InventoryComponent_eventOnItemDropped_Implementation_Parms
{
	FName ItemID;
	int32 Quantity;
};
static const FName NAME_UInventoryComponent_OnItemDropped_Implementation = FName(TEXT("OnItemDropped_Implementation"));
void UInventoryComponent::OnItemDropped_Implementation(FName ItemID, int32 Quantity)
{
	InventoryComponent_eventOnItemDropped_Implementation_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_OnItemDropped_Implementation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\xa2\xe5\xbc\x83" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnItemDropped_Implementation_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnItemDropped_Implementation_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnItemDropped_Implementation", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::PropPointers), sizeof(InventoryComponent_eventOnItemDropped_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventOnItemDropped_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryComponent Function OnItemDropped_Implementation

// Begin Class UInventoryComponent Function OpenInventory
static const FName NAME_UInventoryComponent_OpenInventory = FName(TEXT("OpenInventory"));
void UInventoryComponent::OpenInventory()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_OpenInventory);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryComponent_OpenInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe6\x89\x93\xe5\xbc\x80\xe8\x83\x8c\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OpenInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OpenInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OpenInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OpenInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryComponent_OpenInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OpenInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryComponent Function OpenInventory

// Begin Class UInventoryComponent Function RemoveItem
struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
{
	struct InventoryComponent_eventRemoveItem_Parms
	{
		int32 SlotIndex;
		FInventorySlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 2173197574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventorySlot*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveItem

// Begin Class UInventoryComponent Function SwapItem
struct Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics
{
	struct InventoryComponent_eventSwapItem_Parms
	{
		int32 IndexA;
		int32 IndexB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe4\xba\xa4\xe6\x8d\xa2\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::NewProp_IndexA = { "IndexA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapItem_Parms, IndexA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::NewProp_IndexB = { "IndexB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapItem_Parms, IndexB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::NewProp_IndexA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::NewProp_IndexB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SwapItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::InventoryComponent_eventSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::InventoryComponent_eventSwapItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SwapItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SwapItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSwapItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexA);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapItem(Z_Param_IndexA,Z_Param_IndexB);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SwapItem

// Begin Class UInventoryComponent Function UseItem
struct Z_Construct_UFunction_UInventoryComponent_UseItem_Statics
{
	struct InventoryComponent_eventUseItem_Parms
	{
		int32 SlotIndex;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_Quantity", "1" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::InventoryComponent_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::InventoryComponent_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execUseItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItem(Z_Param_SlotIndex,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function UseItem

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComponent::execAddItem },
		{ "DropItem", &UInventoryComponent::execDropItem },
		{ "GetItemData", &UInventoryComponent::execGetItemData },
		{ "IncreaseInventorySize", &UInventoryComponent::execIncreaseInventorySize },
		{ "MergeSlot", &UInventoryComponent::execMergeSlot },
		{ "RemoveItem", &UInventoryComponent::execRemoveItem },
		{ "SwapItem", &UInventoryComponent::execSwapItem },
		{ "UseItem", &UInventoryComponent::execUseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe5\xae\xb9\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory|Events" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe5\x88\xb7\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConsumableUsed_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe7\x9b\x91\xe5\x90\xac\xe7\x9a\x84\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe7\x9b\x91\xe5\x90\xac\xe7\x9a\x84\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[] = {
		{ "Category", "Inventory|Events" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\xa2\xe5\xbc\x83\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsumableUsed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 2936474797
		{ &Z_Construct_UFunction_UInventoryComponent_DropItem, "DropItem" }, // 398210591
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemData, "GetItemData" }, // 2119415496
		{ &Z_Construct_UFunction_UInventoryComponent_IncreaseInventorySize, "IncreaseInventorySize" }, // 2408599320
		{ &Z_Construct_UFunction_UInventoryComponent_MergeSlot, "MergeSlot" }, // 489107539
		{ &Z_Construct_UFunction_UInventoryComponent_OnConsumableUsed_Implementation, "OnConsumableUsed_Implementation" }, // 160619101
		{ &Z_Construct_UFunction_UInventoryComponent_OnInventoryUpdated_Implementation, "OnInventoryUpdated_Implementation" }, // 1287902811
		{ &Z_Construct_UFunction_UInventoryComponent_OnItemDropped_Implementation, "OnItemDropped_Implementation" }, // 2350765099
		{ &Z_Construct_UFunction_UInventoryComponent_OpenInventory, "OpenInventory" }, // 1678842512
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 3846461950
		{ &Z_Construct_UFunction_UInventoryComponent_SwapItem, "SwapItem" }, // 3292622653
		{ &Z_Construct_UFunction_UInventoryComponent_UseItem, "UseItem" }, // 1272142510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 2173197574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 2173197574
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 1285776631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnConsumableUsed = { "OnConsumableUsed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnConsumableUsed), Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConsumableUsed_MetaData), NewProp_OnConsumableUsed_MetaData) }; // 4222812980
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnItemDropped), Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDropped_MetaData), NewProp_OnItemDropped_MetaData) }; // 439227713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ItemDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnConsumableUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnItemDropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 55111116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_1826973764(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
