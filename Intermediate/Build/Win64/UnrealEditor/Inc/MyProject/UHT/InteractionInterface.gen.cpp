// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MYPROJECT_API UClass* Z_Construct_UClass_UInteractionInterface();
	MYPROJECT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(IInteractionInterface::execOnRightButtonClicked)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClickLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightButtonClicked_Implementation(Z_Param_Out_ClickLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionInterface::execOnLeftButtonClicked)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClickLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftButtonClicked_Implementation(Z_Param_Out_ClickLocation);
		P_NATIVE_END;
	}
	struct InteractionInterface_eventOnLeftButtonClicked_Parms
	{
		FVector ClickLocation;
	};
	struct InteractionInterface_eventOnRightButtonClicked_Parms
	{
		FVector ClickLocation;
	};
	void IInteractionInterface::OnLeftButtonClicked(FVector const& ClickLocation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLeftButtonClicked instead.");
	}
	void IInteractionInterface::OnRightButtonClicked(FVector const& ClickLocation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRightButtonClicked instead.");
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
		UClass* Class = UInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeftButtonClicked", &IInteractionInterface::execOnLeftButtonClicked },
			{ "OnRightButtonClicked", &IInteractionInterface::execOnRightButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::NewProp_ClickLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::NewProp_ClickLocation = { "ClickLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionInterface_eventOnLeftButtonClicked_Parms, ClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::NewProp_ClickLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::NewProp_ClickLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::NewProp_ClickLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "OnLeftButtonClicked", nullptr, nullptr, sizeof(InteractionInterface_eventOnLeftButtonClicked_Parms), Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::NewProp_ClickLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::NewProp_ClickLocation = { "ClickLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionInterface_eventOnRightButtonClicked_Parms, ClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::NewProp_ClickLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::NewProp_ClickLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::NewProp_ClickLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "OnRightButtonClicked", nullptr, nullptr, sizeof(InteractionInterface_eventOnRightButtonClicked_Parms), Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_OnLeftButtonClicked, "OnLeftButtonClicked" }, // 2723775696
		{ &Z_Construct_UFunction_UInteractionInterface_OnRightButtonClicked, "OnRightButtonClicked" }, // 3428252793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
	UInteractionInterface::~UInteractionInterface() {}
	static FName NAME_UInteractionInterface_OnLeftButtonClicked = FName(TEXT("OnLeftButtonClicked"));
	void IInteractionInterface::Execute_OnLeftButtonClicked(UObject* O, FVector const& ClickLocation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventOnLeftButtonClicked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_OnLeftButtonClicked);
		if (Func)
		{
			Parms.ClickLocation=ClickLocation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->OnLeftButtonClicked_Implementation(ClickLocation);
		}
	}
	static FName NAME_UInteractionInterface_OnRightButtonClicked = FName(TEXT("OnRightButtonClicked"));
	void IInteractionInterface::Execute_OnRightButtonClicked(UObject* O, FVector const& ClickLocation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventOnRightButtonClicked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_OnRightButtonClicked);
		if (Func)
		{
			Parms.ClickLocation=ClickLocation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->OnRightButtonClicked_Implementation(ClickLocation);
		}
	}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_InteractionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_InteractionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 3739653725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_InteractionInterface_h_3021407763(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_InteractionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
