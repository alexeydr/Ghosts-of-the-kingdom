// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/BasicGridActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicGridActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYPROJECT_API UClass* Z_Construct_UClass_ABasicGridActor();
	MYPROJECT_API UClass* Z_Construct_UClass_ABasicGridActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMapLegend();
	MYPROJECT_API UClass* Z_Construct_UClass_UMapLegend_NoRegister();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBusyTile();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMapData();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMapInfo();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMapData();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMapObject();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMapRow();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapObject;
class UScriptStruct* FMapObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapObject, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("MapObject"));
	}
	return Z_Registration_Info_UScriptStruct_MapObject.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FMapObject>()
{
	return FMapObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMoveOnTail_MetaData[];
#endif
		static void NewProp_bCanMoveOnTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMoveOnTail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MapObject" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapObject, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "MapObject" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapObject, Material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail_MetaData[] = {
		{ "Category", "MapObject" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail_SetBit(void* Obj)
	{
		((FMapObject*)Obj)->bCanMoveOnTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail = { "bCanMoveOnTail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMapObject), &Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapObject_Statics::NewProp_bCanMoveOnTail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"MapObject",
		sizeof(FMapObject),
		alignof(FMapObject),
		Z_Construct_UScriptStruct_FMapObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapObject()
	{
		if (!Z_Registration_Info_UScriptStruct_MapObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapObject.InnerSingleton, Z_Construct_UScriptStruct_FMapObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapObject.InnerSingleton;
	}
	void UMapLegend::StaticRegisterNativesUMapLegend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapLegend);
	UClass* Z_Construct_UClass_UMapLegend_NoRegister()
	{
		return UMapLegend::StaticClass();
	}
	struct Z_Construct_UClass_UMapLegend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapObjects_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapLegend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapLegend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasicGridActor.h" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_ValueProp = { "MapObjects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMapObject, METADATA_PARAMS(nullptr, 0) }; // 1598268792
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_Key_KeyProp = { "MapObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_MetaData[] = {
		{ "Category", "MapLegend" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects = { "MapObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapLegend, MapObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_MetaData)) }; // 1598268792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapLegend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapLegend_Statics::NewProp_MapObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapLegend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapLegend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapLegend_Statics::ClassParams = {
		&UMapLegend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapLegend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapLegend_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapLegend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapLegend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapLegend()
	{
		if (!Z_Registration_Info_UClass_UMapLegend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapLegend.OuterSingleton, Z_Construct_UClass_UMapLegend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapLegend.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UMapLegend>()
	{
		return UMapLegend::StaticClass();
	}
	UMapLegend::UMapLegend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapLegend);
	UMapLegend::~UMapLegend() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapRow;
class UScriptStruct* FMapRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapRow, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("MapRow"));
	}
	return Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FMapRow>()
{
	return FMapRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapRow>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData_Inner = { "RowData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData_MetaData[] = {
		{ "Category", "MapRow" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapRow, RowData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_RowData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"MapRow",
		sizeof(FMapRow),
		alignof(FMapRow),
		Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton, Z_Construct_UScriptStruct_FMapRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMapData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMapData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapData;
class UScriptStruct* FMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapData, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("MapData"));
	}
	return Z_Registration_Info_UScriptStruct_MapData.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FMapData>()
{
	return FMapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements_Inner = { "RowElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMapRow, METADATA_PARAMS(nullptr, 0) }; // 776677094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements = { "RowElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapData, RowElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements_MetaData)) }; // 776677094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_RowElements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MapData",
		sizeof(FMapData),
		alignof(FMapData),
		Z_Construct_UScriptStruct_FMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapData()
	{
		if (!Z_Registration_Info_UScriptStruct_MapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapData.InnerSingleton, Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedMapInfo;
class UScriptStruct* FCachedMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedMapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedMapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMapInfo, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("CachedMapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CachedMapInfo.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FCachedMapInfo>()
{
	return FCachedMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "Category", "CachedMapInfo" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapInfo, InstanceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_Instance_MetaData[] = {
		{ "Category", "CachedMapInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapInfo, Instance), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_Instance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewProp_Instance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"CachedMapInfo",
		sizeof(FCachedMapInfo),
		alignof(FCachedMapInfo),
		Z_Construct_UScriptStruct_FCachedMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedMapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedMapInfo.InnerSingleton, Z_Construct_UScriptStruct_FCachedMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedMapInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedMapData;
class UScriptStruct* FCachedMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedMapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedMapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMapData, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("CachedMapData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedMapData.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FCachedMapData>()
{
	return FCachedMapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedMapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TailLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TailLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmptyTail_MetaData[];
#endif
		static void NewProp_bEmptyTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyTail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMapData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "CachedMapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapData, Column), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "CachedMapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapData, Row), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_TailLocation_MetaData[] = {
		{ "Category", "CachedMapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_TailLocation = { "TailLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapData, TailLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_TailLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_TailLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info_Inner = { "Info", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedMapInfo, METADATA_PARAMS(nullptr, 0) }; // 2984303560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "CachedMapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedMapData, Info), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info_MetaData)) }; // 2984303560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail_MetaData[] = {
		{ "Category", "CachedMapData" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail_SetBit(void* Obj)
	{
		((FCachedMapData*)Obj)->bEmptyTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail = { "bEmptyTail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCachedMapData), &Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_TailLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMapData_Statics::NewProp_bEmptyTail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"CachedMapData",
		sizeof(FCachedMapData),
		alignof(FCachedMapData),
		Z_Construct_UScriptStruct_FCachedMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMapData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedMapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedMapData.InnerSingleton, Z_Construct_UScriptStruct_FCachedMapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedMapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusyTile;
class UScriptStruct* FBusyTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusyTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusyTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusyTile, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("BusyTile"));
	}
	return Z_Registration_Info_UScriptStruct_BusyTile.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FBusyTile>()
{
	return FBusyTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusyTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusyTile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusyTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusyTile>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusyTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"BusyTile",
		sizeof(FBusyTile),
		alignof(FBusyTile),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusyTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusyTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusyTile()
	{
		if (!Z_Registration_Info_UScriptStruct_BusyTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusyTile.InnerSingleton, Z_Construct_UScriptStruct_FBusyTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusyTile.InnerSingleton;
	}
	DEFINE_FUNCTION(ABasicGridActor::execGenerateMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicGridActor::execIsAvailableTile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TileLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvailableTile(Z_Param_Out_TileLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicGridActor::execMoveActorOnTail)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveActorOnTail(Z_Param_Actor,Z_Param_Out_HitLocation,Z_Param_Out_Offset,Z_Param_SizeX,Z_Param_SizeY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicGridActor::execGetWorldTailLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_UBOOL(Z_Param_bGetCenterPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWorldTailLocation(Z_Param_Out_HitLocation,Z_Param_Out_Location,Z_Param_bGetCenterPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicGridActor::execGetTailByLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
		P_GET_STRUCT_REF(FCachedMapData,Z_Param_Out_Tail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTailByLocation(Z_Param_Out_HitLocation,Z_Param_Out_Tail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicGridActor::execGetActorTiles)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FBusyTile,Z_Param_Out_Tails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorTiles(Z_Param_Actor,Z_Param_Out_Tails);
		P_NATIVE_END;
	}
	void ABasicGridActor::StaticRegisterNativesABasicGridActor()
	{
		UClass* Class = ABasicGridActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMap", &ABasicGridActor::execGenerateMap },
			{ "GetActorTiles", &ABasicGridActor::execGetActorTiles },
			{ "GetTailByLocation", &ABasicGridActor::execGetTailByLocation },
			{ "GetWorldTailLocation", &ABasicGridActor::execGetWorldTailLocation },
			{ "IsAvailableTile", &ABasicGridActor::execIsAvailableTile },
			{ "MoveActorOnTail", &ABasicGridActor::execMoveActorOnTail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "GenerateMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics
	{
		struct BasicGridActor_eventGetActorTiles_Parms
		{
			AActor* Actor;
			FBusyTile Tails;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tails;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetActorTiles_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_Tails = { "Tails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetActorTiles_Parms, Tails), Z_Construct_UScriptStruct_FBusyTile, METADATA_PARAMS(nullptr, 0) }; // 3789281838
	void Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicGridActor_eventGetActorTiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventGetActorTiles_Parms), &Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_Tails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "GetActorTiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::BasicGridActor_eventGetActorTiles_Parms), Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_GetActorTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_GetActorTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics
	{
		struct BasicGridActor_eventGetTailByLocation_Parms
		{
			FVector HitLocation;
			FCachedMapData Tail;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tail;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetTailByLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_HitLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_Tail = { "Tail", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetTailByLocation_Parms, Tail), Z_Construct_UScriptStruct_FCachedMapData, METADATA_PARAMS(nullptr, 0) }; // 2649027847
	void Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicGridActor_eventGetTailByLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventGetTailByLocation_Parms), &Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_Tail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "GetTailByLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::BasicGridActor_eventGetTailByLocation_Parms), Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_GetTailByLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_GetTailByLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics
	{
		struct BasicGridActor_eventGetWorldTailLocation_Parms
		{
			FVector HitLocation;
			FVector Location;
			bool bGetCenterPoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bGetCenterPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetCenterPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetWorldTailLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_HitLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventGetWorldTailLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_bGetCenterPoint_SetBit(void* Obj)
	{
		((BasicGridActor_eventGetWorldTailLocation_Parms*)Obj)->bGetCenterPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_bGetCenterPoint = { "bGetCenterPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventGetWorldTailLocation_Parms), &Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_bGetCenterPoint_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicGridActor_eventGetWorldTailLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventGetWorldTailLocation_Parms), &Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_bGetCenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bGetCenterPoint", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "GetWorldTailLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::BasicGridActor_eventGetWorldTailLocation_Parms), Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics
	{
		struct BasicGridActor_eventIsAvailableTile_Parms
		{
			FVector TileLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_TileLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_TileLocation = { "TileLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventIsAvailableTile_Parms, TileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_TileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_TileLocation_MetaData)) };
	void Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicGridActor_eventIsAvailableTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventIsAvailableTile_Parms), &Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_TileLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "IsAvailableTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::BasicGridActor_eventIsAvailableTile_Parms), Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_IsAvailableTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_IsAvailableTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics
	{
		struct BasicGridActor_eventMoveActorOnTail_Parms
		{
			AActor* Actor;
			FVector HitLocation;
			FVector Offset;
			int32 SizeX;
			int32 SizeY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventMoveActorOnTail_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventMoveActorOnTail_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventMoveActorOnTail_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventMoveActorOnTail_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasicGridActor_eventMoveActorOnTail_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicGridActor_eventMoveActorOnTail_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BasicGridActor_eventMoveActorOnTail_Parms), &Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_SizeX", "1" },
		{ "CPP_Default_SizeY", "1" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicGridActor, nullptr, "MoveActorOnTail", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::BasicGridActor_eventMoveActorOnTail_Parms), Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicGridActor);
	UClass* Z_Construct_UClass_ABasicGridActor_NoRegister()
	{
		return ABasicGridActor::StaticClass();
	}
	struct Z_Construct_UClass_ABasicGridActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapDT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapDT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapLegend_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapLegend;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableTilesLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableTilesLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableTilesLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusyTiles_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BusyTiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusyTiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BusyTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicGridActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicGridActor_GenerateMap, "GenerateMap" }, // 2364502297
		{ &Z_Construct_UFunction_ABasicGridActor_GetActorTiles, "GetActorTiles" }, // 105641449
		{ &Z_Construct_UFunction_ABasicGridActor_GetTailByLocation, "GetTailByLocation" }, // 4107236335
		{ &Z_Construct_UFunction_ABasicGridActor_GetWorldTailLocation, "GetWorldTailLocation" }, // 1605725389
		{ &Z_Construct_UFunction_ABasicGridActor_IsAvailableTile, "IsAvailableTile" }, // 905791808
		{ &Z_Construct_UFunction_ABasicGridActor_MoveActorOnTail, "MoveActorOnTail" }, // 2076728510
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicGridActor.h" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapDT_MetaData[] = {
		{ "Category", "BasicGridActor" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapDT = { "MapDT", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, MapDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapDT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapDT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapLegend_MetaData[] = {
		{ "Category", "BasicGridActor" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapLegend = { "MapLegend", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, MapLegend), Z_Construct_UClass_UMapLegend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapLegend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapLegend_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes_Inner = { "AllMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes = { "AllMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, AllMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation_Inner = { "AvailableTilesLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation = { "AvailableTilesLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, AvailableTilesLocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_ValueProp = { "BusyTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FBusyTile, METADATA_PARAMS(nullptr, 0) }; // 3789281838
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_Key_KeyProp = { "BusyTiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles = { "BusyTiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, BusyTiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_MetaData)) }; // 3789281838
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map_Inner = { "Map", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedMapData, METADATA_PARAMS(nullptr, 0) }; // 2649027847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicGridActor, Map), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map_MetaData)) }; // 2649027847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicGridActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapDT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_MapLegend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AllMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_AvailableTilesLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_BusyTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicGridActor_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicGridActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicGridActor_Statics::ClassParams = {
		&ABasicGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicGridActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicGridActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicGridActor()
	{
		if (!Z_Registration_Info_UClass_ABasicGridActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicGridActor.OuterSingleton, Z_Construct_UClass_ABasicGridActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicGridActor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ABasicGridActor>()
	{
		return ABasicGridActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicGridActor);
	ABasicGridActor::~ABasicGridActor() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ScriptStructInfo[] = {
		{ FMapObject::StaticStruct, Z_Construct_UScriptStruct_FMapObject_Statics::NewStructOps, TEXT("MapObject"), &Z_Registration_Info_UScriptStruct_MapObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapObject), 1598268792U) },
		{ FMapRow::StaticStruct, Z_Construct_UScriptStruct_FMapRow_Statics::NewStructOps, TEXT("MapRow"), &Z_Registration_Info_UScriptStruct_MapRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapRow), 776677094U) },
		{ FMapData::StaticStruct, Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps, TEXT("MapData"), &Z_Registration_Info_UScriptStruct_MapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapData), 597183507U) },
		{ FCachedMapInfo::StaticStruct, Z_Construct_UScriptStruct_FCachedMapInfo_Statics::NewStructOps, TEXT("CachedMapInfo"), &Z_Registration_Info_UScriptStruct_CachedMapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedMapInfo), 2984303560U) },
		{ FCachedMapData::StaticStruct, Z_Construct_UScriptStruct_FCachedMapData_Statics::NewStructOps, TEXT("CachedMapData"), &Z_Registration_Info_UScriptStruct_CachedMapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedMapData), 2649027847U) },
		{ FBusyTile::StaticStruct, Z_Construct_UScriptStruct_FBusyTile_Statics::NewStructOps, TEXT("BusyTile"), &Z_Registration_Info_UScriptStruct_BusyTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusyTile), 3789281838U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapLegend, UMapLegend::StaticClass, TEXT("UMapLegend"), &Z_Registration_Info_UClass_UMapLegend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapLegend), 3465326898U) },
		{ Z_Construct_UClass_ABasicGridActor, ABasicGridActor::StaticClass, TEXT("ABasicGridActor"), &Z_Registration_Info_UClass_ABasicGridActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicGridActor), 3446653504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_627988047(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasicGridActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
