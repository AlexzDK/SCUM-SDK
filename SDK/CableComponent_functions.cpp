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

void ACableActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CableComponent, UCableComponent);
}

void ACableActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CableComponent);
}

// Function CableComponent.CableComponent.SetAttachEndToComponent
// ()
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.SetAttachEndToComponent"));

	UCableComponent_SetAttachEndToComponent_Params params;
	params.Component = Component;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.SetAttachEndTo
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCableComponent::SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.SetAttachEndTo"));

	UCableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.GetCableParticleLocations
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetCableParticleLocations"));

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;

}


// Function CableComponent.CableComponent.GetAttachedComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetAttachedComponent"));

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CableComponent.CableComponent.GetAttachedActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UCableComponent::GetAttachedActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetAttachedActor"));

	UCableComponent_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCableComponent::AfterRead()
{
	UMeshComponent::AfterRead();

}

void UCableComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
