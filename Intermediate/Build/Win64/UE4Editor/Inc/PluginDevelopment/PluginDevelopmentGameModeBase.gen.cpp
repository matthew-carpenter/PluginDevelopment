// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PluginDevelopmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginDevelopmentGameModeBase() {}
// Cross Module References
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase_NoRegister();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PluginDevelopment();
// End Cross Module References
	void APluginDevelopmentGameModeBase::StaticRegisterNativesAPluginDevelopmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase_NoRegister()
	{
		return APluginDevelopmentGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PluginDevelopment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PluginDevelopmentGameModeBase.h" },
				{ "ModuleRelativePath", "PluginDevelopmentGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APluginDevelopmentGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APluginDevelopmentGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APluginDevelopmentGameModeBase, 1003404649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APluginDevelopmentGameModeBase(Z_Construct_UClass_APluginDevelopmentGameModeBase, &APluginDevelopmentGameModeBase::StaticClass, TEXT("/Script/PluginDevelopment"), TEXT("APluginDevelopmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APluginDevelopmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
