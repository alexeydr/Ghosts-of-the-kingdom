// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CustomMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MYPROJECT_API UClass* Z_Construct_UClass_ABasicGridActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMoveMap_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UAvailableMovesStruct();
	MYPROJECT_API UClass* Z_Construct_UClass_UAvailableMovesStruct_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCustomMovementComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UAvailableMovesStruct::StaticRegisterNativesUAvailableMovesStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvailableMovesStruct);
	UClass* Z_Construct_UClass_UAvailableMovesStruct_NoRegister()
	{
		return UAvailableMovesStruct::StaticClass();
	}
	struct Z_Construct_UClass_UAvailableMovesStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_X_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Y_size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmallAvailableMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallAvailableMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmallAvailableMoves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigAvailableMovesUp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BigAvailableMovesUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigAvailableMovesDown_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BigAvailableMovesDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigAvailableMovesRight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BigAvailableMovesRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigAvailableMovesLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BigAvailableMovesLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvailableMovesStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomMovementComponent.h" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_X_size_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_X_size = { "X_size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, X_size), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_X_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_X_size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_Y_size_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_Y_size = { "Y_size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, Y_size), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_Y_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_Y_size_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves_Inner = { "SmallAvailableMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves = { "SmallAvailableMoves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, SmallAvailableMoves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesUp_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesUp = { "BigAvailableMovesUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, BigAvailableMovesUp), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesDown_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesDown = { "BigAvailableMovesDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, BigAvailableMovesDown), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesRight_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesRight = { "BigAvailableMovesRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, BigAvailableMovesRight), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesLeft_MetaData[] = {
		{ "Category", "AvailableMovesStruct" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesLeft = { "BigAvailableMovesLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvailableMovesStruct, BigAvailableMovesLeft), METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvailableMovesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_X_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_Y_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_SmallAvailableMoves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvailableMovesStruct_Statics::NewProp_BigAvailableMovesLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvailableMovesStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvailableMovesStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvailableMovesStruct_Statics::ClassParams = {
		&UAvailableMovesStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvailableMovesStruct_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAvailableMovesStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvailableMovesStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvailableMovesStruct()
	{
		if (!Z_Registration_Info_UClass_UAvailableMovesStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvailableMovesStruct.OuterSingleton, Z_Construct_UClass_UAvailableMovesStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAvailableMovesStruct.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UAvailableMovesStruct>()
	{
		return UAvailableMovesStruct::StaticClass();
	}
	UAvailableMovesStruct::UAvailableMovesStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvailableMovesStruct);
	UAvailableMovesStruct::~UAvailableMovesStruct() {}
	void UCustomMovementComponent::StaticRegisterNativesUCustomMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMovementComponent);
	UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister()
	{
		return UCustomMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveMapClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MoveMapClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomMovementComponent.h" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomMovementComponent, Map), Z_Construct_UClass_ABasicGridActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMap = { "MoveMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomMovementComponent, MoveMap), Z_Construct_UClass_AMoveMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveData_MetaData[] = {
		{ "Category", "CustomMovementComponent" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveData = { "MoveData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomMovementComponent, MoveData), Z_Construct_UClass_UAvailableMovesStruct_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMapClass_MetaData[] = {
		{ "Category", "CustomMovementComponent" },
		{ "ModuleRelativePath", "Public/CustomMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMapClass = { "MoveMapClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomMovementComponent, MoveMapClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMoveMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMapClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMapClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveMapClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams = {
		&UCustomMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton, Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UCustomMovementComponent>()
	{
		return UCustomMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMovementComponent);
	UCustomMovementComponent::~UCustomMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CustomMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CustomMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAvailableMovesStruct, UAvailableMovesStruct::StaticClass, TEXT("UAvailableMovesStruct"), &Z_Registration_Info_UClass_UAvailableMovesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvailableMovesStruct), 1938196375U) },
		{ Z_Construct_UClass_UCustomMovementComponent, UCustomMovementComponent::StaticClass, TEXT("UCustomMovementComponent"), &Z_Registration_Info_UClass_UCustomMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMovementComponent), 249352122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CustomMovementComponent_h_1920868995(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CustomMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CustomMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
