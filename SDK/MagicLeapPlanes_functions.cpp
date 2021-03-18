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

void FMagicLeapPolygon::AfterRead()
{
}

void FMagicLeapPolygon::BeforeDelete()
{
}

void FMagicLeapPlaneResult::AfterRead()
{
}

void FMagicLeapPlaneResult::BeforeDelete()
{
}

void FMagicLeapPlanesQuery::AfterRead()
{
	READ_PTR_FULL(SearchVolume, UBoxComponent);
}

void FMagicLeapPlanesQuery::BeforeDelete()
{
	DELE_PTR_FULL(SearchVolume);
}

void FMagicLeapPlaneBoundary::AfterRead()
{
}

void FMagicLeapPlaneBoundary::BeforeDelete()
{
}

void FMagicLeapPlaneBoundaries::AfterRead()
{
}

void FMagicLeapPlaneBoundaries::BeforeDelete()
{
}

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync"));

	UMagicLeapPlanesComponent_RequestPlanesAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapPlanesComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(SearchVolume, UBoxComponent);
}

void UMagicLeapPlanesComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(SearchVolume);
}

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// ()
// Parameters:
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutReorderedFlags              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags"));

	UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params params;
	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
// ()
// Parameters:
// struct FGuid                   Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::RemovePersistentQuery(const struct FGuid& Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery"));

	UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// ()
// Parameters:
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutFlags                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery"));

	UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params params;
	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// ()
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync"));

	UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params params;
	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
// ()
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGuid                   Handle                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync"));

	UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params params;
	params.Query = Query;
	params.Handle = Handle;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid"));

	UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// ()
// Parameters:
// class AActor*                  ContentActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapPlaneResult   PlaneResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale"));

	UMagicLeapPlanesFunctionLibrary_GetContentScale_Params params;
	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker"));

	UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker"));

	UMagicLeapPlanesFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
// ()
// Parameters:
// MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UMagicLeapPlanesFunctionLibrary::AddPersistentQuery(MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery"));

	UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params params;
	params.PersistentQueryType = PersistentQueryType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapPlanesFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapPlanesFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
