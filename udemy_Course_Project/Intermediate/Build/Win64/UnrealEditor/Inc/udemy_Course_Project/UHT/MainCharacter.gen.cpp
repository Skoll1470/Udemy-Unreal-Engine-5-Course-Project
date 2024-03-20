// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "udemy_Course_Project/Public/MainCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AMainCharacter();
	UDEMY_COURSE_PROJECT_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	UDEMY_COURSE_PROJECT_API UEnum* Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates();
	UPackage* Z_Construct_UPackage__Script_udemy_Course_Project();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMainCharacterStates;
	static UEnum* EMainCharacterStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMainCharacterStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMainCharacterStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates, (UObject*)Z_Construct_UPackage__Script_udemy_Course_Project(), TEXT("EMainCharacterStates"));
		}
		return Z_Registration_Info_UEnum_EMainCharacterStates.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UEnum* StaticEnum<EMainCharacterStates>()
	{
		return EMainCharacterStates_StaticEnum();
	}
	struct Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enumerators[] = {
		{ "EMainCharacterStates::EMCS_Unoccpuied", (int64)EMainCharacterStates::EMCS_Unoccpuied },
		{ "EMainCharacterStates::EMCS_Rolling", (int64)EMainCharacterStates::EMCS_Rolling },
		{ "EMainCharacterStates::EMCS_Attacking", (int64)EMainCharacterStates::EMCS_Attacking },
		{ "EMainCharacterStates::EMCS_HitReact", (int64)EMainCharacterStates::EMCS_HitReact },
		{ "EMainCharacterStates::EMC_Unequipping", (int64)EMainCharacterStates::EMC_Unequipping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMC_Unequipping.DisplayName", "Unequipping" },
		{ "EMC_Unequipping.Name", "EMainCharacterStates::EMC_Unequipping" },
		{ "EMCS_Attacking.DisplayName", "Rolling" },
		{ "EMCS_Attacking.Name", "EMainCharacterStates::EMCS_Attacking" },
		{ "EMCS_HitReact.DisplayName", "HitReact" },
		{ "EMCS_HitReact.Name", "EMainCharacterStates::EMCS_HitReact" },
		{ "EMCS_Rolling.DisplayName", "Attacking" },
		{ "EMCS_Rolling.Name", "EMainCharacterStates::EMCS_Rolling" },
		{ "EMCS_Unoccpuied.DisplayName", "Unoccupied" },
		{ "EMCS_Unoccpuied.Name", "EMainCharacterStates::EMCS_Unoccpuied" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_udemy_Course_Project,
		nullptr,
		"EMainCharacterStates",
		"EMainCharacterStates",
		Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates()
	{
		if (!Z_Registration_Info_UEnum_EMainCharacterStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMainCharacterStates.InnerSingleton, Z_Construct_UEnum_udemy_Course_Project_EMainCharacterStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMainCharacterStates.InnerSingleton;
	}
	DEFINE_FUNCTION(AMainCharacter::execGetIsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execHandleOnMontageNotifyBegin)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_in_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_in_BranchingPayLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMontageNotifyBegin(Z_Param_in_NotifyName,Z_Param_Out_in_BranchingPayLoad);
		P_NATIVE_END;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsEquipped", &AMainCharacter::execGetIsEquipped },
			{ "HandleOnMontageNotifyBegin", &AMainCharacter::execHandleOnMontageNotifyBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics
	{
		struct MainCharacter_eventGetIsEquipped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainCharacter_eventGetIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacter_eventGetIsEquipped_Parms), &Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetIsEquipped", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::MainCharacter_eventGetIsEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::MainCharacter_eventGetIsEquipped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainCharacter_GetIsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetIsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics
	{
		struct MainCharacter_eventHandleOnMontageNotifyBegin_Parms
		{
			FName in_NotifyName;
			FBranchingPointNotifyPayload in_BranchingPayLoad;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_in_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_BranchingPayLoad_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_BranchingPayLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_NotifyName = { "in_NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventHandleOnMontageNotifyBegin_Parms, in_NotifyName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_BranchingPayLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_BranchingPayLoad = { "in_BranchingPayLoad", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventHandleOnMontageNotifyBegin_Parms, in_BranchingPayLoad), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_BranchingPayLoad_MetaData), Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_BranchingPayLoad_MetaData) }; // 3747288722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::NewProp_in_BranchingPayLoad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "HandleOnMontageNotifyBegin", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::MainCharacter_eventHandleOnMontageNotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::MainCharacter_eventHandleOnMontageNotifyBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pRollMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pRollMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pEquipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pEquipMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pOverlappingItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pOverlappingItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_udemy_Course_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_GetIsEquipped, "GetIsEquipped" }, // 3174780642
		{ &Z_Construct_UFunction_AMainCharacter_HandleOnMontageNotifyBegin, "HandleOnMontageNotifyBegin" }, // 33791543
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pRollMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Rolling Animation Montage\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rolling Animation Montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pRollMontage = { "m_pRollMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, m_pRollMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pRollMontage_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pRollMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pEquipMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attacking Animation Montage\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attacking Animation Montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pEquipMontage = { "m_pEquipMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, m_pEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pEquipMontage_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pEquipMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_SpringArmComponent_MetaData[] = {
		{ "Category", "MainCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spring Arm Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_SpringArmComponent = { "m_SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, m_SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_SpringArmComponent_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_CameraComponent_MetaData[] = {
		{ "Category", "MainCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_CameraComponent = { "m_CameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, m_CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_CameraComponent_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pOverlappingItem_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pOverlappingItem = { "m_pOverlappingItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, m_pOverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pOverlappingItem_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pOverlappingItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pRollMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pEquipMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_m_pOverlappingItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> UDEMY_COURSE_PROJECT_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	AMainCharacter::~AMainCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::EnumInfo[] = {
		{ EMainCharacterStates_StaticEnum, TEXT("EMainCharacterStates"), &Z_Registration_Info_UEnum_EMainCharacterStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1877401986U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 2454026226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_2070262730(TEXT("/Script/udemy_Course_Project"),
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_Udemy_Unreal_Engine_5_Course_Project_udemy_Course_Project_Source_udemy_Course_Project_Public_MainCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
