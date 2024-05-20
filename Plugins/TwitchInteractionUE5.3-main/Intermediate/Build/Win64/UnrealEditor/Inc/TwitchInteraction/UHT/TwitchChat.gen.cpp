// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchChat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchChat() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchChat();
	TWITCHINTERACTION_API UClass* Z_Construct_UClass_UTwitchChat_NoRegister();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature();
	TWITCHINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchIrcMessage();
	UPackage* Z_Construct_UPackage__Script_TwitchInteraction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchIrcMessage;
class UScriptStruct* FTwitchIrcMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchIrcMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchIrcMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchIrcMessage, (UObject*)Z_Construct_UPackage__Script_TwitchInteraction(), TEXT("TwitchIrcMessage"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchIrcMessage.OuterSingleton;
}
template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<FTwitchIrcMessage>()
{
	return FTwitchIrcMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadgeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BadgeInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Badges_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Badges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emotes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Emotes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mod_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subscriber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Subscriber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageTimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Turbo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Turbo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIRCLogin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserIRCLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bits_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Bits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchIrcMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_BadgeInfo_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_BadgeInfo = { "BadgeInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, BadgeInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_BadgeInfo_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_BadgeInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Badges_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Badges = { "Badges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Badges), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Badges_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Badges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Emotes_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Emotes = { "Emotes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Emotes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Emotes_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Emotes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Flags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Mod_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Mod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Mod_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Mod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_RoomId_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, RoomId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_RoomId_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_RoomId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Subscriber_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Subscriber = { "Subscriber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Subscriber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Subscriber_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Subscriber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageTimeStamp_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageTimeStamp = { "MessageTimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, MessageTimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageTimeStamp_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageTimeStamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Turbo_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Turbo = { "Turbo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Turbo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Turbo_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Turbo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserId_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserType_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserType = { "UserType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, UserType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserType_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserIRCLogin_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserIRCLogin = { "UserIRCLogin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, UserIRCLogin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserIRCLogin_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserIRCLogin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageType_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, MessageType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageType_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_ChannelName_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_ChannelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Bits_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Bits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Bits_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Bits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "TwitchInteraction" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwitchIrcMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_BadgeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Badges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Emotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Mod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Subscriber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Turbo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_UserIRCLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Bits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
		nullptr,
		&NewStructOps,
		"TwitchIrcMessage",
		Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::PropPointers),
		sizeof(FTwitchIrcMessage),
		alignof(FTwitchIrcMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchIrcMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchIrcMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchIrcMessage.InnerSingleton, Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchIrcMessage.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventOnCommandReceived_Parms
		{
			FString commandName;
			TArray<FString> commandOptions;
			FString senderUsername;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_commandName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_commandOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_commandOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_senderUsername_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_senderUsername;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandName = { "commandName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventOnCommandReceived_Parms, commandName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandName_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions_Inner = { "commandOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions = { "commandOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventOnCommandReceived_Parms, commandOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_senderUsername_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_senderUsername = { "senderUsername", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventOnCommandReceived_Parms, senderUsername), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_senderUsername_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_senderUsername_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_commandOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::NewProp_senderUsername,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "OnCommandReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventOnCommandReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventOnCommandReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCommandReceived_DelegateWrapper(const FScriptDelegate& OnCommandReceived, const FString& commandName, TArray<FString> const& commandOptions, const FString& senderUsername)
{
	struct _Script_TwitchInteraction_eventOnCommandReceived_Parms
	{
		FString commandName;
		TArray<FString> commandOptions;
		FString senderUsername;
	};
	_Script_TwitchInteraction_eventOnCommandReceived_Parms Parms;
	Parms.commandName=commandName;
	Parms.commandOptions=commandOptions;
	Parms.senderUsername=senderUsername;
	OnCommandReceived.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics
	{
		struct _Script_TwitchInteraction_eventMessageReceived_Parms
		{
			FTwitchIrcMessage message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchInteraction_eventMessageReceived_Parms, message), Z_Construct_UScriptStruct_FTwitchIrcMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::NewProp_message_MetaData), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::NewProp_message_MetaData) }; // 4007957979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchInteraction, nullptr, "MessageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::_Script_TwitchInteraction_eventMessageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& MessageReceived, FTwitchIrcMessage const& message)
{
	struct _Script_TwitchInteraction_eventMessageReceived_Parms
	{
		FTwitchIrcMessage message;
	};
	_Script_TwitchInteraction_eventMessageReceived_Parms Parms;
	Parms.message=message;
	MessageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTwitchChat::execUnregisterCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__commandName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterCommand(Z_Param__commandName,Z_Param_Out__result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execRegisterCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__commandName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__callbackFunction);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterCommand(Z_Param__commandName,FOnCommandReceived(Z_Param_Out__callbackFunction),Z_Param_Out__result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execSetupCommandCharacters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__commandChar);
		P_GET_PROPERTY(FStrProperty,Z_Param__optionsChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCommandCharacters(Z_Param__commandChar,Z_Param__optionsChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execAuthenticateTwitchChat)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AuthenticateTwitchChat(Z_Param_Out__result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execConnect)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__message);
		P_GET_UBOOL(Z_Param__sendTo);
		P_GET_PROPERTY(FStrProperty,Z_Param__channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param__message,Z_Param__sendTo,Z_Param__channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitchChat::execSetUserInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__oauth);
		P_GET_PROPERTY(FStrProperty,Z_Param__authType);
		P_GET_PROPERTY(FStrProperty,Z_Param__username);
		P_GET_PROPERTY(FStrProperty,Z_Param__channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserInfo(Z_Param__oauth,Z_Param__authType,Z_Param__username,Z_Param__channel);
		P_NATIVE_END;
	}
	void UTwitchChat::StaticRegisterNativesUTwitchChat()
	{
		UClass* Class = UTwitchChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateTwitchChat", &UTwitchChat::execAuthenticateTwitchChat },
			{ "Connect", &UTwitchChat::execConnect },
			{ "RegisterCommand", &UTwitchChat::execRegisterCommand },
			{ "SendMessage", &UTwitchChat::execSendMessage },
			{ "SetupCommandCharacters", &UTwitchChat::execSetupCommandCharacters },
			{ "SetUserInfo", &UTwitchChat::execSetUserInfo },
			{ "UnregisterCommand", &UTwitchChat::execUnregisterCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics
	{
		struct TwitchChat_eventAuthenticateTwitchChat_Parms
		{
			FString _result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp__result = { "_result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventAuthenticateTwitchChat_Parms, _result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchChat_eventAuthenticateTwitchChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventAuthenticateTwitchChat_Parms), &Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp__result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "AuthenticateTwitchChat", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::TwitchChat_eventAuthenticateTwitchChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::TwitchChat_eventAuthenticateTwitchChat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_Connect_Statics
	{
		struct TwitchChat_eventConnect_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventConnect_Parms, result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchChat_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventConnect_Parms), &Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_Connect_Statics::TwitchChat_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_Connect_Statics::TwitchChat_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics
	{
		struct TwitchChat_eventRegisterCommand_Parms
		{
			FString _commandName;
			FScriptDelegate _callbackFunction;
			FString _result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__commandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__commandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__callbackFunction_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp__callbackFunction;
		static const UECodeGen_Private::FStrPropertyParams NewProp__result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__commandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__commandName = { "_commandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventRegisterCommand_Parms, _commandName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__commandName_MetaData), Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__commandName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__callbackFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__callbackFunction = { "_callbackFunction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventRegisterCommand_Parms, _callbackFunction), Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__callbackFunction_MetaData), Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__callbackFunction_MetaData) }; // 320238891
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__result = { "_result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventRegisterCommand_Parms, _result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchChat_eventRegisterCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventRegisterCommand_Parms), &Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__commandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__callbackFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp__result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "RegisterCommand", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::TwitchChat_eventRegisterCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::TwitchChat_eventRegisterCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_RegisterCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_RegisterCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_SendMessage_Statics
	{
		struct TwitchChat_eventSendMessage_Parms
		{
			FString _message;
			bool _sendTo;
			FString _channel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__sendTo_MetaData[];
#endif
		static void NewProp__sendTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__sendTo;
		static const UECodeGen_Private::FStrPropertyParams NewProp__channel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__message = { "_message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSendMessage_Parms, _message), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo_MetaData[] = {
		{ "DisplayName", "Send Message" },
	};
#endif
	void Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo_SetBit(void* Obj)
	{
		((TwitchChat_eventSendMessage_Parms*)Obj)->_sendTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo = { "_sendTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventSendMessage_Parms), &Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo_MetaData), Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__channel = { "_channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSendMessage_Parms, _channel), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchChat_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventSendMessage_Parms), &Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__sendTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp__channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Messages" },
		{ "CPP_Default__channel", "" },
		{ "CPP_Default__sendTo", "true" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::TwitchChat_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::TwitchChat_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics
	{
		struct TwitchChat_eventSetupCommandCharacters_Parms
		{
			FString _commandChar;
			FString _optionsChar;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__commandChar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__commandChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__optionsChar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__optionsChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__commandChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__commandChar = { "_commandChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetupCommandCharacters_Parms, _commandChar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__commandChar_MetaData), Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__commandChar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__optionsChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__optionsChar = { "_optionsChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetupCommandCharacters_Parms, _optionsChar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__optionsChar_MetaData), Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__optionsChar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__commandChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::NewProp__optionsChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "SetupCommandCharacters", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::TwitchChat_eventSetupCommandCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::TwitchChat_eventSetupCommandCharacters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics
	{
		struct TwitchChat_eventSetUserInfo_Parms
		{
			FString _oauth;
			FString _authType;
			FString _username;
			FString _channel;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp__username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__channel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__oauth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__oauth = { "_oauth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetUserInfo_Parms, _oauth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__oauth_MetaData), Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__oauth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__authType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__authType = { "_authType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetUserInfo_Parms, _authType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__authType_MetaData), Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__authType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__username = { "_username", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetUserInfo_Parms, _username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__username_MetaData), Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__channel = { "_channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventSetUserInfo_Parms, _channel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__channel_MetaData), Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__channel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__oauth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__authType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::NewProp__channel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "SetUserInfo", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::TwitchChat_eventSetUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::TwitchChat_eventSetUserInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_SetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_SetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics
	{
		struct TwitchChat_eventUnregisterCommand_Parms
		{
			FString _commandName;
			FString _result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__commandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__commandName;
		static const UECodeGen_Private::FStrPropertyParams NewProp__result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__commandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__commandName = { "_commandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventUnregisterCommand_Parms, _commandName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__commandName_MetaData), Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__commandName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__result = { "_result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwitchChat_eventUnregisterCommand_Parms, _result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitchChat_eventUnregisterCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TwitchChat_eventUnregisterCommand_Parms), &Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__commandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp__result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchChat, nullptr, "UnregisterCommand", nullptr, nullptr, Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::TwitchChat_eventUnregisterCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::TwitchChat_eventUnregisterCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTwitchChat_UnregisterCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchChat_UnregisterCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitchChat);
	UClass* Z_Construct_UClass_UTwitchChat_NoRegister()
	{
		return UTwitchChat::StaticClass();
	}
	struct Z_Construct_UClass_UTwitchChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBitsMessageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBitsMessageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNoticeReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNoticeReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomstateReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomstateReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserstateReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserstateReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserNoticeReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserNoticeReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReconnectReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReconnectReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHostTargetReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHostTargetReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClearMsgReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClearMsgReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClearChatReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClearChatReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPartReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OAuthToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OAuthToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OAuthTokenType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OAuthTokenType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionsCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitchChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchInteraction,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitchChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitchChat_AuthenticateTwitchChat, "AuthenticateTwitchChat" }, // 4019415304
		{ &Z_Construct_UFunction_UTwitchChat_Connect, "Connect" }, // 3068034775
		{ &Z_Construct_UFunction_UTwitchChat_RegisterCommand, "RegisterCommand" }, // 4169298833
		{ &Z_Construct_UFunction_UTwitchChat_SendMessage, "SendMessage" }, // 1875578775
		{ &Z_Construct_UFunction_UTwitchChat_SetupCommandCharacters, "SetupCommandCharacters" }, // 1635567730
		{ &Z_Construct_UFunction_UTwitchChat_SetUserInfo, "SetUserInfo" }, // 4198508554
		{ &Z_Construct_UFunction_UTwitchChat_UnregisterCommand, "UnregisterCommand" }, // 2470314513
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TwitchChat.h" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnMessageReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnMessageReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnMessageReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnBitsMessageReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnBitsMessageReceived = { "OnBitsMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnBitsMessageReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnBitsMessageReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnBitsMessageReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnNoticeReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnNoticeReceived = { "OnNoticeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnNoticeReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnNoticeReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnNoticeReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnRoomstateReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnRoomstateReceived = { "OnRoomstateReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnRoomstateReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnRoomstateReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnRoomstateReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserstateReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserstateReceived = { "OnUserstateReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnUserstateReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserstateReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserstateReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserNoticeReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserNoticeReceived = { "OnUserNoticeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnUserNoticeReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserNoticeReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserNoticeReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnReconnectReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnReconnectReceived = { "OnReconnectReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnReconnectReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnReconnectReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnReconnectReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnHostTargetReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnHostTargetReceived = { "OnHostTargetReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnHostTargetReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnHostTargetReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnHostTargetReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearMsgReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearMsgReceived = { "OnClearMsgReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnClearMsgReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearMsgReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearMsgReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearChatReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearChatReceived = { "OnClearChatReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnClearChatReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearChatReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearChatReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnJoinReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnJoinReceived = { "OnJoinReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnJoinReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnJoinReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnJoinReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnPartReceived_MetaData[] = {
		{ "Category", "Message Events" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnPartReceived = { "OnPartReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OnPartReceived), Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnPartReceived_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnPartReceived_MetaData) }; // 4209655948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthToken_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Authentication token. Need to get it from official Twitch API\n" },
#endif
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authentication token. Need to get it from official Twitch API" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthToken = { "OAuthToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OAuthToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthToken_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthTokenType_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthTokenType = { "OAuthTokenType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OAuthTokenType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthTokenType_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthTokenType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Username. Must be in lowercaps\n" },
#endif
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Username. Must be in lowercaps" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, Username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_Username_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_Username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Channel to join upon successful connection\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Channel to join upon successful connection" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, Channel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_Channel_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_Channel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_CommandCharacter_MetaData[] = {
		{ "Category", "Commands Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_CommandCharacter = { "CommandCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, CommandCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_CommandCharacter_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_CommandCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchChat_Statics::NewProp_OptionsCharacter_MetaData[] = {
		{ "Category", "Commands Setup" },
		{ "ModuleRelativePath", "Public/TwitchChat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchChat_Statics::NewProp_OptionsCharacter = { "OptionsCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwitchChat, OptionsCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::NewProp_OptionsCharacter_MetaData), Z_Construct_UClass_UTwitchChat_Statics::NewProp_OptionsCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwitchChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnMessageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnBitsMessageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnNoticeReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnRoomstateReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserstateReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnUserNoticeReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnReconnectReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnHostTargetReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearMsgReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnClearChatReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnJoinReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OnPartReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OAuthTokenType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_CommandCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchChat_Statics::NewProp_OptionsCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitchChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitchChat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitchChat_Statics::ClassParams = {
		&UTwitchChat::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwitchChat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwitchChat_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchChat_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTwitchChat()
	{
		if (!Z_Registration_Info_UClass_UTwitchChat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitchChat.OuterSingleton, Z_Construct_UClass_UTwitchChat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitchChat.OuterSingleton;
	}
	template<> TWITCHINTERACTION_API UClass* StaticClass<UTwitchChat>()
	{
		return UTwitchChat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitchChat);
	UTwitchChat::~UTwitchChat() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ScriptStructInfo[] = {
		{ FTwitchIrcMessage::StaticStruct, Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics::NewStructOps, TEXT("TwitchIrcMessage"), &Z_Registration_Info_UScriptStruct_TwitchIrcMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchIrcMessage), 4007957979U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitchChat, UTwitchChat::StaticClass, TEXT("UTwitchChat"), &Z_Registration_Info_UClass_UTwitchChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitchChat), 2477298683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_269527297(TEXT("/Script/TwitchInteraction"),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
