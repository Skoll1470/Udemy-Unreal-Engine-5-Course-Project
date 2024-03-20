// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
#ifdef UDEMY_COURSE_PROJECT_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define UDEMY_COURSE_PROJECT_MainCharacter_generated_h

#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_SPARSE_DATA
#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsEquipped); \
	DECLARE_FUNCTION(execHandleOnMontageNotifyBegin);


#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_ACCESSORS
#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/udemy_Course_Project"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_24_PROLOG
#define FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_SPARSE_DATA \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_ACCESSORS \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h


#define FOREACH_ENUM_EMAINCHARACTERSTATES(op) \
	op(EMainCharacterStates::EMCS_Unoccpuied) \
	op(EMainCharacterStates::EMCS_Rolling) \
	op(EMainCharacterStates::EMCS_Attacking) \
	op(EMainCharacterStates::EMCS_HitReact) \
	op(EMainCharacterStates::EMC_Unequipping) 

enum class EMainCharacterStates : uint8;
template<> struct TIsUEnumClass<EMainCharacterStates> { enum { Value = true }; };
template<> UDEMY_COURSE_PROJECT_API UEnum* StaticEnum<EMainCharacterStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
