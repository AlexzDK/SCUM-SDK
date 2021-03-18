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

void FElementID::AfterRead()
{
}

void FElementID::BeforeDelete()
{
}

void FEdgeID::AfterRead()
{
	FElementID::AfterRead();

}

void FEdgeID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FTriangleID::AfterRead()
{
	FElementID::AfterRead();

}

void FTriangleID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FPolygonGroupID::AfterRead()
{
	FElementID::AfterRead();

}

void FPolygonGroupID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FPolygonID::AfterRead()
{
	FElementID::AfterRead();

}

void FPolygonID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FVertexID::AfterRead()
{
	FElementID::AfterRead();

}

void FVertexID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FVertexInstanceID::AfterRead()
{
	FElementID::AfterRead();

}

void FVertexInstanceID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void UMeshDescription::AfterRead()
{
	UObject::AfterRead();

}

void UMeshDescription::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetVertexPosition"));

	UMeshDescriptionBase_SetVertexPosition_Params params;
	params.VertexID = VertexID;
	params.position = position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PerimeterIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance"));

	UMeshDescriptionBase_SetPolygonVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterIndex = PerimeterIndex;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup"));

	UMeshDescriptionBase_SetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing"));

	UMeshDescriptionBase_ReversePolygonFacing_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// ()
// Parameters:
// int                            NumberOfNewVertices            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewVertices(int NumberOfNewVertices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices"));

	UMeshDescriptionBase_ReserveNewVertices_Params params;
	params.NumberOfNewVertices = NumberOfNewVertices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// ()
// Parameters:
// int                            NumberOfNewVertexInstances     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewVertexInstances(int NumberOfNewVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances"));

	UMeshDescriptionBase_ReserveNewVertexInstances_Params params;
	params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// ()
// Parameters:
// int                            NumberOfNewTriangles           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewTriangles(int NumberOfNewTriangles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles"));

	UMeshDescriptionBase_ReserveNewTriangles_Params params;
	params.NumberOfNewTriangles = NumberOfNewTriangles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// ()
// Parameters:
// int                            NumberOfNewPolygons            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewPolygons(int NumberOfNewPolygons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons"));

	UMeshDescriptionBase_ReserveNewPolygons_Params params;
	params.NumberOfNewPolygons = NumberOfNewPolygons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// ()
// Parameters:
// int                            NumberOfNewPolygonGroups       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewPolygonGroups(int NumberOfNewPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups"));

	UMeshDescriptionBase_ReserveNewPolygonGroups_Params params;
	params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// ()
// Parameters:
// int                            NumberOfNewEdges               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ReserveNewEdges(int NumberOfNewEdges)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges"));

	UMeshDescriptionBase_ReserveNewEdges_Params params;
	params.NumberOfNewEdges = NumberOfNewEdges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexValid"));

	UMeshDescriptionBase_IsVertexValid_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned"));

	UMeshDescriptionBase_IsVertexOrphaned_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid"));

	UMeshDescriptionBase_IsVertexInstanceValid_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTriangleValid"));

	UMeshDescriptionBase_IsTriangleValid_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon"));

	UMeshDescriptionBase_IsTrianglePartOfNgon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonValid"));

	UMeshDescriptionBase_IsPolygonValid_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid"));

	UMeshDescriptionBase_IsPolygonGroupValid_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEmpty"));

	UMeshDescriptionBase_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeValid"));

	UMeshDescriptionBase_IsEdgeValid_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon"));

	UMeshDescriptionBase_IsEdgeInternalToPolygon_Params params;
	params.EdgeID = EdgeID;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal"));

	UMeshDescriptionBase_IsEdgeInternal_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances"));

	UMeshDescriptionBase_GetVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPosition"));

	UMeshDescriptionBase_GetVertexPosition_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// ()
// Parameters:
// struct FVertexID               VertexID0                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge"));

	UMeshDescriptionBase_GetVertexPairEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex"));

	UMeshDescriptionBase_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID0              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       VertexInstanceID1              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge"));

	UMeshDescriptionBase_GetVertexInstancePairEdge_Params params;
	params.VertexInstanceID0 = VertexInstanceID0;
	params.VertexInstanceID1 = VertexInstanceID1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex"));

	UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params params;
	params.TriangleID = TriangleID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex"));

	UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles"));

	UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons"));

	UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles"));

	UMeshDescriptionBase_GetVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons"));

	UMeshDescriptionBase_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges"));

	UMeshDescriptionBase_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices"));

	UMeshDescriptionBase_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices"));

	UMeshDescriptionBase_GetTriangleVertices_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances"));

	UMeshDescriptionBase_GetTriangleVertexInstances_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance"));

	UMeshDescriptionBase_GetTriangleVertexInstance_Params params;
	params.TriangleID = TriangleID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup"));

	UMeshDescriptionBase_GetTrianglePolygonGroup_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon"));

	UMeshDescriptionBase_GetTrianglePolygon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges"));

	UMeshDescriptionBase_GetTriangleEdges_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutTriangleIDs                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles"));

	UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices"));

	UMeshDescriptionBase_GetPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances"));

	UMeshDescriptionBase_GetPolygonVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutTriangleIDs                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles"));

	UMeshDescriptionBase_GetPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup"));

	UMeshDescriptionBase_GetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges"));

	UMeshDescriptionBase_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges"));

	UMeshDescriptionBase_GetPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygonIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons"));

	UMeshDescriptionBase_GetPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygonIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons"));

	UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances"));

	UMeshDescriptionBase_GetNumVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles"));

	UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons"));

	UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles"));

	UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons"));

	UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges"));

	UMeshDescriptionBase_GetNumVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices"));

	UMeshDescriptionBase_GetNumPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles"));

	UMeshDescriptionBase_GetNumPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges"));

	UMeshDescriptionBase_GetNumPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons"));

	UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles"));

	UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons"));

	UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices"));

	UMeshDescriptionBase_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VertexNumber                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int VertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex"));

	UMeshDescriptionBase_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.VertexNumber = VertexNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles"));

	UMeshDescriptionBase_GetEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons"));

	UMeshDescriptionBase_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function MeshDescription.MeshDescriptionBase.Empty
// ()
void UMeshDescriptionBase::Empty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.Empty"));

	UMeshDescriptionBase_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OrphanedVertices               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance"));

	UMeshDescriptionBase_DeleteVertexInstance_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertex"));

	UMeshDescriptionBase_DeleteVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OrphanedEdges                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteTriangle"));

	UMeshDescriptionBase_DeleteTriangle_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup"));

	UMeshDescriptionBase_DeletePolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OrphanedEdges                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroups          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygon"));

	UMeshDescriptionBase_DeletePolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = params.OrphanedPolygonGroups;

}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OrphanedVertices               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteEdge"));

	UMeshDescriptionBase_DeleteEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID"));

	UMeshDescriptionBase_CreateVertexWithID_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// ()
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID"));

	UMeshDescriptionBase_CreateVertexInstanceWithID_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// ()
// Parameters:
// struct FVertexID               VertexID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance"));

	UMeshDescriptionBase_CreateVertexInstance_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// ()
// Parameters:
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UMeshDescriptionBase::CreateVertex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertex"));

	UMeshDescriptionBase_CreateVertex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// ()
// Parameters:
// struct FTriangleID             TriangleID                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID"));

	UMeshDescriptionBase_CreateTriangleWithID_Params params;
	params.TriangleID = TriangleID;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTriangleID             ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTriangleID UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangle"));

	UMeshDescriptionBase_CreateTriangle_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID"));

	UMeshDescriptionBase_CreatePolygonWithID_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID"));

	UMeshDescriptionBase_CreatePolygonGroupWithID_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// ()
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup"));

	UMeshDescriptionBase_CreatePolygonGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// ()
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygon"));

	UMeshDescriptionBase_CreatePolygon_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// ()
// Parameters:
// struct FEdgeID                 EdgeID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID0                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID"));

	UMeshDescriptionBase_CreateEdgeWithID_Params params;
	params.EdgeID = EdgeID;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// ()
// Parameters:
// struct FVertexID               VertexID0                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdge"));

	UMeshDescriptionBase_CreateEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// ()
// Parameters:
// struct FPolygonID              PolygonID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation"));

	UMeshDescriptionBase_ComputePolygonTriangulation_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMeshDescriptionBase::AfterRead()
{
	UObject::AfterRead();

}

void UMeshDescriptionBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
