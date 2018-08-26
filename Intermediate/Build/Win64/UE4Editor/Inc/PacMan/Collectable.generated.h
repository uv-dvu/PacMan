// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define PACMAN_Collectable_generated_h

#define PacMan_Source_PacMan_Public_Collectable_h_12_RPC_WRAPPERS
#define PacMan_Source_PacMan_Public_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_Public_Collectable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_ACollectable(); \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ACollectable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_Collectable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_ACollectable(); \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ACollectable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_Collectable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public:


#define PacMan_Source_PacMan_Public_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable)


#define PacMan_Source_PacMan_Public_Collectable_h_12_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_Public_Collectable_h_9_PROLOG
#define PacMan_Source_PacMan_Public_Collectable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_Collectable_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_Collectable_h_12_RPC_WRAPPERS \
	PacMan_Source_PacMan_Public_Collectable_h_12_INCLASS \
	PacMan_Source_PacMan_Public_Collectable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_Public_Collectable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_Collectable_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_Collectable_h_12_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_Public_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
