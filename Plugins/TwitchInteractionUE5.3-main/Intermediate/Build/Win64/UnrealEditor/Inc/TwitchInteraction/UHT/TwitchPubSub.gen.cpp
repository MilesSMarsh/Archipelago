// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPubSub.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchPubSub() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchPubSub();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchPubSub_NoRegister();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBits();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadge();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsData();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsRoot();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemData();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemReward();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRoot();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubRequest();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubRequestData();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribe();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeData();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchMessage();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchMessageData();
	UPackage* Z_Construct_UPackage__Script_TwitchInteraction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes;
class UScriptStruct* FTwitchEventSubscribeDataMessageEmotes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubscribeDataMessageEmotes"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubscribeDataMessageEmotes>()
{
	return FTwitchEventSubscribeDataMessageEmotes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_end;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubscribeDataMessageEmotes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_start_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeDataMessageEmotes, start), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_start_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_end_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeDataMessageEmotes, end), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_end_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_end_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeDataMessageEmotes, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubscribeDataMessageEmotes",
		Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::PropPointers),
		sizeof(FTwitchEventSubscribeDataMessageEmotes),
		alignof(FTwitchEventSubscribeDataMessageEmotes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage;
class UScriptStruct* FTwitchEventSubscribeDataMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubscribeDataMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubscribeDataMessage>()
{
	return FTwitchEventSubscribeDataMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_emotes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_emotes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_emotes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubscribeDataMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeDataMessage, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes_Inner = { "emotes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes, METADATA_PARAMS(0, nullptr) }; // 2440080095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes = { "emotes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeDataMessage, emotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes_MetaData) }; // 2440080095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewProp_emotes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubscribeDataMessage",
		Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::PropPointers),
		sizeof(FTwitchEventSubscribeDataMessage),
		alignof(FTwitchEventSubscribeDataMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage;
class UScriptStruct* FTwitchEventSubscribeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubscribeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubscribeMessage>()
{
	return FTwitchEventSubscribeMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sub_plan_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sub_plan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sub_plan_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sub_plan_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_months_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_months;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_gift_MetaData[];
#endif
		static void NewProp_is_gift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_gift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recipient_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_recipient_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recipient_user_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_recipient_user_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recipient_display_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_recipient_display_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cumulative_months_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_cumulative_months;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streak_months_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_streak_months;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multi_month_duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_multi_month_duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_display_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sub_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sub_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubscribeMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_id = { "channel_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, channel_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_name = { "channel_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, channel_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_time_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_time_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan = { "sub_plan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, sub_plan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_name = { "sub_plan_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, sub_plan_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_months_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_months = { "months", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, months), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_months_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_months_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_context_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, context), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_context_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift_SetBit(void* Obj)
	{
		((FTwitchEventSubscribeMessage*)Obj)->is_gift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift = { "is_gift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventSubscribeMessage), &Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_id = { "recipient_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, recipient_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_user_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_user_name = { "recipient_user_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, recipient_user_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_user_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_user_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_display_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_display_name = { "recipient_display_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, recipient_display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_display_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_display_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_cumulative_months_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_cumulative_months = { "cumulative_months", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, cumulative_months), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_cumulative_months_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_cumulative_months_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_streak_months_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_streak_months = { "streak_months", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, streak_months), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_streak_months_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_streak_months_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_multi_month_duration_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_multi_month_duration = { "multi_month_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, multi_month_duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_multi_month_duration_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_multi_month_duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_display_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_display_name = { "display_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_display_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_display_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_name = { "user_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, user_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_message = { "sub_message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeMessage, sub_message), Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_message_MetaData) }; // 166800262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_channel_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_plan_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_months,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_is_gift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_user_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_recipient_display_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_cumulative_months,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_streak_months,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_multi_month_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_display_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewProp_sub_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubscribeMessage",
		Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::PropPointers),
		sizeof(FTwitchEventSubscribeMessage),
		alignof(FTwitchEventSubscribeMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData;
class UScriptStruct* FTwitchEventSubscribeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubscribeData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubscribeData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubscribeData>()
{
	return FTwitchEventSubscribeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubscribeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_topic_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeData, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribeData, message), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_message_MetaData) }; // 829950223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubscribeData",
		Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::PropPointers),
		sizeof(FTwitchEventSubscribeData),
		alignof(FTwitchEventSubscribeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribeData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubscribe;
class UScriptStruct* FTwitchEventSubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubscribe, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubscribe>()
{
	return FTwitchEventSubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubscribe>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribe, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubscribe, data), Z_Construct_UScriptStruct_FTwitchEventSubscribeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_data_MetaData) }; // 2603113083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubscribe",
		Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::PropPointers),
		sizeof(FTwitchEventSubscribe),
		alignof(FTwitchEventSubscribe),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubscribe.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser;
class UScriptStruct* FTwitchEventRedeemRedemptionUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemRedemptionUser"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemRedemptionUser>()
{
	return FTwitchEventRedeemRedemptionUser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemRedemptionUser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRedemptionUser, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_login_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_login = { "login", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRedemptionUser, login), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_login_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_login_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_display_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_display_name = { "display_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRedemptionUser, display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_display_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_display_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_login,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewProp_display_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemRedemptionUser",
		Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::PropPointers),
		sizeof(FTwitchEventRedeemRedemptionUser),
		alignof(FTwitchEventRedeemRedemptionUser),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption;
class UScriptStruct* FTwitchEventRedeemRedemption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemRedemption"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemRedemption>()
{
	return FTwitchEventRedeemRedemption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_user;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemRedemption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRedemption, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_user_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRedemption, user), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_user_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_user_MetaData) }; // 366352224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewProp_user,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemRedemption",
		Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::PropPointers),
		sizeof(FTwitchEventRedeemRedemption),
		alignof(FTwitchEventRedeemRedemption),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream;
class UScriptStruct* FTwitchEventRedeemRewardMaxPreStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemRewardMaxPreStream"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemRewardMaxPreStream>()
{
	return FTwitchEventRedeemRewardMaxPreStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_enabled_MetaData[];
#endif
		static void NewProp_is_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_per_stream_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_max_per_stream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemRewardMaxPreStream>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled_SetBit(void* Obj)
	{
		((FTwitchEventRedeemRewardMaxPreStream*)Obj)->is_enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled = { "is_enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemRewardMaxPreStream), &Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_max_per_stream_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_max_per_stream = { "max_per_stream", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRewardMaxPreStream, max_per_stream), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_max_per_stream_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_max_per_stream_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_is_enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewProp_max_per_stream,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemRewardMaxPreStream",
		Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::PropPointers),
		sizeof(FTwitchEventRedeemRewardMaxPreStream),
		alignof(FTwitchEventRedeemRewardMaxPreStream),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages;
class UScriptStruct* FTwitchEventRedeemRewardImages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemRewardImages"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemRewardImages>()
{
	return FTwitchEventRedeemRewardImages::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_1x_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_1x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_2x_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_2x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_4x_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_4x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemRewardImages>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_1x_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_1x = { "url_1x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRewardImages, url_1x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_1x_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_1x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_2x_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_2x = { "url_2x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRewardImages, url_2x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_2x_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_2x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_4x_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_4x = { "url_4x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRewardImages, url_4x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_4x_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_4x_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_1x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_2x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewProp_url_4x,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemRewardImages",
		Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::PropPointers),
		sizeof(FTwitchEventRedeemRewardImages),
		alignof(FTwitchEventRedeemRewardImages),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward;
class UScriptStruct* FTwitchEventRedeemReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemReward, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemReward"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemReward>()
{
	return FTwitchEventRedeemReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_user_input_required_MetaData[];
#endif
		static void NewProp_is_user_input_required_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_user_input_required;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_sub_only_MetaData[];
#endif
		static void NewProp_is_sub_only_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_sub_only;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_default_image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_default_image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_background_color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_background_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_enabled_MetaData[];
#endif
		static void NewProp_is_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_paused_MetaData[];
#endif
		static void NewProp_is_paused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_paused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_in_stock_MetaData[];
#endif
		static void NewProp_is_in_stock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_in_stock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_should_redemptions_skip_request_queue_MetaData[];
#endif
		static void NewProp_should_redemptions_skip_request_queue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_should_redemptions_skip_request_queue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_per_stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_max_per_stream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_channel_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_channel_id = { "channel_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, channel_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_channel_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_channel_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_title_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_title_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_prompt_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, prompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_prompt_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_prompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_cost_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, cost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_cost_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_cost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->is_user_input_required = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required = { "is_user_input_required", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->is_sub_only = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only = { "is_sub_only", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_image_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, image), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_image_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_image_MetaData) }; // 2764153055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_default_image_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_default_image = { "default_image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, default_image), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_default_image_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_default_image_MetaData) }; // 2764153055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_background_color_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_background_color = { "background_color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, background_color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_background_color_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_background_color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->is_enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled = { "is_enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->is_paused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused = { "is_paused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->is_in_stock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock = { "is_in_stock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue_SetBit(void* Obj)
	{
		((FTwitchEventRedeemReward*)Obj)->should_redemptions_skip_request_queue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue = { "should_redemptions_skip_request_queue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventRedeemReward), &Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_max_per_stream_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_max_per_stream = { "max_per_stream", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemReward, max_per_stream), Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_max_per_stream_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_max_per_stream_MetaData) }; // 2698941838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_channel_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_user_input_required,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_sub_only,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_default_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_background_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_paused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_is_in_stock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_should_redemptions_skip_request_queue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewProp_max_per_stream,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemReward",
		Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::PropPointers),
		sizeof(FTwitchEventRedeemReward),
		alignof(FTwitchEventRedeemReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemReward()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemData;
class UScriptStruct* FTwitchEventRedeemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemData>()
{
	return FTwitchEventRedeemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redeemed_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_redeemed_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redemption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_redemption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_reward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_channel_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_channel_id = { "channel_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, channel_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_channel_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_channel_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redeemed_at_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redeemed_at = { "redeemed_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, redeemed_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redeemed_at_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redeemed_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_user_input_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_user_input = { "user_input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, user_input), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_user_input_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_user_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_status_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redemption_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redemption = { "redemption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, redemption), Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redemption_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redemption_MetaData) }; // 1748032106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_reward_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemData, reward), Z_Construct_UScriptStruct_FTwitchEventRedeemReward, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_reward_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_reward_MetaData) }; // 1437965957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_channel_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redeemed_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_user_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_redemption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewProp_reward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemData",
		Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::PropPointers),
		sizeof(FTwitchEventRedeemData),
		alignof(FTwitchEventRedeemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage;
class UScriptStruct* FTwitchEventRedeemMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemMessage>()
{
	return FTwitchEventRedeemMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemMessage, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemMessage, data), Z_Construct_UScriptStruct_FTwitchEventRedeemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_data_MetaData) }; // 3954508195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemMessage",
		Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::PropPointers),
		sizeof(FTwitchEventRedeemMessage),
		alignof(FTwitchEventRedeemMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot;
class UScriptStruct* FTwitchEventRedeemRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemRoot"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemRoot>()
{
	return FTwitchEventRedeemRoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemRoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRoot, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemRoot, data), Z_Construct_UScriptStruct_FTwitchEventRedeemMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_data_MetaData) }; // 2295990759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemRoot",
		Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::PropPointers),
		sizeof(FTwitchEventRedeemRoot),
		alignof(FTwitchEventRedeemRoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemRoot()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot;
class UScriptStruct* FTwitchEventRedeemDataRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventRedeemDataRoot"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventRedeemDataRoot>()
{
	return FTwitchEventRedeemDataRoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventRedeemDataRoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_topic_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemDataRoot, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventRedeemDataRoot, message), Z_Construct_UScriptStruct_FTwitchEventRedeemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_message_MetaData) }; // 3954508195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventRedeemDataRoot",
		Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::PropPointers),
		sizeof(FTwitchEventRedeemDataRoot),
		alignof(FTwitchEventRedeemDataRoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge;
class UScriptStruct* FTwitchEventBitsBadge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsBadge, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsBadge"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsBadge>()
{
	return FTwitchEventBitsBadge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_badge_tier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_badge_tier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chat_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chat_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsBadge>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_name = { "user_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, user_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_id = { "channel_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, channel_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_name = { "channel_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, channel_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_badge_tier_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_badge_tier = { "badge_tier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, badge_tier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_badge_tier_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_badge_tier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_chat_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_chat_message = { "chat_message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, chat_message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_chat_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_chat_message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_time_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadge, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_time_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_user_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_channel_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_badge_tier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_chat_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewProp_time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsBadge",
		Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::PropPointers),
		sizeof(FTwitchEventBitsBadge),
		alignof(FTwitchEventBitsBadge),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadge()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage;
class UScriptStruct* FTwitchEventBitsBadgeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsBadgeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsBadgeMessage>()
{
	return FTwitchEventBitsBadgeMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsBadgeMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_topic_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadgeMessage, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadgeMessage, message), Z_Construct_UScriptStruct_FTwitchEventBitsBadge, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_message_MetaData) }; // 1041809873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsBadgeMessage",
		Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::PropPointers),
		sizeof(FTwitchEventBitsBadgeMessage),
		alignof(FTwitchEventBitsBadgeMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot;
class UScriptStruct* FTwitchEventBitsBadgeRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsBadgeRoot"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsBadgeRoot>()
{
	return FTwitchEventBitsBadgeRoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsBadgeRoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadgeRoot, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsBadgeRoot, data), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_data_MetaData) }; // 3864608991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsBadgeRoot",
		Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::PropPointers),
		sizeof(FTwitchEventBitsBadgeRoot),
		alignof(FTwitchEventBitsBadgeRoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData;
class UScriptStruct* FTwitchEventBadgeEntitlemmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBadgeEntitlemmentData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBadgeEntitlemmentData>()
{
	return FTwitchEventBadgeEntitlemmentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_new_version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_new_version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previous_version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_previous_version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBadgeEntitlemmentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_new_version_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_new_version = { "new_version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBadgeEntitlemmentData, new_version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_new_version_MetaData), Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_new_version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_previous_version_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_previous_version = { "previous_version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBadgeEntitlemmentData, previous_version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_previous_version_MetaData), Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_previous_version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_new_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewProp_previous_version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBadgeEntitlemmentData",
		Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::PropPointers),
		sizeof(FTwitchEventBadgeEntitlemmentData),
		alignof(FTwitchEventBadgeEntitlemmentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsData;
class UScriptStruct* FTwitchEventBitsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsData>()
{
	return FTwitchEventBitsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bits_used_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bits_used;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chat_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chat_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_anonymous_MetaData[];
#endif
		static void NewProp_is_anonymous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_anonymous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_total_bits_used_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_total_bits_used;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_bits_used_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_bits_used = { "bits_used", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, bits_used), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_bits_used_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_bits_used_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_channel_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_channel_id = { "channel_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, channel_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_channel_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_channel_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_chat_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_chat_message = { "chat_message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, chat_message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_chat_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_chat_message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_context_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, context), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_context_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous_SetBit(void* Obj)
	{
		((FTwitchEventBitsData*)Obj)->is_anonymous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous = { "is_anonymous", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwitchEventBitsData), &Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_id = { "message_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, message_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_type_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_type = { "message_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, message_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_time_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_time_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_total_bits_used_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_total_bits_used = { "total_bits_used", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, total_bits_used), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_total_bits_used_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_total_bits_used_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_id_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_name_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_name = { "user_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, user_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_name_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_version_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsData, version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_version_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_bits_used,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_channel_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_chat_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_is_anonymous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_message_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_total_bits_used,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_user_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewProp_version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsData",
		Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::PropPointers),
		sizeof(FTwitchEventBitsData),
		alignof(FTwitchEventBitsData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBits;
class UScriptStruct* FTwitchEventBits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBits, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBits"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBits.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBits>()
{
	return FTwitchEventBits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBits>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBits, data), Z_Construct_UScriptStruct_FTwitchEventBitsData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewProp_data_MetaData) }; // 887467177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBits",
		Z_Construct_UScriptStruct_FTwitchEventBits_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBits_Statics::PropPointers),
		sizeof(FTwitchEventBits),
		alignof(FTwitchEventBits),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBits_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBits_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBits_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBits()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBits.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBits.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage;
class UScriptStruct* FTwitchEventBitsMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsMessage>()
{
	return FTwitchEventBitsMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_topic_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsMessage, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsMessage, message), Z_Construct_UScriptStruct_FTwitchEventBits, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_message_MetaData) }; // 3849791675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsMessage",
		Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::PropPointers),
		sizeof(FTwitchEventBitsMessage),
		alignof(FTwitchEventBitsMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot;
class UScriptStruct* FTwitchEventBitsRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventBitsRoot, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventBitsRoot"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventBitsRoot>()
{
	return FTwitchEventBitsRoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventBitsRoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsRoot, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventBitsRoot, data), Z_Construct_UScriptStruct_FTwitchEventBitsMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_data_MetaData) }; // 2307180068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventBitsRoot",
		Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::PropPointers),
		sizeof(FTwitchEventBitsRoot),
		alignof(FTwitchEventBitsRoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventBitsRoot()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData;
class UScriptStruct* FTwitchEventSubRequestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubRequestData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubRequestData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubRequestData>()
{
	return FTwitchEventSubRequestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_topics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_topics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_auth_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_auth_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubRequestData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics_Inner = { "topics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics = { "topics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubRequestData, topics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_auth_token_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_auth_token = { "auth_token", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubRequestData, auth_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_auth_token_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_auth_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_topics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewProp_auth_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubRequestData",
		Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::PropPointers),
		sizeof(FTwitchEventSubRequestData),
		alignof(FTwitchEventSubRequestData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubRequestData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchEventSubRequest;
class UScriptStruct* FTwitchEventSubRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchEventSubRequest, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchEventSubRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchEventSubRequest>()
{
	return FTwitchEventSubRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nonce_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_nonce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchEventSubRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubRequest, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_nonce_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_nonce = { "nonce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubRequest, nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_nonce_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_nonce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchEventSubRequest, data), Z_Construct_UScriptStruct_FTwitchEventSubRequestData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_data_MetaData) }; // 2277495591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_nonce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchEventSubRequest",
		Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::PropPointers),
		sizeof(FTwitchEventSubRequest),
		alignof(FTwitchEventSubRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchEventSubRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchEventSubRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchMessageData;
class UScriptStruct* FTwitchMessageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchMessageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchMessageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchMessageData, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchMessageData"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchMessageData.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchMessageData>()
{
	return FTwitchMessageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchMessageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchMessageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_topic_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessageData, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_message_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessageData, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchMessageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchMessageData",
		Z_Construct_UScriptStruct_FTwitchMessageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessageData_Statics::PropPointers),
		sizeof(FTwitchMessageData),
		alignof(FTwitchMessageData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchMessageData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessageData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchMessageData()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchMessageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchMessageData.InnerSingleton, Z_Construct_UScriptStruct_FTwitchMessageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchMessageData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchMessage;
class UScriptStruct* FTwitchMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchMessage>()
{
	return FTwitchMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nonce_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_nonce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessage, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_nonce_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_nonce = { "nonce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessage, nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_nonce_MetaData), Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_nonce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_error_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessage, error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_error_MetaData), Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_error_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchMessage, data), Z_Construct_UScriptStruct_FTwitchMessageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_data_MetaData) }; // 3063606616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_nonce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchMessage",
		Z_Construct_UScriptStruct_FTwitchMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::PropPointers),
		sizeof(FTwitchMessage),
		alignof(FTwitchMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchMessage.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventBitsEventReceived_Parms
		{
			FTwitchEventBitsData bitsEventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bitsEventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bitsEventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::NewProp_bitsEventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::NewProp_bitsEventInfo = { "bitsEventInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventBitsEventReceived_Parms, bitsEventInfo), Z_Construct_UScriptStruct_FTwitchEventBitsData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::NewProp_bitsEventInfo_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::NewProp_bitsEventInfo_MetaData) }; // 887467177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::NewProp_bitsEventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "BitsEventReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventBitsEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventBitsEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBitsEventReceived_DelegateWrapper(const FMulticastScriptDelegate& BitsEventReceived, FTwitchEventBitsData const& bitsEventInfo)
{
	struct _Script_TwitchInteraction_eventBitsEventReceived_Parms
	{
		FTwitchEventBitsData bitsEventInfo;
	};
	_Script_TwitchInteraction_eventBitsEventReceived_Parms Parms;
	Parms.bitsEventInfo=bitsEventInfo;
	BitsEventReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms
		{
			FTwitchEventBitsBadge bitsBadgeEventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bitsBadgeEventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bitsBadgeEventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::NewProp_bitsBadgeEventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::NewProp_bitsBadgeEventInfo = { "bitsBadgeEventInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms, bitsBadgeEventInfo), Z_Construct_UScriptStruct_FTwitchEventBitsBadge, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::NewProp_bitsBadgeEventInfo_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::NewProp_bitsBadgeEventInfo_MetaData) }; // 1041809873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::NewProp_bitsBadgeEventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "BitsBadgeEventReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBitsBadgeEventReceived_DelegateWrapper(const FMulticastScriptDelegate& BitsBadgeEventReceived, FTwitchEventBitsBadge const& bitsBadgeEventInfo)
{
	struct _Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms
	{
		FTwitchEventBitsBadge bitsBadgeEventInfo;
	};
	_Script_TwitchInteraction_eventBitsBadgeEventReceived_Parms Parms;
	Parms.bitsBadgeEventInfo=bitsBadgeEventInfo;
	BitsBadgeEventReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventRedeemEventReceived_Parms
		{
			FTwitchEventRedeemData redeemEventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redeemEventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_redeemEventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::NewProp_redeemEventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::NewProp_redeemEventInfo = { "redeemEventInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventRedeemEventReceived_Parms, redeemEventInfo), Z_Construct_UScriptStruct_FTwitchEventRedeemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::NewProp_redeemEventInfo_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::NewProp_redeemEventInfo_MetaData) }; // 3954508195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::NewProp_redeemEventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "RedeemEventReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventRedeemEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventRedeemEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRedeemEventReceived_DelegateWrapper(const FMulticastScriptDelegate& RedeemEventReceived, FTwitchEventRedeemData const& redeemEventInfo)
{
	struct _Script_TwitchInteraction_eventRedeemEventReceived_Parms
	{
		FTwitchEventRedeemData redeemEventInfo;
	};
	_Script_TwitchInteraction_eventRedeemEventReceived_Parms Parms;
	Parms.redeemEventInfo=redeemEventInfo;
	RedeemEventReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventSubscribeEventReceived_Parms
		{
			FTwitchEventSubscribeMessage subscribeEventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subscribeEventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_subscribeEventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::NewProp_subscribeEventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::NewProp_subscribeEventInfo = { "subscribeEventInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventSubscribeEventReceived_Parms, subscribeEventInfo), Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::NewProp_subscribeEventInfo_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::NewProp_subscribeEventInfo_MetaData) }; // 829950223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::NewProp_subscribeEventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "SubscribeEventReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventSubscribeEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventSubscribeEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSubscribeEventReceived_DelegateWrapper(const FMulticastScriptDelegate& SubscribeEventReceived, FTwitchEventSubscribeMessage const& subscribeEventInfo)
{
	struct _Script_TwitchInteraction_eventSubscribeEventReceived_Parms
	{
		FTwitchEventSubscribeMessage subscribeEventInfo;
	};
	_Script_TwitchInteraction_eventSubscribeEventReceived_Parms Parms;
	Parms.subscribeEventInfo=subscribeEventInfo;
	SubscribeEventReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTwitchPubSub::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param__message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchPubSub::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchPubSub::execConnect)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchPubSub::execSetInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__oauth);
		P_GET_PROPERTY(FStrProperty,Z_Param__authType);
		P_GET_PROPERTY(FStrProperty,Z_Param__channelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfo(Z_Param__oauth,Z_Param__authType,Z_Param__channelId);
		P_NATIVE_END;
	}
	void UTwitchPubSub::StaticRegisterNativesUTwitchPubSub()
	{
		UClass* Class = UTwitchPubSub::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UTwitchPubSub::execConnect },
			{ "Disconnect", &UTwitchPubSub::execDisconnect },
			{ "SendMessage", &UTwitchPubSub::execSendMessage },
			{ "SetInfo", &UTwitchPubSub::execSetInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitchPubSub_Connect_Statics
	{
		struct TwitchPubSub_eventConnect_Parms
		{
			FString result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchPubSub_eventConnect_Parms, result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchPubSub_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchPubSub_eventConnect_Parms), &Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchPubSub, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::TwitchPubSub_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::TwitchPubSub_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchPubSub_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchPubSub_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics
	{
		struct TwitchPubSub_eventDisconnect_Parms
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
	void Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchPubSub_eventDisconnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchPubSub_eventDisconnect_Parms), &Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchPubSub, nullptr, "Disconnect", nullptr, nullptr, Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::TwitchPubSub_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::TwitchPubSub_eventDisconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchPubSub_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchPubSub_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics
	{
		struct TwitchPubSub_eventSendMessage_Parms
		{
			FString _message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp__message = { "_message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchPubSub_eventSendMessage_Parms, _message), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchPubSub_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchPubSub_eventSendMessage_Parms), &Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp__message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchPubSub, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::TwitchPubSub_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::TwitchPubSub_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchPubSub_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchPubSub_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics
	{
		struct TwitchPubSub_eventSetInfo_Parms
		{
			FString _oauth;
			FString _authType;
			FString _channelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__oauth_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__oauth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__authType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__authType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__channelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__oauth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__oauth = { "_oauth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchPubSub_eventSetInfo_Parms, _oauth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__oauth_MetaData), Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__oauth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__authType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__authType = { "_authType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchPubSub_eventSetInfo_Parms, _authType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__authType_MetaData), Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__authType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__channelId = { "_channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchPubSub_eventSetInfo_Parms, _channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__channelId_MetaData), Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__channelId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__oauth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__authType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::NewProp__channelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "CPP_Default__authType", "Bearer" },
		{ "CPP_Default__channelId", "0" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchPubSub, nullptr, "SetInfo", nullptr, nullptr, Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::TwitchPubSub_eventSetInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::TwitchPubSub_eventSetInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchPubSub_SetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchPubSub_SetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitchPubSub);
	UClass* Z_Construct_UClass_UTwitchPubSub_NoRegister()
	{
		return UTwitchPubSub::StaticClass();
	}
	struct Z_Construct_UClass_UTwitchPubSub_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_authToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_authToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_authType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_authType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_listenTopics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_listenTopics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_listenTopics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBitsEventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBitsEventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBitsBadgeEventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBitsBadgeEventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRedeemEventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRedeemEventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubscribeEventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubscribeEventReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitchPubSub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitchPubSub_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitchPubSub_Connect, "Connect" }, // 11090729
		{ &Z_Construct_UFunction_UTwitchPubSub_Disconnect, "Disconnect" }, // 2427437209
		{ &Z_Construct_UFunction_UTwitchPubSub_SendMessage, "SendMessage" }, // 3143066106
		{ &Z_Construct_UFunction_UTwitchPubSub_SetInfo, "SetInfo" }, // 4103804414
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TwitchPubSub.h" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_channelId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_channelId_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_channelId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authToken = { "authToken", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, authToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authToken_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authType = { "authType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, authType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authType_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authType_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics_Inner = { "listenTopics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics = { "listenTopics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, listenTopics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsEventReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsEventReceived = { "OnBitsEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, OnBitsEventReceived), Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsEventReceived_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsEventReceived_MetaData) }; // 3365434709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsBadgeEventReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsBadgeEventReceived = { "OnBitsBadgeEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, OnBitsBadgeEventReceived), Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsBadgeEventReceived_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsBadgeEventReceived_MetaData) }; // 3361261502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnRedeemEventReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnRedeemEventReceived = { "OnRedeemEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, OnRedeemEventReceived), Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnRedeemEventReceived_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnRedeemEventReceived_MetaData) }; // 3755060904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnSubscribeEventReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchPubSub.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnSubscribeEventReceived = { "OnSubscribeEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchPubSub, OnSubscribeEventReceived), Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnSubscribeEventReceived_MetaData), Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnSubscribeEventReceived_MetaData) }; // 1535533004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwitchPubSub_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_authType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_listenTopics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsEventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnBitsBadgeEventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnRedeemEventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchPubSub_Statics::NewProp_OnSubscribeEventReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitchPubSub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitchPubSub>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitchPubSub_Statics::ClassParams = {
		&UTwitchPubSub::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwitchPubSub_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwitchPubSub_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchPubSub_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTwitchPubSub()
	{
		if (!Z_Registration_Info_UClass_UTwitchPubSub.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitchPubSub.OuterSingleton, Z_Construct_UClass_UTwitchPubSub_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitchPubSub.OuterSingleton;
	}
	template<> TWITCHINTERACTION_API UClass* StaticClass<UTwitchPubSub>()
	{
		return UTwitchPubSub::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitchPubSub);
	UTwitchPubSub::~UTwitchPubSub() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ScriptStructInfo[] = {
		{ FTwitchEventSubscribeDataMessageEmotes::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessageEmotes_Statics::NewStructOps, TEXT("TwitchEventSubscribeDataMessageEmotes"), &Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessageEmotes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubscribeDataMessageEmotes), 2440080095U) },
		{ FTwitchEventSubscribeDataMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubscribeDataMessage_Statics::NewStructOps, TEXT("TwitchEventSubscribeDataMessage"), &Z_Registration_Info_UScriptStruct_TwitchEventSubscribeDataMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubscribeDataMessage), 166800262U) },
		{ FTwitchEventSubscribeMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubscribeMessage_Statics::NewStructOps, TEXT("TwitchEventSubscribeMessage"), &Z_Registration_Info_UScriptStruct_TwitchEventSubscribeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubscribeMessage), 829950223U) },
		{ FTwitchEventSubscribeData::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubscribeData_Statics::NewStructOps, TEXT("TwitchEventSubscribeData"), &Z_Registration_Info_UScriptStruct_TwitchEventSubscribeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubscribeData), 2603113083U) },
		{ FTwitchEventSubscribe::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubscribe_Statics::NewStructOps, TEXT("TwitchEventSubscribe"), &Z_Registration_Info_UScriptStruct_TwitchEventSubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubscribe), 124524133U) },
		{ FTwitchEventRedeemRedemptionUser::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemRedemptionUser_Statics::NewStructOps, TEXT("TwitchEventRedeemRedemptionUser"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemptionUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemRedemptionUser), 366352224U) },
		{ FTwitchEventRedeemRedemption::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemRedemption_Statics::NewStructOps, TEXT("TwitchEventRedeemRedemption"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemRedemption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemRedemption), 1748032106U) },
		{ FTwitchEventRedeemRewardMaxPreStream::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemRewardMaxPreStream_Statics::NewStructOps, TEXT("TwitchEventRedeemRewardMaxPreStream"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardMaxPreStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemRewardMaxPreStream), 2698941838U) },
		{ FTwitchEventRedeemRewardImages::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemRewardImages_Statics::NewStructOps, TEXT("TwitchEventRedeemRewardImages"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemRewardImages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemRewardImages), 2764153055U) },
		{ FTwitchEventRedeemReward::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemReward_Statics::NewStructOps, TEXT("TwitchEventRedeemReward"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemReward), 1437965957U) },
		{ FTwitchEventRedeemData::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemData_Statics::NewStructOps, TEXT("TwitchEventRedeemData"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemData), 3954508195U) },
		{ FTwitchEventRedeemMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemMessage_Statics::NewStructOps, TEXT("TwitchEventRedeemMessage"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemMessage), 2295990759U) },
		{ FTwitchEventRedeemRoot::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemRoot_Statics::NewStructOps, TEXT("TwitchEventRedeemRoot"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemRoot), 107986305U) },
		{ FTwitchEventRedeemDataRoot::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventRedeemDataRoot_Statics::NewStructOps, TEXT("TwitchEventRedeemDataRoot"), &Z_Registration_Info_UScriptStruct_TwitchEventRedeemDataRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventRedeemDataRoot), 2902189235U) },
		{ FTwitchEventBitsBadge::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsBadge_Statics::NewStructOps, TEXT("TwitchEventBitsBadge"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsBadge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsBadge), 1041809873U) },
		{ FTwitchEventBitsBadgeMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsBadgeMessage_Statics::NewStructOps, TEXT("TwitchEventBitsBadgeMessage"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsBadgeMessage), 3864608991U) },
		{ FTwitchEventBitsBadgeRoot::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsBadgeRoot_Statics::NewStructOps, TEXT("TwitchEventBitsBadgeRoot"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsBadgeRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsBadgeRoot), 3065127097U) },
		{ FTwitchEventBadgeEntitlemmentData::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBadgeEntitlemmentData_Statics::NewStructOps, TEXT("TwitchEventBadgeEntitlemmentData"), &Z_Registration_Info_UScriptStruct_TwitchEventBadgeEntitlemmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBadgeEntitlemmentData), 4023779348U) },
		{ FTwitchEventBitsData::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsData_Statics::NewStructOps, TEXT("TwitchEventBitsData"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsData), 887467177U) },
		{ FTwitchEventBits::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBits_Statics::NewStructOps, TEXT("TwitchEventBits"), &Z_Registration_Info_UScriptStruct_TwitchEventBits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBits), 3849791675U) },
		{ FTwitchEventBitsMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsMessage_Statics::NewStructOps, TEXT("TwitchEventBitsMessage"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsMessage), 2307180068U) },
		{ FTwitchEventBitsRoot::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventBitsRoot_Statics::NewStructOps, TEXT("TwitchEventBitsRoot"), &Z_Registration_Info_UScriptStruct_TwitchEventBitsRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventBitsRoot), 3946071399U) },
		{ FTwitchEventSubRequestData::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubRequestData_Statics::NewStructOps, TEXT("TwitchEventSubRequestData"), &Z_Registration_Info_UScriptStruct_TwitchEventSubRequestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubRequestData), 2277495591U) },
		{ FTwitchEventSubRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchEventSubRequest_Statics::NewStructOps, TEXT("TwitchEventSubRequest"), &Z_Registration_Info_UScriptStruct_TwitchEventSubRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchEventSubRequest), 64131194U) },
		{ FTwitchMessageData::StaticStruct, Z_Construct_UScriptStruct_FTwitchMessageData_Statics::NewStructOps, TEXT("TwitchMessageData"), &Z_Registration_Info_UScriptStruct_TwitchMessageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchMessageData), 3063606616U) },
		{ FTwitchMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchMessage_Statics::NewStructOps, TEXT("TwitchMessage"), &Z_Registration_Info_UScriptStruct_TwitchMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchMessage), 1140076450U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitchPubSub, UTwitchPubSub::StaticClass, TEXT("UTwitchPubSub"), &Z_Registration_Info_UClass_UTwitchPubSub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitchPubSub), 2754185395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_2058286911(TEXT("/Script/TwitchInteraction"),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchPubSub_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
