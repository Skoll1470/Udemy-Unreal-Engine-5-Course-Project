// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "udemy_Course_Project/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AItem();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_udemy_Course_Project();
// End Cross Module References
	DEFINE_FUNCTION(AItem::execfTransformedCos)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_fValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->fTransformedCos(Z_Param_in_fValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execfTransformedSin)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_fValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->fTransformedSin(Z_Param_in_fValue);
		P_NATIVE_END;
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "fTransformedCos", &AItem::execfTransformedCos },
			{ "fTransformedSin", &AItem::execfTransformedSin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_fTransformedCos_Statics
	{
		struct Item_eventfTransformedCos_Parms
		{
			float in_fValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_in_fValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_fTransformedCos_Statics::NewProp_in_fValue = { "in_fValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventfTransformedCos_Parms, in_fValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_fTransformedCos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventfTransformedCos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_fTransformedCos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_fTransformedCos_Statics::NewProp_in_fValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_fTransformedCos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_fTransformedCos_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The transformed Cos function\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transformed Cos function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_fTransformedCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "fTransformedCos", nullptr, nullptr, Z_Construct_UFunction_AItem_fTransformedCos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedCos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_fTransformedCos_Statics::Item_eventfTransformedCos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedCos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_fTransformedCos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedCos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItem_fTransformedCos_Statics::Item_eventfTransformedCos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItem_fTransformedCos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_fTransformedCos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_fTransformedSin_Statics
	{
		struct Item_eventfTransformedSin_Parms
		{
			float in_fValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_in_fValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_fTransformedSin_Statics::NewProp_in_fValue = { "in_fValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventfTransformedSin_Parms, in_fValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_fTransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventfTransformedSin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_fTransformedSin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_fTransformedSin_Statics::NewProp_in_fValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_fTransformedSin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_fTransformedSin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The transformed Sin function\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transformed Sin function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_fTransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "fTransformedSin", nullptr, nullptr, Z_Construct_UFunction_AItem_fTransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedSin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_fTransformedSin_Statics::Item_eventfTransformedSin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedSin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_fTransformedSin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_fTransformedSin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItem_fTransformedSin_Statics::Item_eventfTransformedSin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItem_fTransformedSin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_fTransformedSin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fTimeConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fTimeConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fRunningTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fRunningTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_udemy_Course_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_fTransformedCos, "fTransformedCos" }, // 1904682920
		{ &Z_Construct_UFunction_AItem_fTransformedSin, "fTransformedSin" }, // 51137705
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_m_fAmplitude_MetaData[] = {
		{ "Category", "Sin and Cos Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The amplitude used in TransformedSin and TransformedCos\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amplitude used in TransformedSin and TransformedCos" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_m_fAmplitude = { "m_fAmplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, m_fAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_m_fAmplitude_MetaData), Z_Construct_UClass_AItem_Statics::NewProp_m_fAmplitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_m_fTimeConstant_MetaData[] = {
		{ "Category", "Sin and Cos Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time constant used in TransformedSin and TransformedCos\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time constant used in TransformedSin and TransformedCos" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_m_fTimeConstant = { "m_fTimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, m_fTimeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_m_fTimeConstant_MetaData), Z_Construct_UClass_AItem_Statics::NewProp_m_fTimeConstant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_m_fRunningTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time since Item has been loaded\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time since Item has been loaded" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_m_fRunningTime = { "m_fRunningTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, m_fRunningTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_m_fRunningTime_MetaData), Z_Construct_UClass_AItem_Statics::NewProp_m_fRunningTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_AItem_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_m_fAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_m_fTimeConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_m_fRunningTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AItem()
	{
		if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItem.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
	AItem::~AItem() {}
	struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 1050008896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Item_h_1795940536(TEXT("/Script/udemy_Course_Project"),
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
