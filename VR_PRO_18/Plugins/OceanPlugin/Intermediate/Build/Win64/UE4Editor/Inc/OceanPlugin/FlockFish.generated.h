// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef OCEANPLUGIN_FlockFish_generated_h
#error "FlockFish.generated.h already included, missing '#pragma once' in FlockFish.h"
#endif
#define OCEANPLUGIN_FlockFish_generated_h

#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlockFish(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AFlockFish(); \
public: \
	DECLARE_CLASS(AFlockFish, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFlockFish) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAFlockFish(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AFlockFish(); \
public: \
	DECLARE_CLASS(AFlockFish, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFlockFish) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockFish(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockFish) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockFish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockFish); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockFish(AFlockFish&&); \
	NO_API AFlockFish(const AFlockFish&); \
public:


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockFish(AFlockFish&&); \
	NO_API AFlockFish(const AFlockFish&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockFish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockFish); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockFish)


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FishInteractionSphere() { return STRUCT_OFFSET(AFlockFish, FishInteractionSphere); }


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_32_PROLOG
#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_PRIVATE_PROPERTY_OFFSET \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_RPC_WRAPPERS \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_INCLASS \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_PRIVATE_PROPERTY_OFFSET \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_INCLASS_NO_PURE_DECLS \
	OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OceanProject_4_18_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
