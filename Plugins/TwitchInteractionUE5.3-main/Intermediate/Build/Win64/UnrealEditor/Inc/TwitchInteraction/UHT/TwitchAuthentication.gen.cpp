// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchAuthentication() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchAuthentication();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchAuthentication_NoRegister();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchChat_NoRegister();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchPubSub_NoRegister();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchAuthUserInfo();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchAuthUserInfoData();
	UPackage* Z_Construct_UPackage__Script_TwitchInteraction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData;
class UScriptStruct* FTwitchAuthUserInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchAuthUserInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchAuthUserInfoData>()
{
	return FTwitchAuthUserInfoData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_login_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_login;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_display_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_broadcaster_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_broadcaster_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_profile_image_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_profile_image_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offline_image_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_offline_image_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_view_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_view_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchAuthUserInfoData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_login_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_login = { "login", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, login), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_login_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_login_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_display_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_display_name = { "display_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_display_name_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_display_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_broadcaster_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_broadcaster_type = { "broadcaster_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, broadcaster_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_broadcaster_type_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_broadcaster_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_description_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_profile_image_url_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_profile_image_url = { "profile_image_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, profile_image_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_profile_image_url_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_profile_image_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_offline_image_url_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_offline_image_url = { "offline_image_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, offline_image_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_offline_image_url_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_offline_image_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_view_count_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_view_count = { "view_count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, view_count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_view_count_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_view_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_email_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, email), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_email_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_email_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfoData, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_login,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_display_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_broadcaster_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_profile_image_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_offline_image_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_view_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewProp_created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchAuthUserInfoData",
		Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::PropPointers),
		sizeof(FTwitchAuthUserInfoData),
		alignof(FTwitchAuthUserInfoData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchAuthUserInfoData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo;
class UScriptStruct* FTwitchAuthUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchAuthUserInfo, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchAuthUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchAuthUserInfo>()
{
	return FTwitchAuthUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchAuthUserInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwitchAuthUserInfoData, METADATA_PARAMS(0, nullptr) }; // 3068079007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchAuthUserInfo, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data_MetaData) }; // 3068079007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchAuthUserInfo",
		Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::PropPointers),
		sizeof(FTwitchAuthUserInfo),
		alignof(FTwitchAuthUserInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchAuthUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventTokenReceived_Parms
		{
			FString token;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventTokenReceived_Parms, token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::NewProp_token_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::NewProp_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::NewProp_token,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "TokenReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventTokenReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventTokenReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTokenReceived_DelegateWrapper(const FMulticastScriptDelegate& TokenReceived, const FString& token)
{
	struct _Script_TwitchInteraction_eventTokenReceived_Parms
	{
		FString token;
	};
	_Script_TwitchInteraction_eventTokenReceived_Parms Parms;
	Parms.token=token;
	TokenReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventUserInfoReceived_Parms
		{
			FString userId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventUserInfoReceived_Parms, userId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::NewProp_userId_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::NewProp_userId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::NewProp_userId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "UserInfoReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventUserInfoReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventUserInfoReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUserInfoReceived_DelegateWrapper(const FMulticastScriptDelegate& UserInfoReceived, const FString& userId)
{
	struct _Script_TwitchInteraction_eventUserInfoReceived_Parms
	{
		FString userId;
	};
	_Script_TwitchInteraction_eventUserInfoReceived_Parms Parms;
	Parms.userId=userId;
	UserInfoReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventValidateTokenReceived_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((_Script_TwitchInteraction_eventValidateTokenReceived_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwitchInteraction_eventValidateTokenReceived_Parms), &Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "ValidateTokenReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventValidateTokenReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventValidateTokenReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FValidateTokenReceived_DelegateWrapper(const FMulticastScriptDelegate& ValidateTokenReceived, bool success)
{
	struct _Script_TwitchInteraction_eventValidateTokenReceived_Parms
	{
		bool success;
	};
	_Script_TwitchInteraction_eventValidateTokenReceived_Parms Parms;
	Parms.success=success ? true : false;
	ValidateTokenReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTwitchAuthentication::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchAuthentication::execCheckTokenValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckTokenValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchAuthentication::execFetchUserInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__username);
		P_GET_PROPERTY(FStrProperty,Z_Param__twitchToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchUserInfo(Z_Param__username,Z_Param__twitchToken);
		P_NATIVE_END;
	}
	void UTwitchAuthentication::StaticRegisterNativesUTwitchAuthentication()
	{
		UClass* Class = UTwitchAuthentication::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckTokenValid", &UTwitchAuthentication::execCheckTokenValid },
			{ "FetchUserInfo", &UTwitchAuthentication::execFetchUserInfo },
			{ "Init", &UTwitchAuthentication::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchAuthentication, nullptr, "CheckTokenValid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics
	{
		struct TwitchAuthentication_eventFetchUserInfo_Parms
		{
			FString _username;
			FString _twitchToken;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__username;
		static const UECodeGen_Private::FStrPropertyParams NewProp__twitchToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp__username = { "_username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchAuthentication_eventFetchUserInfo_Parms, _username), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp__twitchToken = { "_twitchToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchAuthentication_eventFetchUserInfo_Parms, _twitchToken), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchAuthentication_eventFetchUserInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchAuthentication_eventFetchUserInfo_Parms), &Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp__username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp__twitchToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchAuthentication, nullptr, "FetchUserInfo", nullptr, nullptr, Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::TwitchAuthentication_eventFetchUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::TwitchAuthentication_eventFetchUserInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchAuthentication_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchAuthentication_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchAuthentication_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchAuthentication, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchAuthentication_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchAuthentication_Init_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTwitchAuthentication_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchAuthentication_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitchAuthentication);
	UClass* Z_Construct_UClass_UTwitchAuthentication_NoRegister()
	{
		return UTwitchAuthentication::StaticClass();
	}
	struct Z_Construct_UClass_UTwitchAuthentication_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_listenPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_listenPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redirectUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_redirectUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FStrPropertyParams NewProp_scopes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scopes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_scopes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSubComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventSubComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwitchChatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TwitchChatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTokenReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTokenReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserIdReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserIdReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTokenValidReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTokenValidReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitchAuthentication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitchAuthentication_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitchAuthentication_CheckTokenValid, "CheckTokenValid" }, // 1048005513
		{ &Z_Construct_UFunction_UTwitchAuthentication_FetchUserInfo, "FetchUserInfo" }, // 3255087056
		{ &Z_Construct_UFunction_UTwitchAuthentication_Init, "Init" }, // 1316746261
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TwitchAuthentication.h" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_listenPort_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_listenPort = { "listenPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, listenPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_listenPort_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_listenPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_redirectUrl_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_redirectUrl = { "redirectUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, redirectUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_redirectUrl_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_redirectUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_userid_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, userid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_userid_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_userid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_username_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_username_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_clientId_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_clientId = { "clientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, clientId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_clientId_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_clientId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_token_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_token_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_token_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes_Inner = { "scopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes = { "scopes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, scopes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_EventSubComponent_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_EventSubComponent = { "EventSubComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, EventSubComponent), Z_Construct_UClass_UTwitchPubSub_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_EventSubComponent_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_EventSubComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_TwitchChatComponent_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_TwitchChatComponent = { "TwitchChatComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, TwitchChatComponent), Z_Construct_UClass_UTwitchChat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_TwitchChatComponent_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_TwitchChatComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenReceived = { "OnTokenReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, OnTokenReceived), Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenReceived_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenReceived_MetaData) }; // 2023439906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnUserIdReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnUserIdReceived = { "OnUserIdReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, OnUserIdReceived), Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnUserIdReceived_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnUserIdReceived_MetaData) }; // 64694548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenValidReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchAuthentication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenValidReceived = { "OnTokenValidReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchAuthentication, OnTokenValidReceived), Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenValidReceived_MetaData), Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenValidReceived_MetaData) }; // 195736428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwitchAuthentication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_listenPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_redirectUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_userid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_clientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_scopes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_EventSubComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_TwitchChatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnUserIdReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchAuthentication_Statics::NewProp_OnTokenValidReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitchAuthentication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitchAuthentication>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitchAuthentication_Statics::ClassParams = {
		&UTwitchAuthentication::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwitchAuthentication_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwitchAuthentication_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchAuthentication_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTwitchAuthentication()
	{
		if (!Z_Registration_Info_UClass_UTwitchAuthentication.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitchAuthentication.OuterSingleton, Z_Construct_UClass_UTwitchAuthentication_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitchAuthentication.OuterSingleton;
	}
	template<> TWITCHINTERACTION_API UClass* StaticClass<UTwitchAuthentication>()
	{
		return UTwitchAuthentication::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitchAuthentication);
	UTwitchAuthentication::~UTwitchAuthentication() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ScriptStructInfo[] = {
		{ FTwitchAuthUserInfoData::StaticStruct, Z_Construct_UScriptStruct_FTwitchAuthUserInfoData_Statics::NewStructOps, TEXT("TwitchAuthUserInfoData"), &Z_Registration_Info_UScriptStruct_TwitchAuthUserInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchAuthUserInfoData), 3068079007U) },
		{ FTwitchAuthUserInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchAuthUserInfo_Statics::NewStructOps, TEXT("TwitchAuthUserInfo"), &Z_Registration_Info_UScriptStruct_TwitchAuthUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchAuthUserInfo), 2391797571U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitchAuthentication, UTwitchAuthentication::StaticClass, TEXT("UTwitchAuthentication"), &Z_Registration_Info_UClass_UTwitchAuthentication, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitchAuthentication), 2501097201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_2111683125(TEXT("/Script/TwitchInteraction"),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchAuthentication_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
