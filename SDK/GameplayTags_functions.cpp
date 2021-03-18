// Name: S, Version: N

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FGameplayTag::AfterRead()
{
}

void FGameplayTag::BeforeDelete()
{
}

void FGameplayTagContainer::AfterRead()
{
}

void FGameplayTagContainer::BeforeDelete()
{
}

void FGameplayTagSource::AfterRead()
{
	READ_PTR_FULL(SourceTagList, UGameplayTagsList);
	READ_PTR_FULL(SourceRestrictedTagList, URestrictedGameplayTagsList);
}

void FGameplayTagSource::BeforeDelete()
{
	DELE_PTR_FULL(SourceTagList);
	DELE_PTR_FULL(SourceRestrictedTagList);
}

void FGameplayTagTableRow::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FGameplayTagTableRow::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void FRestrictedGameplayTagTableRow::AfterRead()
{
	FGameplayTagTableRow::AfterRead();

}

void FRestrictedGameplayTagTableRow::BeforeDelete()
{
	FGameplayTagTableRow::BeforeDelete();

}

void FRestrictedConfigInfo::AfterRead()
{
}

void FRestrictedConfigInfo::BeforeDelete()
{
}

void FGameplayTagCategoryRemap::AfterRead()
{
}

void FGameplayTagCategoryRemap::BeforeDelete()
{
}

void FGameplayTagRedirect::AfterRead()
{
}

void FGameplayTagRedirect::BeforeDelete()
{
}

void FGameplayTagQuery::AfterRead()
{
}

void FGameplayTagQuery::BeforeDelete()
{
}

void FGameplayTagCreationWidgetHelper::AfterRead()
{
}

void FGameplayTagCreationWidgetHelper::BeforeDelete()
{
}

void FGameplayTagReferenceHelper::AfterRead()
{
}

void FGameplayTagReferenceHelper::BeforeDelete()
{
}

void FGameplayTagNode::AfterRead()
{
}

void FGameplayTagNode::BeforeDelete()
{
}

void UEditableGameplayTagQueryExpression::AfterRead()
{
	UObject::AfterRead();

}

void UEditableGameplayTagQueryExpression::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_NoTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_NoTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AnyExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AnyExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AllExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AllExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_NoExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_NoExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UGameplayTagsManager::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTagsManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void URestrictedGameplayTagsList::AfterRead()
{
	UObject::AfterRead();

}

void URestrictedGameplayTagsList::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayTagsList::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTagsList::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayTagsSettings::AfterRead()
{
	UGameplayTagsList::AfterRead();

}

void UGameplayTagsSettings::BeforeDelete()
{
	UGameplayTagsList::BeforeDelete();

}

void UGameplayTagsDeveloperSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UGameplayTagsDeveloperSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag"));

	UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// ()
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 B                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag"));

	UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   A                              (Parm, NativeAccessSpecifierPublic)
// struct FString                 B                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// ()
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// ()
// Parameters:
// struct FGameplayTag            TagOne                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            TagTwo                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag"));

	UBlueprintGameplayTagLibrary_MatchesTag_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// ()
// Parameters:
// struct FGameplayTag            TagOne                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags"));

	UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params;
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   Value                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// ()
// Parameters:
// struct FGameplayTag            Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// ()
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// ()
// Parameters:
// struct FGameplayTag            SingleTag                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params;
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// ()
// Parameters:
// TArray<struct FGameplayTag>    GameplayTags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// ()
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty"));

	UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// ()
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid"));

	UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag"));

	UBlueprintGameplayTagLibrary_HasTag_Params params;
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags"));

	UBlueprintGameplayTagLibrary_HasAnyTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags"));

	UBlueprintGameplayTagLibrary_HasAllTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// ()
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags"));

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// ()
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName"));

	UBlueprintGameplayTagLibrary_GetTagName_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// ()
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery"));

	UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// ()
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// ()
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag"));

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayTag>    GameplayTags                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// ()
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   InTagContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag"));

	UBlueprintGameplayTagLibrary_AddGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


void UBlueprintGameplayTagLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBlueprintGameplayTagLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// ()
// Parameters:
// struct FGameplayTag            TagToCheck                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


void UGameplayTagAssetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameplayTagAssetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UEditableGameplayTagQuery::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RootExpression, UEditableGameplayTagQueryExpression);
}

void UEditableGameplayTagQuery::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RootExpression);
}

void UEditableGameplayTagQueryExpression_AnyTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AnyTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AllTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AllTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
