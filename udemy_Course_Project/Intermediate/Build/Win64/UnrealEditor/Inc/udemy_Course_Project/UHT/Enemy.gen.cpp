// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "udemy_Course_Project/Public/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AEnemy();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	UDEMY_COURSE_PROJECT_API UEnum* Z_Construct_UEnum_udemy_Course_Project_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_udemy_Course_Project();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_udemy_Course_Project_EEnemyState, (UObject*)Z_Construct_UPackage__Script_udemy_Course_Project(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::EECS_Alive", (int64)EEnemyState::EECS_Alive },
		{ "EEnemyState::EECS_Dead", (int64)EEnemyState::EECS_Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EECS_Alive.DisplayName", "Alive" },
		{ "EECS_Alive.Name", "EEnemyState::EECS_Alive" },
		{ "EECS_Dead.DisplayName", "Dead" },
		{ "EECS_Dead.Name", "EEnemyState::EECS_Dead" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_udemy_Course_Project,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_udemy_Course_Project_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_udemy_Course_Project_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pHitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pHitReactMontage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_EnemyState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_EnemyState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_EnemyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pCurrentPatrolTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pCurrentPatrolTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_tabPatrolTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_tabPatrolTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_tabPatrolTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pAttributeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pAttributeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pHealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pHealthBarWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_udemy_Course_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHitReactMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hit Reaction Animation Montage\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hit Reaction Animation Montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHitReactMontage = { "m_pHitReactMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_pHitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHitReactMontage_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHitReactMontage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState = { "m_EnemyState", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_EnemyState), Z_Construct_UEnum_udemy_Course_Project_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState_MetaData) }; // 2069571744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pCurrentPatrolTarget_MetaData[] = {
		{ "Category", "AI Navigation" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pCurrentPatrolTarget = { "m_pCurrentPatrolTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_pCurrentPatrolTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pCurrentPatrolTarget_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_pCurrentPatrolTarget_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets_Inner = { "m_tabPatrolTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets_MetaData[] = {
		{ "Category", "AI Navigation" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets = { "m_tabPatrolTargets", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_tabPatrolTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttributeComponent_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttributeComponent = { "m_pAttributeComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_pAttributeComponent), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttributeComponent_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttributeComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHealthBarWidget_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHealthBarWidget = { "m_pHealthBarWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, m_pHealthBarWidget), Z_Construct_UClass_UHealthBarComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHealthBarWidget_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHealthBarWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pCurrentPatrolTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_tabPatrolTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttributeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pHealthBarWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(AEnemy, IHitInterface), false },  // 2415062262
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	AEnemy::~AEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069571744U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 4169500607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_671335766(TEXT("/Script/udemy_Course_Project"),
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Enemy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
