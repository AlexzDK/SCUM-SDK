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

void FMagicLeapIdentityAttribute::AfterRead()
{
}

void FMagicLeapIdentityAttribute::BeforeDelete()
{
}

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// ()
// Parameters:
// MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute> AttributeValue                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature"));

	UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// ()
// Parameters:
// TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync"));

	UMagicLeapIdentity_RequestAttributeValueAsync_Params params;
	params.RequestedAttributeList = RequestedAttributeList;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// ()
// Parameters:
// TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue"));

	UMagicLeapIdentity_RequestAttributeValue_Params params;
	params.RequestedAttributeList = RequestedAttributeList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = params.RequestedAttributeValues;


	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// ()
// Parameters:
// MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature"));

	UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// ()
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync"));

	UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// ()
// Parameters:
// TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes"));

	UMagicLeapIdentity_GetAllAvailableAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = params.AvailableAttributes;


	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// ()
// Parameters:
// MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature"));

	UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AvailableAttributes = AvailableAttributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMagicLeapIdentity::AfterRead()
{
	UObject::AfterRead();

}

void UMagicLeapIdentity::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
