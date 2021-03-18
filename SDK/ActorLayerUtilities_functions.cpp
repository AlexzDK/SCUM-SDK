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

void FActorLayer::AfterRead()
{
}

void FActorLayer::BeforeDelete()
{
}

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer"));

	ULayersBlueprintLibrary_RemoveActorFromLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             ActorLayer                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors"));

	ULayersBlueprintLibrary_GetActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorLayer = ActorLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer"));

	ULayersBlueprintLibrary_AddActorToLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULayersBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULayersBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
