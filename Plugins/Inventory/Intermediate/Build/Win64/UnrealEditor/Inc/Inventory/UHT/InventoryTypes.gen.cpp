// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/InventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
INVENTORY_API UClass* Z_Construct_UClass_UItemUseElement_NoRegister();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EItemQuality();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EItemType();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EItemType, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\n" },
#endif
		{ "Consumable.DisplayName", "\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "Currency.DisplayName", "\xe8\xb4\xa7\xe5\xb8\x81" },
		{ "Currency.Name", "EItemType::Currency" },
		{ "Equipment.DisplayName", "\xe8\xa3\x85\xe5\xa4\x87" },
		{ "Equipment.Name", "EItemType::Equipment" },
		{ "Material.DisplayName", "\xe6\x9d\x90\xe6\x96\x99" },
		{ "Material.Name", "EItemType::Material" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EItemType::None" },
		{ "Other.DisplayName", "\xe5\x85\xb6\xe4\xbb\x96" },
		{ "Other.Name", "EItemType::Other" },
		{ "QuestItem.DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x89\xa9\xe5\x93\x81" },
		{ "QuestItem.Name", "EItemType::QuestItem" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::None", (int64)EItemType::None },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Equipment", (int64)EItemType::Equipment },
		{ "EItemType::Material", (int64)EItemType::Material },
		{ "EItemType::QuestItem", (int64)EItemType::QuestItem },
		{ "EItemType::Currency", (int64)EItemType::Currency },
		{ "EItemType::Other", (int64)EItemType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Inventory_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Inventory_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Enum EItemQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemQuality;
static UEnum* EItemQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EItemQuality, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EItemQuality"));
	}
	return Z_Registration_Info_UEnum_EItemQuality.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EItemQuality>()
{
	return EItemQuality_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EItemQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.DisplayName", "\xe6\x99\xae\xe9\x80\x9a" },
		{ "Common.Name", "EItemQuality::Common" },
		{ "Epic.DisplayName", "\xe5\x8f\xb2\xe8\xaf\x97" },
		{ "Epic.Name", "EItemQuality::Epic" },
		{ "Legendary.DisplayName", "\xe4\xbc\xa0\xe8\xaf\xb4" },
		{ "Legendary.Name", "EItemQuality::Legendary" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
		{ "Mythical.DisplayName", "\xe7\xbb\x9d\xe4\xb8\x96" },
		{ "Mythical.Name", "EItemQuality::Mythical" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EItemQuality::None" },
		{ "Rare.DisplayName", "\xe7\xa8\x80\xe6\x9c\x89" },
		{ "Rare.Name", "EItemQuality::Rare" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemQuality::None", (int64)EItemQuality::None },
		{ "EItemQuality::Common", (int64)EItemQuality::Common },
		{ "EItemQuality::Rare", (int64)EItemQuality::Rare },
		{ "EItemQuality::Epic", (int64)EItemQuality::Epic },
		{ "EItemQuality::Legendary", (int64)EItemQuality::Legendary },
		{ "EItemQuality::Mythical", (int64)EItemQuality::Mythical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EItemQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EItemQuality",
	"EItemQuality",
	Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EItemQuality()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemQuality.InnerSingleton, Z_Construct_UEnum_Inventory_EItemQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemQuality.InnerSingleton;
}
// End Enum EItemQuality

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x9f\xba\xe7\xa1\x80\xe6\x95\xb0\xe6\x8d\xae \n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9f\xba\xe7\xa1\x80\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81ID" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "AllowedClasses", "Texture2D,MaterialInterface" },
		{ "Category", "Item Data" },
		{ "displayname", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypes_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "Item Data" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemQuality;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemTypes_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ItemTypes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropItemClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DropItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemQuality), Z_Construct_UEnum_Inventory_EItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuality_MetaData), NewProp_ItemQuality_MetaData) }; // 700131124
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Image), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStack_MetaData), NewProp_MaxStack_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes_ElementProp = { "ItemTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Inventory_EItemType, METADATA_PARAMS(0, nullptr) }; // 4117045954
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes = { "ItemTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypes_MetaData), NewProp_ItemTypes_MetaData) }; // 4117045954
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DropItemClass_Inner = { "DropItemClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemUseElement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, DropItemClass), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DropItemClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DropItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin ScriptStruct FInventorySlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySlot;
class UScriptStruct* FInventorySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlot, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("InventorySlot"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FInventorySlot>()
{
	return FInventorySlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"InventorySlot",
	Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers),
	sizeof(FInventorySlot),
	alignof(FInventorySlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton, Z_Construct_UScriptStruct_FInventorySlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton;
}
// End ScriptStruct FInventorySlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117045954U) },
		{ EItemQuality_StaticEnum, TEXT("EItemQuality"), &Z_Registration_Info_UEnum_EItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 700131124U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2364454653U) },
		{ FInventorySlot::StaticStruct, Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps, TEXT("InventorySlot"), &Z_Registration_Info_UScriptStruct_InventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlot), 2173197574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_2123912042(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
