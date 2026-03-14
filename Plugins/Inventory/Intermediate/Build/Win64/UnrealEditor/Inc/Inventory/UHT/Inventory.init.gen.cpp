// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory_init() {}
	INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature();
	INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature();
	INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Inventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Inventory()
	{
		if (!Z_Registration_Info_UPackage__Script_Inventory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Inventory_OnConsumableUsed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inventory_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inventory_OnItemDropped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Inventory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEA5507F0,
				0xADF23D22,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Inventory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Inventory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Inventory(Z_Construct_UPackage__Script_Inventory, TEXT("/Script/Inventory"), Z_Registration_Info_UPackage__Script_Inventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEA5507F0, 0xADF23D22));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
