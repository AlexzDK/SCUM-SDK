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

void FRenderableTriangleVertex::AfterRead()
{
}

void FRenderableTriangleVertex::BeforeDelete()
{
}

void FRenderableTriangle::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FRenderableTriangle::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void APreviewGeometryActor::AfterRead()
{
	AInternalToolFrameworkActor::AfterRead();

}

void APreviewGeometryActor::BeforeDelete()
{
	AInternalToolFrameworkActor::BeforeDelete();

}

// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// ()
// Parameters:
// struct FString                 LineSetIdentifier              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::SetLineSetVisibility(const struct FString& LineSetIdentifier, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetLineSetVisibility"));

	UPreviewGeometry_SetLineSetVisibility_Params params;
	params.LineSetIdentifier = LineSetIdentifier;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// ()
// Parameters:
// struct FString                 LineSetIdentifier              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::SetLineSetMaterial(const struct FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetLineSetMaterial"));

	UPreviewGeometry_SetLineSetMaterial_Params params;
	params.LineSetIdentifier = LineSetIdentifier;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// ()
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial"));

	UPreviewGeometry_SetAllLineSetsMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// ()
// Parameters:
// struct FString                 LineSetIdentifier              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::RemoveLineSet(const struct FString& LineSetIdentifier, bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.RemoveLineSet"));

	UPreviewGeometry_RemoveLineSet_Params params;
	params.LineSetIdentifier = LineSetIdentifier;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// ()
// Parameters:
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.RemoveAllLineSets"));

	UPreviewGeometry_RemoveAllLineSets_Params params;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelingComponents.PreviewGeometry.GetActor
// ()
// Parameters:
// class APreviewGeometryActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.GetActor"));

	UPreviewGeometry_GetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.FindLineSet
// ()
// Parameters:
// struct FString                 LineSetIdentifier              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULineSetComponent* UPreviewGeometry::FindLineSet(const struct FString& LineSetIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.FindLineSet"));

	UPreviewGeometry_FindLineSet_Params params;
	params.LineSetIdentifier = LineSetIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.Disconnect
// ()
void UPreviewGeometry::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.Disconnect"));

	UPreviewGeometry_Disconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelingComponents.PreviewGeometry.CreateInWorld
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              WithTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UPreviewGeometry::CreateInWorld(class UWorld* World, const struct FTransform& WithTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.CreateInWorld"));

	UPreviewGeometry_CreateInWorld_Params params;
	params.World = World;
	params.WithTransform = WithTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelingComponents.PreviewGeometry.AddLineSet
// ()
// Parameters:
// struct FString                 LineSetIdentifier              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULineSetComponent* UPreviewGeometry::AddLineSet(const struct FString& LineSetIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.AddLineSet"));

	UPreviewGeometry_AddLineSet_Params params;
	params.LineSetIdentifier = LineSetIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPreviewGeometry::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ParentActor, APreviewGeometryActor);
}

void UPreviewGeometry::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ParentActor);
}

void APreviewMeshActor::AfterRead()
{
	AInternalToolFrameworkActor::AfterRead();

}

void APreviewMeshActor::BeforeDelete()
{
	AInternalToolFrameworkActor::BeforeDelete();

}

void UBaseDynamicMeshComponent::AfterRead()
{
	UMeshComponent::AfterRead();

}

void UBaseDynamicMeshComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

}

void USimpleDynamicMeshComponent::AfterRead()
{
	UBaseDynamicMeshComponent::AfterRead();

}

void USimpleDynamicMeshComponent::BeforeDelete()
{
	UBaseDynamicMeshComponent::BeforeDelete();

}

void USpaceCurveDeformationMechanicPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USpaceCurveDeformationMechanicPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void USpaceCurveDeformationMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

	READ_PTR_FULL(ClickBehavior, USingleClickInputBehavior);
	READ_PTR_FULL(HoverBehavior, UMouseHoverBehavior);
	READ_PTR_FULL(TransformProperties, USpaceCurveDeformationMechanicPropertySet);
	READ_PTR_FULL(PreviewGeometryActor, APreviewGeometryActor);
	READ_PTR_FULL(RenderPoints, UPointSetComponent);
	READ_PTR_FULL(RenderSegments, ULineSetComponent);
	READ_PTR_FULL(PointTransformProxy, UTransformProxy);
	READ_PTR_FULL(PointTransformGizmo, UTransformGizmo);
}

void USpaceCurveDeformationMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

	DELE_PTR_FULL(ClickBehavior);
	DELE_PTR_FULL(HoverBehavior);
	DELE_PTR_FULL(TransformProperties);
	DELE_PTR_FULL(PreviewGeometryActor);
	DELE_PTR_FULL(RenderPoints);
	DELE_PTR_FULL(RenderSegments);
	DELE_PTR_FULL(PointTransformProxy);
	DELE_PTR_FULL(PointTransformGizmo);
}

void USpatialCurveDistanceMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

}

void USpatialCurveDistanceMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

}

void UTriangleSetComponent::AfterRead()
{
	UMeshComponent::AfterRead();

}

void UTriangleSetComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

}

void UUVLayoutPreviewProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UUVLayoutPreviewProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshVertexCommandChangeTarget::AfterRead()
{
	UInterface::AfterRead();

}

void UMeshVertexCommandChangeTarget::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMultiTransformer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GizmoManager, UInteractiveGizmoManager);
	READ_PTR_FULL(TransformGizmo, UTransformGizmo);
	READ_PTR_FULL(TransformProxy, UTransformProxy);
}

void UMultiTransformer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GizmoManager);
	DELE_PTR_FULL(TransformGizmo);
	DELE_PTR_FULL(TransformProxy);
}

void UOctreeDynamicMeshComponent::AfterRead()
{
	UBaseDynamicMeshComponent::AfterRead();

}

void UOctreeDynamicMeshComponent::BeforeDelete()
{
	UBaseDynamicMeshComponent::BeforeDelete();

}

void UPlaneDistanceFromHitMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

}

void UPlaneDistanceFromHitMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

}

void UPointSetComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(PointMaterial, UMaterialInterface);
}

void UPointSetComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(PointMaterial);
}

void UPreviewMesh::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DynamicMeshComponent, USimpleDynamicMeshComponent);
}

void UPreviewMesh::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DynamicMeshComponent);
}

void UPolyEditPreviewMesh::AfterRead()
{
	UPreviewMesh::AfterRead();

}

void UPolyEditPreviewMesh::BeforeDelete()
{
	UPreviewMesh::BeforeDelete();

}

void UPolygonSelectionMechanicProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolygonSelectionMechanicProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolygonSelectionMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

	READ_PTR_FULL(Properties, UPolygonSelectionMechanicProperties);
	READ_PTR_FULL(PreviewGeometryActor, APreviewGeometryActor);
	READ_PTR_FULL(DrawnTriangleSetComponent, UTriangleSetComponent);
	READ_PTR_FULL(HighlightedFaceMaterial, UMaterialInterface);
}

void UPolygonSelectionMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

	DELE_PTR_FULL(Properties);
	DELE_PTR_FULL(PreviewGeometryActor);
	DELE_PTR_FULL(DrawnTriangleSetComponent);
	DELE_PTR_FULL(HighlightedFaceMaterial);
}

void UUVLayoutPreview::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Settings, UUVLayoutPreviewProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
	READ_PTR_FULL(TriangleComponent, UTriangleSetComponent);
	READ_PTR_FULL(BackingRectangleMaterial, UMaterialInterface);
}

void UUVLayoutPreview::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(PreviewMesh);
	DELE_PTR_FULL(TriangleComponent);
	DELE_PTR_FULL(BackingRectangleMaterial);
}

void UVoxelProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UVoxelProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc"));

	UWeightMapSetProperties_GetWeightMapsFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWeightMapSetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UWeightMapSetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBaseCreateFromSelectedTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(TransformProperties, UTransformInputsToolProperties);
	READ_PTR_FULL(HandleSourcesProperties, UBaseCreateFromSelectedHandleSourceProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void UBaseCreateFromSelectedTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(TransformProperties);
	DELE_PTR_FULL(HandleSourcesProperties);
	DELE_PTR_FULL(Preview);
}

void UBaseVoxelTool::AfterRead()
{
	UBaseCreateFromSelectedTool::AfterRead();

	READ_PTR_FULL(VoxProperties, UVoxelProperties);
}

void UBaseVoxelTool::BeforeDelete()
{
	UBaseCreateFromSelectedTool::BeforeDelete();

	DELE_PTR_FULL(VoxProperties);
}

void UCollectSurfacePathMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

}

void UCollectSurfacePathMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

}

void UConstructionPlaneMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

	READ_PTR_FULL(PlaneTransformGizmo, UTransformGizmo);
	READ_PTR_FULL(PlaneTransformProxy, UTransformProxy);
	READ_PTR_FULL(ClickToSetPlaneBehavior, USingleClickInputBehavior);
}

void UConstructionPlaneMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

	DELE_PTR_FULL(PlaneTransformGizmo);
	DELE_PTR_FULL(PlaneTransformProxy);
	DELE_PTR_FULL(ClickToSetPlaneBehavior);
}

void UCurveControlPointsMechanic::AfterRead()
{
	UInteractionMechanic::AfterRead();

	READ_PTR_FULL(ClickBehavior, USingleClickInputBehavior);
	READ_PTR_FULL(HoverBehavior, UMouseHoverBehavior);
	READ_PTR_FULL(PreviewGeometryActor, APreviewGeometryActor);
	READ_PTR_FULL(DrawnControlPoints, UPointSetComponent);
	READ_PTR_FULL(DrawnControlSegments, ULineSetComponent);
	READ_PTR_FULL(PreviewPoint, UPointSetComponent);
	READ_PTR_FULL(PreviewSegment, ULineSetComponent);
	READ_PTR_FULL(PointTransformProxy, UTransformProxy);
	READ_PTR_FULL(PointTransformGizmo, UTransformGizmo);
}

void UCurveControlPointsMechanic::BeforeDelete()
{
	UInteractionMechanic::BeforeDelete();

	DELE_PTR_FULL(ClickBehavior);
	DELE_PTR_FULL(HoverBehavior);
	DELE_PTR_FULL(PreviewGeometryActor);
	DELE_PTR_FULL(DrawnControlPoints);
	DELE_PTR_FULL(DrawnControlSegments);
	DELE_PTR_FULL(PreviewPoint);
	DELE_PTR_FULL(PreviewSegment);
	DELE_PTR_FULL(PointTransformProxy);
	DELE_PTR_FULL(PointTransformGizmo);
}

void UDynamicMeshReplacementChangeTarget::AfterRead()
{
	UObject::AfterRead();

}

void UDynamicMeshReplacementChangeTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULineSetComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(LineMaterial, UMaterialInterface);
}

void ULineSetComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(LineMaterial);
}

void UMeshCommandChangeTarget::AfterRead()
{
	UInterface::AfterRead();

}

void UMeshCommandChangeTarget::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMeshOpPreviewWithBackgroundCompute::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
	READ_PTR_FULL(OverrideMaterial, UMaterialInterface);
	READ_PTR_FULL(WorkingMaterial, UMaterialInterface);
}

void UMeshOpPreviewWithBackgroundCompute::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PreviewMesh);
	DELE_PTR_FULL(OverrideMaterial);
	DELE_PTR_FULL(WorkingMaterial);
}

void UMeshReplacementCommandChangeTarget::AfterRead()
{
	UInterface::AfterRead();

}

void UMeshReplacementCommandChangeTarget::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBaseCreateFromSelectedToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UBaseCreateFromSelectedToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UOnAcceptHandleSourcesProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UOnAcceptHandleSourcesProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBaseCreateFromSelectedHandleSourceProperties::AfterRead()
{
	UOnAcceptHandleSourcesProperties::AfterRead();

}

void UBaseCreateFromSelectedHandleSourceProperties::BeforeDelete()
{
	UOnAcceptHandleSourcesProperties::BeforeDelete();

}

void UTransformInputsToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UTransformInputsToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBaseMeshProcessingToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UBaseMeshProcessingToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UBaseMeshProcessingTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void UBaseMeshProcessingTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Preview);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
