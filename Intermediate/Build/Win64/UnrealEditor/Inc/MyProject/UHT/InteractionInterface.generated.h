// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define MYPROJECT_InteractionInterface_generated_h

#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_RPC_WRAPPERS \
	virtual void OnRightButtonClicked_Implementation(FVector const& ClickLocation) {}; \
	virtual void OnLeftButtonClicked_Implementation(FVector const& ClickLocation) {}; \
 \
	DECLARE_FUNCTION(execOnRightButtonClicked); \
	DECLARE_FUNCTION(execOnLeftButtonClicked);


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRightButtonClicked_Implementation(FVector const& ClickLocation) {}; \
	virtual void OnLeftButtonClicked_Implementation(FVector const& ClickLocation) {}; \
 \
	DECLARE_FUNCTION(execOnRightButtonClicked); \
	DECLARE_FUNCTION(execOnLeftButtonClicked);


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UInteractionInterface(UInteractionInterface&&); \
	MYPROJECT_API UInteractionInterface(const UInteractionInterface&); \
public: \
	MYPROJECT_API virtual ~UInteractionInterface();


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UInteractionInterface(UInteractionInterface&&); \
	MYPROJECT_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	MYPROJECT_API virtual ~UInteractionInterface();


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_OnLeftButtonClicked(UObject* O, FVector const& ClickLocation); \
	static void Execute_OnRightButtonClicked(UObject* O, FVector const& ClickLocation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_OnLeftButtonClicked(UObject* O, FVector const& ClickLocation); \
	static void Execute_OnRightButtonClicked(UObject* O, FVector const& ClickLocation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_10_PROLOG
#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
