// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "udemy_Course_Project/Public/MainCharacterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_udemy_Course_Project();
// End Cross Module References
	void UMainCharacterAnimInstance::StaticRegisterNativesUMainCharacterAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainCharacterAnimInstance);
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMainCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMainCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMainCharacterMovementComponenet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMainCharacterMovementComponenet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fGroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fGroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsFalling_MetaData[];
#endif
		static void NewProp_m_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsFalling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_udemy_Course_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MainCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacter_MetaData[] = {
		{ "Category", "MainCharacterAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Character Pointer\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Character Pointer" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacter = { "m_pMainCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, m_pMainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacter_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacterMovementComponenet_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Character Movement Component Pointer\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Character Movement Component Pointer" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacterMovementComponenet = { "m_pMainCharacterMovementComponenet", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, m_pMainCharacterMovementComponenet), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacterMovementComponenet_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacterMovementComponenet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_fGroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Character Ground Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Character Ground Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_fGroundSpeed = { "m_fGroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, m_fGroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_fGroundSpeed_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_fGroundSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Boolean indicating if the Main Character is falling\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boolean indicating if the Main Character is falling" },
#endif
	};
#endif
	void Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling_SetBit(void* Obj)
	{
		((UMainCharacterAnimInstance*)Obj)->m_bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling = { "m_bIsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainCharacterAnimInstance), &Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_pMainCharacterMovementComponenet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_fGroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_m_bIsFalling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharacterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams = {
		&UMainCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<UMainCharacterAnimInstance>()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	UMainCharacterAnimInstance::UMainCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharacterAnimInstance);
	UMainCharacterAnimInstance::~UMainCharacterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainCharacterAnimInstance, UMainCharacterAnimInstance::StaticClass, TEXT("UMainCharacterAnimInstance"), &Z_Registration_Info_UClass_UMainCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainCharacterAnimInstance), 1873678637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacterAnimInstance_h_2246667398(TEXT("/Script/udemy_Course_Project"),
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
