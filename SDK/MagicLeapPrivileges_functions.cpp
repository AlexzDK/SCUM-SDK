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

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// ()
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync"));

	UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Params params;
	params.Privilege = Privilege;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// ()
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege"));

	UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Params params;
	params.Privilege = Privilege;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// ()
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege"));

	UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Params params;
	params.Privilege = Privilege;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapPrivilegesFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapPrivilegesFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
