// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_InventoryTypes_generated_h
#error "InventoryTypes.generated.h already included, missing '#pragma once' in InventoryTypes.h"
#endif
#define INVENTORY_InventoryTypes_generated_h

#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlot_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FInventorySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Consumable) \
	op(EItemType::Equipment) \
	op(EItemType::Material) \
	op(EItemType::QuestItem) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
