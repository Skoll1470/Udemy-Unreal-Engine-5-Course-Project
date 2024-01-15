// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "udemy_Course_Project/Public/Bird.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_ABird();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_ABird_NoRegister();
	UPackage* Z_Construct_UPackage__Script_udemy_Course_Project();
// End Cross Module References
	void ABird::StaticRegisterNativesABird()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABird);
	UClass* Z_Construct_UClass_ABird_NoRegister()
	{
		return ABird::StaticClass();
	}
	struct Z_Construct_UClass_ABird_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABird_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_udemy_Course_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bird.h" },
		{ "ModuleRelativePath", "Public/Bird.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_m_CapsuleComponent_MetaData[] = {
		{ "Category", "Bird" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Capsule Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capsule Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_m_CapsuleComponent = { "m_CapsuleComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, m_CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_m_CapsuleComponent_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_m_CapsuleComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_m_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Bird" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Skeletal mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal mesh Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_m_SkeletalMeshComponent = { "m_SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, m_SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_m_SkeletalMeshComponent_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_m_SkeletalMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_m_SpringArmComponent_MetaData[] = {
		{ "Category", "Bird" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spring Arm Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_m_SpringArmComponent = { "m_SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, m_SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_m_SpringArmComponent_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_m_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_m_CameraComponent_MetaData[] = {
		{ "Category", "Bird" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_m_CameraComponent = { "m_CameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, m_CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_m_CameraComponent_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_m_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABird_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_m_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_m_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_m_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_m_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABird_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABird>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABird_Statics::ClassParams = {
		&ABird::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABird_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams), Z_Construct_UClass_ABird_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABird()
	{
		if (!Z_Registration_Info_UClass_ABird.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABird.OuterSingleton, Z_Construct_UClass_ABird_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABird.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<ABird>()
	{
		return ABird::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABird);
	ABird::~ABird() {}
	struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Bird_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Bird_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABird, ABird::StaticClass, TEXT("ABird"), &Z_Registration_Info_UClass_ABird, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABird), 4077634732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Bird_h_3600368247(TEXT("/Script/udemy_Course_Project"),
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Bird_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Bird_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
