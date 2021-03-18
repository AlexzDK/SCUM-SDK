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

void FMagicLeapHandMeshBlock::AfterRead()
{
}

void FMagicLeapHandMeshBlock::BeforeDelete()
{
}

void FMagicLeapHandMesh::AfterRead()
{
}

void FMagicLeapHandMesh::BeforeDelete()
{
}

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
// ()
// Parameters:
// bool                           bInUseWeightedNormals          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals"));

	UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params params;
	params.bInUseWeightedNormals = bInUseWeightedNormals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh"));

	UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh"));

	UMagicLeapHandMeshingComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapHandMeshingComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMagicLeapHandMeshingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh"));

	UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::DestroyClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient"));

	UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::CreateClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient"));

	UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh"));

	UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapHandMeshingFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapHandMeshingFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
