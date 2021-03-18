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

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// ()
// Parameters:
// struct FString                 permission                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAndroidPermissionFunctionLibrary::CheckPermission(const struct FString& permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission"));

	UAndroidPermissionFunctionLibrary_CheckPermission_Params params;
	params.permission = permission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// ()
// Parameters:
// TArray<struct FString>         Permissions                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UAndroidPermissionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(TArray<struct FString> Permissions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions"));

	UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params;
	params.Permissions = Permissions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAndroidPermissionFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAndroidPermissionFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAndroidPermissionCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UAndroidPermissionCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
