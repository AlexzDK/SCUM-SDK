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

void FPerlinLayerProperties::AfterRead()
{
}

void FPerlinLayerProperties::BeforeDelete()
{
}

void FPhysicsConvexData::AfterRead()
{
}

void FPhysicsConvexData::BeforeDelete()
{
}

void FPhysicsCapsuleData::AfterRead()
{
}

void FPhysicsCapsuleData::BeforeDelete()
{
}

void FPhysicsBoxData::AfterRead()
{
}

void FPhysicsBoxData::BeforeDelete()
{
}

void FEditPivotTarget::AfterRead()
{
	READ_PTR_FULL(TransformProxy, UTransformProxy);
	READ_PTR_FULL(TransformGizmo, UTransformGizmo);
}

void FEditPivotTarget::BeforeDelete()
{
	DELE_PTR_FULL(TransformProxy);
	DELE_PTR_FULL(TransformGizmo);
}

void FTransformMeshesTarget::AfterRead()
{
	READ_PTR_FULL(TransformProxy, UTransformProxy);
	READ_PTR_FULL(TransformGizmo, UTransformGizmo);
}

void FTransformMeshesTarget::BeforeDelete()
{
	DELE_PTR_FULL(TransformProxy);
	DELE_PTR_FULL(TransformGizmo);
}

void FPhysicsSphereData::AfterRead()
{
}

void FPhysicsSphereData::BeforeDelete()
{
}

void UAddPatchToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UAddPatchToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UAddPatchToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UAddPatchToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UAddPatchTool::AfterRead()
{
	USingleClickTool::AfterRead();

	READ_PTR_FULL(ShapeSettings, UAddPatchToolProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
}

void UAddPatchTool::BeforeDelete()
{
	USingleClickTool::BeforeDelete();

	DELE_PTR_FULL(ShapeSettings);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(PreviewMesh);
}

void UAddPrimitiveToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UAddPrimitiveToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UProceduralShapeToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UProceduralShapeToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UProceduralRectangleToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralRectangleToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralBoxToolProperties::AfterRead()
{
	UProceduralRectangleToolProperties::AfterRead();

}

void UProceduralBoxToolProperties::BeforeDelete()
{
	UProceduralRectangleToolProperties::BeforeDelete();

}

void UProceduralRoundedRectangleToolProperties::AfterRead()
{
	UProceduralRectangleToolProperties::AfterRead();

}

void UProceduralRoundedRectangleToolProperties::BeforeDelete()
{
	UProceduralRectangleToolProperties::BeforeDelete();

}

void UProceduralDiscToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralDiscToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralPuncturedDiscToolProperties::AfterRead()
{
	UProceduralDiscToolProperties::AfterRead();

}

void UProceduralPuncturedDiscToolProperties::BeforeDelete()
{
	UProceduralDiscToolProperties::BeforeDelete();

}

void UProceduralTorusToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralTorusToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralCylinderToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralCylinderToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralConeToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralConeToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralArrowToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralArrowToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralSphereToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralSphereToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void UProceduralSphericalBoxToolProperties::AfterRead()
{
	UProceduralShapeToolProperties::AfterRead();

}

void UProceduralSphericalBoxToolProperties::BeforeDelete()
{
	UProceduralShapeToolProperties::BeforeDelete();

}

void ULastActorInfo::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Actor, AActor);
	READ_PTR_FULL(StaticMesh, UStaticMesh);
	READ_PTR_FULL(ShapeSettings, UProceduralShapeToolProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
}

void ULastActorInfo::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Actor);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(ShapeSettings);
	DELE_PTR_FULL(MaterialProperties);
}

void UAddPrimitiveTool::AfterRead()
{
	USingleClickTool::AfterRead();

	READ_PTR_FULL(ShapeSettings, UProceduralShapeToolProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
	READ_PTR_FULL(LastGenerated, ULastActorInfo);
}

void UAddPrimitiveTool::BeforeDelete()
{
	USingleClickTool::BeforeDelete();

	DELE_PTR_FULL(ShapeSettings);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(PreviewMesh);
	DELE_PTR_FULL(LastGenerated);
}

void UAddBoxPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddBoxPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddCylinderPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddCylinderPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddConePrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddConePrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddRectanglePrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddRectanglePrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddRoundedRectanglePrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddRoundedRectanglePrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddDiscPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddDiscPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddPuncturedDiscPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddPuncturedDiscPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddTorusPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddTorusPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddArrowPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddArrowPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddSpherePrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddSpherePrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAddSphericalBoxPrimitiveTool::AfterRead()
{
	UAddPrimitiveTool::AfterRead();

}

void UAddSphericalBoxPrimitiveTool::BeforeDelete()
{
	UAddPrimitiveTool::BeforeDelete();

}

void UAlignObjectsToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UAlignObjectsToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UAlignObjectsToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UAlignObjectsToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UAlignObjectsTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(AlignProps, UAlignObjectsToolProperties);
}

void UAlignObjectsTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(AlignProps);
}

void UBakeMeshAttributeMapsToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UBakeMeshAttributeMapsToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

// Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc"));

	UBakeMeshAttributeMapsToolProperties_GetUVLayerNamesFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBakeMeshAttributeMapsToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

	READ_PTR_FULL(Result, UTexture2D);
}

void UBakeMeshAttributeMapsToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

	DELE_PTR_FULL(Result);
}

void UBakedNormalMapToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBakedNormalMapToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBakedOcclusionMapToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBakedOcclusionMapToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBakedOcclusionMapVisualizationProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBakedOcclusionMapVisualizationProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBakedCurvatureMapToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBakedCurvatureMapToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBakedTexture2DImageProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

	READ_PTR_FULL(SourceTexture, UTexture2D);
}

void UBakedTexture2DImageProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

	DELE_PTR_FULL(SourceTexture);
}

void UBakeMeshAttributeMapsTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UBakeMeshAttributeMapsToolProperties);
	READ_PTR_FULL(NormalMapProps, UBakedNormalMapToolProperties);
	READ_PTR_FULL(OcclusionMapProps, UBakedOcclusionMapToolProperties);
	READ_PTR_FULL(CurvatureMapProps, UBakedCurvatureMapToolProperties);
	READ_PTR_FULL(Texture2DProps, UBakedTexture2DImageProperties);
	READ_PTR_FULL(VisualizationProps, UBakedOcclusionMapVisualizationProperties);
	READ_PTR_FULL(PreviewMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(CachedNormalMap, UTexture2D);
	READ_PTR_FULL(CachedOcclusionMap, UTexture2D);
	READ_PTR_FULL(CachedCurvatureMap, UTexture2D);
	READ_PTR_FULL(CachedMeshPropertyMap, UTexture2D);
	READ_PTR_FULL(CachedTexture2DImageMap, UTexture2D);
	READ_PTR_FULL(EmptyNormalMap, UTexture2D);
	READ_PTR_FULL(EmptyColorMapBlack, UTexture2D);
	READ_PTR_FULL(EmptyColorMapWhite, UTexture2D);
}

void UBakeMeshAttributeMapsTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(NormalMapProps);
	DELE_PTR_FULL(OcclusionMapProps);
	DELE_PTR_FULL(CurvatureMapProps);
	DELE_PTR_FULL(Texture2DProps);
	DELE_PTR_FULL(VisualizationProps);
	DELE_PTR_FULL(PreviewMaterial);
	DELE_PTR_FULL(CachedNormalMap);
	DELE_PTR_FULL(CachedOcclusionMap);
	DELE_PTR_FULL(CachedCurvatureMap);
	DELE_PTR_FULL(CachedMeshPropertyMap);
	DELE_PTR_FULL(CachedTexture2DImageMap);
	DELE_PTR_FULL(EmptyNormalMap);
	DELE_PTR_FULL(EmptyColorMapBlack);
	DELE_PTR_FULL(EmptyColorMapWhite);
}

void UBakeTransformToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UBakeTransformToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UBakeTransformToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBakeTransformToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBakeTransformTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, UBakeTransformToolProperties);
}

void UBakeTransformTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
}

void UPhysicsObjectToolPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPhysicsObjectToolPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UCollisionGeometryVisualizationProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UCollisionGeometryVisualizationProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UCombineMeshesToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UCombineMeshesToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UCombineMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UCombineMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UCombineMeshesTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, UCombineMeshesToolProperties);
	READ_PTR_FULL(HandleSourceProperties, UOnAcceptHandleSourcesProperties);
}

void UCombineMeshesTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(HandleSourceProperties);
}

void UConvertToPolygonsToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UConvertToPolygonsToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UConvertToPolygonsToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UConvertToPolygonsToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UConvertToPolygonsTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UConvertToPolygonsToolProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
}

void UConvertToPolygonsTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(PreviewMesh);
}

void UCSGMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UCSGMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UCSGMeshesTool::AfterRead()
{
	UBaseCreateFromSelectedTool::AfterRead();

	READ_PTR_FULL(CSGProperties, UCSGMeshesToolProperties);
	READ_PTR_FULL(DrawnLineSet, ULineSetComponent);
}

void UCSGMeshesTool::BeforeDelete()
{
	UBaseCreateFromSelectedTool::BeforeDelete();

	DELE_PTR_FULL(CSGProperties);
	DELE_PTR_FULL(DrawnLineSet);
}

void UCSGMeshesToolBuilder::AfterRead()
{
	UBaseCreateFromSelectedToolBuilder::AfterRead();

}

void UCSGMeshesToolBuilder::BeforeDelete()
{
	UBaseCreateFromSelectedToolBuilder::BeforeDelete();

}

void UDeformMeshPolygonsToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UDeformMeshPolygonsToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UDeformMeshPolygonsTransformProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDeformMeshPolygonsTransformProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDeformMeshPolygonsTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(DynamicMeshComponent, USimpleDynamicMeshComponent);
	READ_PTR_FULL(TransformProps, UDeformMeshPolygonsTransformProperties);
}

void UDeformMeshPolygonsTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(DynamicMeshComponent);
	DELE_PTR_FULL(TransformProps);
}

// Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc"));

	UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDisplaceMeshCommonProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDisplaceMeshCommonProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDisplaceMeshTextureMapProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

	READ_PTR_FULL(DisplacementMap, UTexture2D);
}

void UDisplaceMeshTextureMapProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

	DELE_PTR_FULL(DisplacementMap);
}

void UDisplaceMeshDirectionalFilterProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDisplaceMeshDirectionalFilterProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDisplaceMeshPerlinNoiseProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDisplaceMeshPerlinNoiseProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDisplaceMeshSineWaveProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDisplaceMeshSineWaveProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDisplaceMeshToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UDisplaceMeshToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UDisplaceMeshTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(CommonProperties, UDisplaceMeshCommonProperties);
	READ_PTR_FULL(DirectionalFilterProperties, UDisplaceMeshDirectionalFilterProperties);
	READ_PTR_FULL(TextureMapProperties, UDisplaceMeshTextureMapProperties);
	READ_PTR_FULL(NoiseProperties, UDisplaceMeshPerlinNoiseProperties);
	READ_PTR_FULL(SineWaveProperties, UDisplaceMeshSineWaveProperties);
}

void UDisplaceMeshTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(CommonProperties);
	DELE_PTR_FULL(DirectionalFilterProperties);
	DELE_PTR_FULL(TextureMapProperties);
	DELE_PTR_FULL(NoiseProperties);
	DELE_PTR_FULL(SineWaveProperties);
}

void UDrawAndRevolveToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UDrawAndRevolveToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void URevolveProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void URevolveProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void URevolveToolProperties::AfterRead()
{
	URevolveProperties::AfterRead();

}

void URevolveToolProperties::BeforeDelete()
{
	URevolveProperties::BeforeDelete();

}

void URevolveOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RevolveTool, UDrawAndRevolveTool);
}

void URevolveOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RevolveTool);
}

void UDrawAndRevolveTool::AfterRead()
{
	UInteractiveTool::AfterRead();

	READ_PTR_FULL(ControlPointsMechanic, UCurveControlPointsMechanic);
	READ_PTR_FULL(PlaneMechanic, UConstructionPlaneMechanic);
	READ_PTR_FULL(Settings, URevolveToolProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void UDrawAndRevolveTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

	DELE_PTR_FULL(ControlPointsMechanic);
	DELE_PTR_FULL(PlaneMechanic);
	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(Preview);
}

void UDrawPolygonToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UDrawPolygonToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UDrawPolygonToolStandardProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDrawPolygonToolStandardProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDrawPolygonToolSnapProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDrawPolygonToolSnapProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDrawPolygonTool::AfterRead()
{
	UInteractiveTool::AfterRead();

	READ_PTR_FULL(PolygonProperties, UDrawPolygonToolStandardProperties);
	READ_PTR_FULL(SnapProperties, UDrawPolygonToolSnapProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
	READ_PTR_FULL(PlaneTransformGizmo, UTransformGizmo);
	READ_PTR_FULL(PlaneTransformProxy, UTransformProxy);
	READ_PTR_FULL(HeightMechanic, UPlaneDistanceFromHitMechanic);
}

void UDrawPolygonTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

	DELE_PTR_FULL(PolygonProperties);
	DELE_PTR_FULL(SnapProperties);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(PreviewMesh);
	DELE_PTR_FULL(PlaneTransformGizmo);
	DELE_PTR_FULL(PlaneTransformProxy);
	DELE_PTR_FULL(HeightMechanic);
}

void UDrawPolyPathToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UDrawPolyPathToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UDrawPolyPathProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDrawPolyPathProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDrawPolyPathExtrudeProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDrawPolyPathExtrudeProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDrawPolyPathTool::AfterRead()
{
	UInteractiveTool::AfterRead();

	READ_PTR_FULL(TransformProps, UDrawPolyPathProperties);
	READ_PTR_FULL(ExtrudeProperties, UDrawPolyPathExtrudeProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(PlaneMechanic, UConstructionPlaneMechanic);
	READ_PTR_FULL(EditPreview, UPolyEditPreviewMesh);
	READ_PTR_FULL(ExtrudeHeightMechanic, UPlaneDistanceFromHitMechanic);
	READ_PTR_FULL(CurveDistMechanic, USpatialCurveDistanceMechanic);
	READ_PTR_FULL(SurfacePathMechanic, UCollectSurfacePathMechanic);
}

void UDrawPolyPathTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

	DELE_PTR_FULL(TransformProps);
	DELE_PTR_FULL(ExtrudeProperties);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(PlaneMechanic);
	DELE_PTR_FULL(EditPreview);
	DELE_PTR_FULL(ExtrudeHeightMechanic);
	DELE_PTR_FULL(CurveDistMechanic);
	DELE_PTR_FULL(SurfacePathMechanic);
}

void UDynamicMeshSculptToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UDynamicMeshSculptToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UBrushSculptProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBrushSculptProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshConstraintProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshConstraintProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void URemeshProperties::AfterRead()
{
	UMeshConstraintProperties::AfterRead();

}

void URemeshProperties::BeforeDelete()
{
	UMeshConstraintProperties::BeforeDelete();

}

void UBrushRemeshProperties::AfterRead()
{
	URemeshProperties::AfterRead();

}

void UBrushRemeshProperties::BeforeDelete()
{
	URemeshProperties::BeforeDelete();

}

void UFixedPlaneBrushProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UFixedPlaneBrushProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDynamicMeshSculptTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(BrushProperties, USculptBrushProperties);
	READ_PTR_FULL(SculptProperties, UBrushSculptProperties);
	READ_PTR_FULL(SculptMaxBrushProperties, USculptMaxBrushProperties);
	READ_PTR_FULL(KelvinBrushProperties, UKelvinBrushProperties);
	READ_PTR_FULL(RemeshProperties, UBrushRemeshProperties);
	READ_PTR_FULL(GizmoProperties, UFixedPlaneBrushProperties);
	READ_PTR_FULL(ViewProperties, UMeshEditingViewProperties);
	READ_PTR_FULL(BrushIndicator, UBrushStampIndicator);
	READ_PTR_FULL(BrushIndicatorMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(BrushIndicatorMesh, UPreviewMesh);
	READ_PTR_FULL(DynamicMeshComponent, UOctreeDynamicMeshComponent);
	READ_PTR_FULL(ActiveOverrideMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(PlaneTransformGizmo, UTransformGizmo);
	READ_PTR_FULL(PlaneTransformProxy, UTransformProxy);
}

void UDynamicMeshSculptTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(BrushProperties);
	DELE_PTR_FULL(SculptProperties);
	DELE_PTR_FULL(SculptMaxBrushProperties);
	DELE_PTR_FULL(KelvinBrushProperties);
	DELE_PTR_FULL(RemeshProperties);
	DELE_PTR_FULL(GizmoProperties);
	DELE_PTR_FULL(ViewProperties);
	DELE_PTR_FULL(BrushIndicator);
	DELE_PTR_FULL(BrushIndicatorMaterial);
	DELE_PTR_FULL(BrushIndicatorMesh);
	DELE_PTR_FULL(DynamicMeshComponent);
	DELE_PTR_FULL(ActiveOverrideMaterial);
	DELE_PTR_FULL(PlaneTransformGizmo);
	DELE_PTR_FULL(PlaneTransformProxy);
}

void UEdgeLoopInsertionToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UEdgeLoopInsertionToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UEdgeLoopInsertionProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEdgeLoopInsertionProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEdgeLoopInsertionOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Tool, UEdgeLoopInsertionTool);
}

void UEdgeLoopInsertionOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Tool);
}

void UEdgeLoopInsertionTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UEdgeLoopInsertionProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void UEdgeLoopInsertionTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(Preview);
}

void UEditMeshPolygonsToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UEditMeshPolygonsToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UPolyEditCommonProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditCommonProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEditMeshPolygonsToolActionPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEditMeshPolygonsToolActionPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
// ()
void UEditMeshPolygonsToolActions::Retriangulate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate"));

	UEditMeshPolygonsToolActions_Retriangulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
// ()
void UEditMeshPolygonsToolActions::RecalcNormals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals"));

	UEditMeshPolygonsToolActions_RecalcNormals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
// ()
void UEditMeshPolygonsToolActions::Outset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Outset"));

	UEditMeshPolygonsToolActions_Outset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
// ()
void UEditMeshPolygonsToolActions::Offset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Offset"));

	UEditMeshPolygonsToolActions_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
// ()
void UEditMeshPolygonsToolActions::Merge()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Merge"));

	UEditMeshPolygonsToolActions_Merge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
// ()
void UEditMeshPolygonsToolActions::Inset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Inset"));

	UEditMeshPolygonsToolActions_Inset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
// ()
void UEditMeshPolygonsToolActions::Flip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Flip"));

	UEditMeshPolygonsToolActions_Flip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
// ()
void UEditMeshPolygonsToolActions::Extrude()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude"));

	UEditMeshPolygonsToolActions_Extrude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
// ()
void UEditMeshPolygonsToolActions::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect"));

	UEditMeshPolygonsToolActions_Disconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
// ()
void UEditMeshPolygonsToolActions::Delete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Delete"));

	UEditMeshPolygonsToolActions_Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
// ()
void UEditMeshPolygonsToolActions::Decompose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose"));

	UEditMeshPolygonsToolActions_Decompose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
// ()
void UEditMeshPolygonsToolActions::CutFaces()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces"));

	UEditMeshPolygonsToolActions_CutFaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditMeshPolygonsToolActions::AfterRead()
{
	UEditMeshPolygonsToolActionPropertySet::AfterRead();

}

void UEditMeshPolygonsToolActions::BeforeDelete()
{
	UEditMeshPolygonsToolActionPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
// ()
void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals"));

	UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
// ()
void UEditMeshPolygonsToolActions_Triangles::Poke()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke"));

	UEditMeshPolygonsToolActions_Triangles_Poke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
// ()
void UEditMeshPolygonsToolActions_Triangles::Outset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset"));

	UEditMeshPolygonsToolActions_Triangles_Outset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
// ()
void UEditMeshPolygonsToolActions_Triangles::Offset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset"));

	UEditMeshPolygonsToolActions_Triangles_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
// ()
void UEditMeshPolygonsToolActions_Triangles::Inset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset"));

	UEditMeshPolygonsToolActions_Triangles_Inset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
// ()
void UEditMeshPolygonsToolActions_Triangles::Flip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip"));

	UEditMeshPolygonsToolActions_Triangles_Flip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
// ()
void UEditMeshPolygonsToolActions_Triangles::Extrude()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude"));

	UEditMeshPolygonsToolActions_Triangles_Extrude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
// ()
void UEditMeshPolygonsToolActions_Triangles::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect"));

	UEditMeshPolygonsToolActions_Triangles_Disconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
// ()
void UEditMeshPolygonsToolActions_Triangles::Delete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete"));

	UEditMeshPolygonsToolActions_Triangles_Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
// ()
void UEditMeshPolygonsToolActions_Triangles::CutFaces()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces"));

	UEditMeshPolygonsToolActions_Triangles_CutFaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditMeshPolygonsToolActions_Triangles::AfterRead()
{
	UEditMeshPolygonsToolActionPropertySet::AfterRead();

}

void UEditMeshPolygonsToolActions_Triangles::BeforeDelete()
{
	UEditMeshPolygonsToolActionPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
// ()
void UEditMeshPolygonsToolUVActions::PlanarProjection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection"));

	UEditMeshPolygonsToolUVActions_PlanarProjection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditMeshPolygonsToolUVActions::AfterRead()
{
	UEditMeshPolygonsToolActionPropertySet::AfterRead();

}

void UEditMeshPolygonsToolUVActions::BeforeDelete()
{
	UEditMeshPolygonsToolActionPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
// ()
void UEditMeshPolygonsToolEdgeActions::Weld()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld"));

	UEditMeshPolygonsToolEdgeActions_Weld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
// ()
void UEditMeshPolygonsToolEdgeActions::Straighten()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten"));

	UEditMeshPolygonsToolEdgeActions_Straighten_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
// ()
void UEditMeshPolygonsToolEdgeActions::FillHole()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole"));

	UEditMeshPolygonsToolEdgeActions_FillHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditMeshPolygonsToolEdgeActions::AfterRead()
{
	UEditMeshPolygonsToolActionPropertySet::AfterRead();

}

void UEditMeshPolygonsToolEdgeActions::BeforeDelete()
{
	UEditMeshPolygonsToolActionPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
// ()
void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld"));

	UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
// ()
void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split"));

	UEditMeshPolygonsToolEdgeActions_Triangles_Split_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
// ()
void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip"));

	UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
// ()
void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole"));

	UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
// ()
void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse"));

	UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditMeshPolygonsToolEdgeActions_Triangles::AfterRead()
{
	UEditMeshPolygonsToolActionPropertySet::AfterRead();

}

void UEditMeshPolygonsToolEdgeActions_Triangles::BeforeDelete()
{
	UEditMeshPolygonsToolActionPropertySet::BeforeDelete();

}

void UPolyEditExtrudeProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditExtrudeProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolyEditOffsetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditOffsetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolyEditInsetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditInsetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolyEditOutsetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditOutsetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolyEditCutProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditCutProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPolyEditSetUVProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPolyEditSetUVProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEditMeshPolygonsTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(DynamicMeshComponent, USimpleDynamicMeshComponent);
	READ_PTR_FULL(CommonProps, UPolyEditCommonProperties);
	READ_PTR_FULL(EditActions, UEditMeshPolygonsToolActions);
	READ_PTR_FULL(EditActions_Triangles, UEditMeshPolygonsToolActions_Triangles);
	READ_PTR_FULL(EditEdgeActions, UEditMeshPolygonsToolEdgeActions);
	READ_PTR_FULL(EditEdgeActions_Triangles, UEditMeshPolygonsToolEdgeActions_Triangles);
	READ_PTR_FULL(EditUVActions, UEditMeshPolygonsToolUVActions);
	READ_PTR_FULL(ExtrudeProperties, UPolyEditExtrudeProperties);
	READ_PTR_FULL(OffsetProperties, UPolyEditOffsetProperties);
	READ_PTR_FULL(InsetProperties, UPolyEditInsetProperties);
	READ_PTR_FULL(OutsetProperties, UPolyEditOutsetProperties);
	READ_PTR_FULL(CutProperties, UPolyEditCutProperties);
	READ_PTR_FULL(SetUVProperties, UPolyEditSetUVProperties);
	READ_PTR_FULL(SelectionMechanic, UPolygonSelectionMechanic);
	READ_PTR_FULL(MultiTransformer, UMultiTransformer);
	READ_PTR_FULL(EditPreview, UPolyEditPreviewMesh);
	READ_PTR_FULL(ExtrudeHeightMechanic, UPlaneDistanceFromHitMechanic);
	READ_PTR_FULL(CurveDistMechanic, USpatialCurveDistanceMechanic);
	READ_PTR_FULL(SurfacePathMechanic, UCollectSurfacePathMechanic);
}

void UEditMeshPolygonsTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(DynamicMeshComponent);
	DELE_PTR_FULL(CommonProps);
	DELE_PTR_FULL(EditActions);
	DELE_PTR_FULL(EditActions_Triangles);
	DELE_PTR_FULL(EditEdgeActions);
	DELE_PTR_FULL(EditEdgeActions_Triangles);
	DELE_PTR_FULL(EditUVActions);
	DELE_PTR_FULL(ExtrudeProperties);
	DELE_PTR_FULL(OffsetProperties);
	DELE_PTR_FULL(InsetProperties);
	DELE_PTR_FULL(OutsetProperties);
	DELE_PTR_FULL(CutProperties);
	DELE_PTR_FULL(SetUVProperties);
	DELE_PTR_FULL(SelectionMechanic);
	DELE_PTR_FULL(MultiTransformer);
	DELE_PTR_FULL(EditPreview);
	DELE_PTR_FULL(ExtrudeHeightMechanic);
	DELE_PTR_FULL(CurveDistMechanic);
	DELE_PTR_FULL(SurfacePathMechanic);
}

void UEditNormalsToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UEditNormalsToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UEditNormalsToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEditNormalsToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEditNormalsAdvancedProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEditNormalsAdvancedProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEditNormalsOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Tool, UEditNormalsTool);
}

void UEditNormalsOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Tool);
}

void UEditNormalsTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, UEditNormalsToolProperties);
	READ_PTR_FULL(AdvancedProperties, UEditNormalsAdvancedProperties);
}

void UEditNormalsTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(AdvancedProperties);
}

void UEditPivotToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UEditPivotToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UEditPivotToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEditPivotToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

// Function MeshModelingTools.EditPivotToolActionPropertySet.Top
// ()
void UEditPivotToolActionPropertySet::Top()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Top"));

	UEditPivotToolActionPropertySet_Top_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Right
// ()
void UEditPivotToolActionPropertySet::Right()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Right"));

	UEditPivotToolActionPropertySet_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Left
// ()
void UEditPivotToolActionPropertySet::Left()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Left"));

	UEditPivotToolActionPropertySet_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Front
// ()
void UEditPivotToolActionPropertySet::Front()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Front"));

	UEditPivotToolActionPropertySet_Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Center
// ()
void UEditPivotToolActionPropertySet::Center()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Center"));

	UEditPivotToolActionPropertySet_Center_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
// ()
void UEditPivotToolActionPropertySet::Bottom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom"));

	UEditPivotToolActionPropertySet_Bottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Back
// ()
void UEditPivotToolActionPropertySet::Back()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.EditPivotToolActionPropertySet.Back"));

	UEditPivotToolActionPropertySet_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditPivotToolActionPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UEditPivotToolActionPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UEditPivotTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(TransformProps, UEditPivotToolProperties);
	READ_PTR_FULL(EditPivotActions, UEditPivotToolActionPropertySet);
}

void UEditPivotTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(TransformProps);
	DELE_PTR_FULL(EditPivotActions);
}

void UEditUVIslandsToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UEditUVIslandsToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UEditUVIslandsTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(MaterialSettings, UExistingMeshMaterialProperties);
	READ_PTR_FULL(CheckerMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DynamicMeshComponent, USimpleDynamicMeshComponent);
	READ_PTR_FULL(SelectionMechanic, UPolygonSelectionMechanic);
	READ_PTR_FULL(MultiTransformer, UMultiTransformer);
}

void UEditUVIslandsTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(MaterialSettings);
	DELE_PTR_FULL(CheckerMaterial);
	DELE_PTR_FULL(DynamicMeshComponent);
	DELE_PTR_FULL(SelectionMechanic);
	DELE_PTR_FULL(MultiTransformer);
}

void UExtractCollisionGeometryToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UExtractCollisionGeometryToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UExtractCollisionGeometryTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(VizSettings, UCollisionGeometryVisualizationProperties);
	READ_PTR_FULL(ObjectProps, UPhysicsObjectToolPropertySet);
	READ_PTR_FULL(PreviewElements, UPreviewGeometry);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
}

void UExtractCollisionGeometryTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(VizSettings);
	DELE_PTR_FULL(ObjectProps);
	DELE_PTR_FULL(PreviewElements);
	DELE_PTR_FULL(PreviewMesh);
}

void UGroupEdgeInsertionToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UGroupEdgeInsertionToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UGroupEdgeInsertionProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UGroupEdgeInsertionProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshSculptToolBase::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(BrushProperties, USculptBrushProperties);
	READ_PTR_FULL(GizmoProperties, UWorkPlaneProperties);
	READ_PTR_FULL(ViewProperties, UMeshEditingViewProperties);
	READ_PTR_FULL(ActiveOverrideMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(BrushIndicator, UBrushStampIndicator);
	READ_PTR_FULL(BrushIndicatorMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(BrushIndicatorMesh, UPreviewMesh);
	READ_PTR_FULL(PlaneTransformGizmo, UTransformGizmo);
	READ_PTR_FULL(PlaneTransformProxy, UTransformProxy);
}

void UMeshSculptToolBase::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(BrushProperties);
	DELE_PTR_FULL(GizmoProperties);
	DELE_PTR_FULL(ViewProperties);
	DELE_PTR_FULL(ActiveOverrideMaterial);
	DELE_PTR_FULL(BrushIndicator);
	DELE_PTR_FULL(BrushIndicatorMaterial);
	DELE_PTR_FULL(BrushIndicatorMesh);
	DELE_PTR_FULL(PlaneTransformGizmo);
	DELE_PTR_FULL(PlaneTransformProxy);
}

void UMeshVertexSculptTool::AfterRead()
{
	UMeshSculptToolBase::AfterRead();

	READ_PTR_FULL(SculptProperties, UVertexBrushSculptProperties);
	READ_PTR_FULL(DynamicMeshComponent, USimpleDynamicMeshComponent);
}

void UMeshVertexSculptTool::BeforeDelete()
{
	UMeshSculptToolBase::BeforeDelete();

	DELE_PTR_FULL(SculptProperties);
	DELE_PTR_FULL(DynamicMeshComponent);
}

void UMirrorToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UMirrorToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UMirrorToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMirrorToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMirrorOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(MirrorTool, UMirrorTool);
}

void UMirrorOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(MirrorTool);
}

// Function MeshModelingTools.MirrorToolActionPropertySet.Up
// ()
void UMirrorToolActionPropertySet::Up()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Up"));

	UMirrorToolActionPropertySet_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
// ()
void UMirrorToolActionPropertySet::ShiftToCenter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter"));

	UMirrorToolActionPropertySet_ShiftToCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Right
// ()
void UMirrorToolActionPropertySet::Right()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Right"));

	UMirrorToolActionPropertySet_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Left
// ()
void UMirrorToolActionPropertySet::Left()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Left"));

	UMirrorToolActionPropertySet_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Forward
// ()
void UMirrorToolActionPropertySet::Forward()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Forward"));

	UMirrorToolActionPropertySet_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Down
// ()
void UMirrorToolActionPropertySet::Down()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Down"));

	UMirrorToolActionPropertySet_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Backward
// ()
void UMirrorToolActionPropertySet::Backward()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MirrorToolActionPropertySet.Backward"));

	UMirrorToolActionPropertySet_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMirrorToolActionPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMirrorToolActionPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMirrorTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UMirrorToolProperties);
	READ_PTR_FULL(ToolActions, UMirrorToolActionPropertySet);
	READ_PTR_FULL(PlaneMechanic, UConstructionPlaneMechanic);
}

void UMirrorTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(ToolActions);
	DELE_PTR_FULL(PlaneMechanic);
}

void UOffsetMeshToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UOffsetMeshToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UOffsetWeightMapSetProperties::AfterRead()
{
	UWeightMapSetProperties::AfterRead();

}

void UOffsetWeightMapSetProperties::BeforeDelete()
{
	UWeightMapSetProperties::BeforeDelete();

}

void UIterativeOffsetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UIterativeOffsetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UImplicitOffsetProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UImplicitOffsetProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UOffsetMeshTool::AfterRead()
{
	UBaseMeshProcessingTool::AfterRead();

	READ_PTR_FULL(OffsetProperties, UOffsetMeshToolProperties);
	READ_PTR_FULL(IterativeProperties, UIterativeOffsetProperties);
	READ_PTR_FULL(ImplicitProperties, UImplicitOffsetProperties);
	READ_PTR_FULL(WeightMapProperties, UOffsetWeightMapSetProperties);
}

void UOffsetMeshTool::BeforeDelete()
{
	UBaseMeshProcessingTool::BeforeDelete();

	DELE_PTR_FULL(OffsetProperties);
	DELE_PTR_FULL(IterativeProperties);
	DELE_PTR_FULL(ImplicitProperties);
	DELE_PTR_FULL(WeightMapProperties);
}

void UOffsetMeshToolBuilder::AfterRead()
{
	UBaseMeshProcessingToolBuilder::AfterRead();

}

void UOffsetMeshToolBuilder::BeforeDelete()
{
	UBaseMeshProcessingToolBuilder::BeforeDelete();

}

void UPhysicsInspectorToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UPhysicsInspectorToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UPhysicsInspectorTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(VizSettings, UCollisionGeometryVisualizationProperties);
	READ_PTR_FULL(LineMaterial, UMaterialInterface);
}

void UPhysicsInspectorTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(VizSettings);
	DELE_PTR_FULL(LineMaterial);
}

void UPlaneCutToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UPlaneCutToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UAcceptOutputProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UAcceptOutputProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPlaneCutToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UPlaneCutToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UPlaneCutOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CutTool, UPlaneCutTool);
}

void UPlaneCutOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CutTool);
}

// Function MeshModelingTools.PlaneCutTool.Cut
// ()
void UPlaneCutTool::Cut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.PlaneCutTool.Cut"));

	UPlaneCutTool_Cut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPlaneCutTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, UPlaneCutToolProperties);
	READ_PTR_FULL(AcceptProperties, UAcceptOutputProperties);
	READ_PTR_FULL(PlaneTransformGizmo, UTransformGizmo);
	READ_PTR_FULL(PlaneTransformProxy, UTransformProxy);
}

void UPlaneCutTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(AcceptProperties);
	DELE_PTR_FULL(PlaneTransformGizmo);
	DELE_PTR_FULL(PlaneTransformProxy);
}

void UPositionPlaneGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UPositionPlaneGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UPositionPlaneGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

	READ_PTR_FULL(CenterBallShape, UPreviewMesh);
	READ_PTR_FULL(CenterBallMaterial, UMaterialInstance);
}

void UPositionPlaneGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

	DELE_PTR_FULL(CenterBallShape);
	DELE_PTR_FULL(CenterBallMaterial);
}

void UPositionPlaneOnSceneInputBehavior::AfterRead()
{
	UAnyButtonInputBehavior::AfterRead();

}

void UPositionPlaneOnSceneInputBehavior::BeforeDelete()
{
	UAnyButtonInputBehavior::BeforeDelete();

}

void UProjectToTargetToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UProjectToTargetToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void URemeshMeshToolProperties::AfterRead()
{
	URemeshProperties::AfterRead();

}

void URemeshMeshToolProperties::BeforeDelete()
{
	URemeshProperties::BeforeDelete();

}

void UProjectToTargetToolProperties::AfterRead()
{
	URemeshMeshToolProperties::AfterRead();

}

void UProjectToTargetToolProperties::BeforeDelete()
{
	URemeshMeshToolProperties::BeforeDelete();

}

void URemeshMeshTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, URemeshMeshToolProperties);
	READ_PTR_FULL(MeshStatisticsProperties, UMeshStatisticsProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void URemeshMeshTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(MeshStatisticsProperties);
	DELE_PTR_FULL(Preview);
}

void UProjectToTargetTool::AfterRead()
{
	URemeshMeshTool::AfterRead();

}

void UProjectToTargetTool::BeforeDelete()
{
	URemeshMeshTool::BeforeDelete();

}

void URemeshMeshToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void URemeshMeshToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void URemoveOccludedTrianglesToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void URemoveOccludedTrianglesToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void URemoveOccludedTrianglesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void URemoveOccludedTrianglesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void URemoveOccludedTrianglesAdvancedProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void URemoveOccludedTrianglesAdvancedProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void URemoveOccludedTrianglesOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Tool, URemoveOccludedTrianglesTool);
}

void URemoveOccludedTrianglesOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Tool);
}

void URemoveOccludedTrianglesTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, URemoveOccludedTrianglesToolProperties);
	READ_PTR_FULL(AdvancedProperties, URemoveOccludedTrianglesAdvancedProperties);
}

void URemoveOccludedTrianglesTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(AdvancedProperties);
}

void URevolveBoundaryToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void URevolveBoundaryToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void URevolveBoundaryOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RevolveBoundaryTool, URevolveBoundaryTool);
}

void URevolveBoundaryOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RevolveBoundaryTool);
}

void URevolveBoundaryToolProperties::AfterRead()
{
	URevolveProperties::AfterRead();

}

void URevolveBoundaryToolProperties::BeforeDelete()
{
	URevolveProperties::BeforeDelete();

}

void UMeshBoundaryToolBase::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(SelectionMechanic, UPolygonSelectionMechanic);
	READ_PTR_FULL(LoopSelectClickBehavior, USingleClickInputBehavior);
}

void UMeshBoundaryToolBase::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(SelectionMechanic);
	DELE_PTR_FULL(LoopSelectClickBehavior);
}

void URevolveBoundaryTool::AfterRead()
{
	UMeshBoundaryToolBase::AfterRead();

	READ_PTR_FULL(Settings, URevolveBoundaryToolProperties);
	READ_PTR_FULL(MaterialProperties, UNewMeshMaterialProperties);
	READ_PTR_FULL(PlaneMechanic, UConstructionPlaneMechanic);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void URevolveBoundaryTool::BeforeDelete()
{
	UMeshBoundaryToolBase::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(MaterialProperties);
	DELE_PTR_FULL(PlaneMechanic);
	DELE_PTR_FULL(Preview);
}

void USeamSculptToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void USeamSculptToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void USeamSculptToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USeamSculptToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDynamicMeshBrushTool::AfterRead()
{
	UBaseBrushTool::AfterRead();

	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
}

void UDynamicMeshBrushTool::BeforeDelete()
{
	UBaseBrushTool::BeforeDelete();

	DELE_PTR_FULL(PreviewMesh);
}

void USeamSculptTool::AfterRead()
{
	UDynamicMeshBrushTool::AfterRead();

	READ_PTR_FULL(Settings, USeamSculptToolProperties);
	READ_PTR_FULL(PreviewGeom, UPreviewGeometry);
}

void USeamSculptTool::BeforeDelete()
{
	UDynamicMeshBrushTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(PreviewGeom);
}

void USelfUnionMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USelfUnionMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void USelfUnionMeshesTool::AfterRead()
{
	UBaseCreateFromSelectedTool::AfterRead();

	READ_PTR_FULL(Properties, USelfUnionMeshesToolProperties);
	READ_PTR_FULL(DrawnLineSet, ULineSetComponent);
}

void USelfUnionMeshesTool::BeforeDelete()
{
	UBaseCreateFromSelectedTool::BeforeDelete();

	DELE_PTR_FULL(Properties);
	DELE_PTR_FULL(DrawnLineSet);
}

void USelfUnionMeshesToolBuilder::AfterRead()
{
	UBaseCreateFromSelectedToolBuilder::AfterRead();

}

void USelfUnionMeshesToolBuilder::BeforeDelete()
{
	UBaseCreateFromSelectedToolBuilder::BeforeDelete();

}

void USetCollisionGeometryToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void USetCollisionGeometryToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void USetCollisionGeometryToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USetCollisionGeometryToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void USetCollisionGeometryTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, USetCollisionGeometryToolProperties);
	READ_PTR_FULL(VizSettings, UCollisionGeometryVisualizationProperties);
	READ_PTR_FULL(CollisionProps, UPhysicsObjectToolPropertySet);
	READ_PTR_FULL(LineMaterial, UMaterialInterface);
	READ_PTR_FULL(PreviewGeom, UPreviewGeometry);
}

void USetCollisionGeometryTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(VizSettings);
	DELE_PTR_FULL(CollisionProps);
	DELE_PTR_FULL(LineMaterial);
	DELE_PTR_FULL(PreviewGeom);
}

void USmoothMeshToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USmoothMeshToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UIterativeSmoothProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UIterativeSmoothProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UDiffusionSmoothProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UDiffusionSmoothProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UImplicitSmoothProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UImplicitSmoothProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void USmoothWeightMapSetProperties::AfterRead()
{
	UWeightMapSetProperties::AfterRead();

}

void USmoothWeightMapSetProperties::BeforeDelete()
{
	UWeightMapSetProperties::BeforeDelete();

}

void USmoothMeshTool::AfterRead()
{
	UBaseMeshProcessingTool::AfterRead();

	READ_PTR_FULL(SmoothProperties, USmoothMeshToolProperties);
	READ_PTR_FULL(IterativeProperties, UIterativeSmoothProperties);
	READ_PTR_FULL(DiffusionProperties, UDiffusionSmoothProperties);
	READ_PTR_FULL(ImplicitProperties, UImplicitSmoothProperties);
	READ_PTR_FULL(WeightMapProperties, USmoothWeightMapSetProperties);
}

void USmoothMeshTool::BeforeDelete()
{
	UBaseMeshProcessingTool::BeforeDelete();

	DELE_PTR_FULL(SmoothProperties);
	DELE_PTR_FULL(IterativeProperties);
	DELE_PTR_FULL(DiffusionProperties);
	DELE_PTR_FULL(ImplicitProperties);
	DELE_PTR_FULL(WeightMapProperties);
}

void USmoothMeshToolBuilder::AfterRead()
{
	UBaseMeshProcessingToolBuilder::AfterRead();

}

void USmoothMeshToolBuilder::BeforeDelete()
{
	UBaseMeshProcessingToolBuilder::BeforeDelete();

}

void UTransformMeshesToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UTransformMeshesToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UTransformMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UTransformMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UTransformMeshesTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(TransformProps, UTransformMeshesToolProperties);
}

void UTransformMeshesTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(TransformProps);
}

void UUVProjectionToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UUVProjectionToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UUVProjectionToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UUVProjectionToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UUVProjectionAdvancedProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UUVProjectionAdvancedProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UUVProjectionOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Tool, UUVProjectionTool);
}

void UUVProjectionOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Tool);
}

void UGroupEdgeInsertionOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Tool, UGroupEdgeInsertionTool);
}

void UGroupEdgeInsertionOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Tool);
}

void UGroupEdgeInsertionTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UGroupEdgeInsertionProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
}

void UGroupEdgeInsertionTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(Preview);
}

void UHoleFillToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UHoleFillToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void USmoothHoleFillProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USmoothHoleFillProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UHoleFillToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UHoleFillToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

// Function MeshModelingTools.HoleFillToolActions.SelectAll
// ()
void UHoleFillToolActions::SelectAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.HoleFillToolActions.SelectAll"));

	UHoleFillToolActions_SelectAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.HoleFillToolActions.Clear
// ()
void UHoleFillToolActions::Clear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.HoleFillToolActions.Clear"));

	UHoleFillToolActions_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UHoleFillToolActions::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UHoleFillToolActions::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UHoleFillStatisticsProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UHoleFillStatisticsProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UHoleFillOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(FillTool, UHoleFillTool);
}

void UHoleFillOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(FillTool);
}

void UHoleFillTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(SmoothHoleFillProperties, USmoothHoleFillProperties);
	READ_PTR_FULL(Properties, UHoleFillToolProperties);
	READ_PTR_FULL(Actions, UHoleFillToolActions);
	READ_PTR_FULL(Statistics, UHoleFillStatisticsProperties);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
	READ_PTR_FULL(SelectionMechanic, UPolygonSelectionMechanic);
}

void UHoleFillTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(SmoothHoleFillProperties);
	DELE_PTR_FULL(Properties);
	DELE_PTR_FULL(Actions);
	DELE_PTR_FULL(Statistics);
	DELE_PTR_FULL(Preview);
	DELE_PTR_FULL(SelectionMechanic);
}

void UMeshSculptBrushOpProps::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshSculptBrushOpProps::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UBaseKelvinletBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UBaseKelvinletBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UScaleKelvinletBrushOpProps::AfterRead()
{
	UBaseKelvinletBrushOpProps::AfterRead();

}

void UScaleKelvinletBrushOpProps::BeforeDelete()
{
	UBaseKelvinletBrushOpProps::BeforeDelete();

}

void UPullKelvinletBrushOpProps::AfterRead()
{
	UBaseKelvinletBrushOpProps::AfterRead();

}

void UPullKelvinletBrushOpProps::BeforeDelete()
{
	UBaseKelvinletBrushOpProps::BeforeDelete();

}

void USharpPullKelvinletBrushOpProps::AfterRead()
{
	UBaseKelvinletBrushOpProps::AfterRead();

}

void USharpPullKelvinletBrushOpProps::BeforeDelete()
{
	UBaseKelvinletBrushOpProps::BeforeDelete();

}

void UTwistKelvinletBrushOpProps::AfterRead()
{
	UBaseKelvinletBrushOpProps::AfterRead();

}

void UTwistKelvinletBrushOpProps::BeforeDelete()
{
	UBaseKelvinletBrushOpProps::BeforeDelete();

}

void UMeshAnalysisProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshAnalysisProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshAttributePaintToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UMeshAttributePaintToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UMeshAttributePaintToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshAttributePaintToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshAttributePaintEditActions::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshAttributePaintEditActions::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshAttributePaintTool::AfterRead()
{
	UDynamicMeshBrushTool::AfterRead();

	READ_PTR_FULL(AttribProps, UMeshAttributePaintToolProperties);
}

void UMeshAttributePaintTool::BeforeDelete()
{
	UDynamicMeshBrushTool::BeforeDelete();

	DELE_PTR_FULL(AttribProps);
}

void UInflateBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UInflateBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UMeshInspectorToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UMeshInspectorToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UMeshInspectorProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshInspectorProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshInspectorTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

	READ_PTR_FULL(Settings, UMeshInspectorProperties);
	READ_PTR_FULL(MaterialSettings, UExistingMeshMaterialProperties);
	READ_PTR_FULL(PreviewMesh, UPreviewMesh);
	READ_PTR_FULL(DrawnLineSet, ULineSetComponent);
	READ_PTR_FULL(DefaultMaterial, UMaterialInterface);
}

void UMeshInspectorTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(MaterialSettings);
	DELE_PTR_FULL(PreviewMesh);
	DELE_PTR_FULL(DrawnLineSet);
	DELE_PTR_FULL(DefaultMaterial);
}

void UNewMeshMaterialProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UNewMeshMaterialProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UExistingMeshMaterialProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

	READ_PTR_FULL(OverrideMaterial, UMaterialInterface);
	READ_PTR_FULL(CheckerMaterial, UMaterialInstanceDynamic);
}

void UExistingMeshMaterialProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

	DELE_PTR_FULL(OverrideMaterial);
	DELE_PTR_FULL(CheckerMaterial);
}

void UMeshEditingViewProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

	READ_PTR_FULL(Image, UTexture2D);
}

void UMeshEditingViewProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

	DELE_PTR_FULL(Image);
}

void UMoveBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UMoveBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UPinchBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UPinchBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UBasePlaneBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UBasePlaneBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UPlaneBrushOpProps::AfterRead()
{
	UBasePlaneBrushOpProps::AfterRead();

}

void UPlaneBrushOpProps::BeforeDelete()
{
	UBasePlaneBrushOpProps::BeforeDelete();

}

void UViewAlignedPlaneBrushOpProps::AfterRead()
{
	UBasePlaneBrushOpProps::AfterRead();

}

void UViewAlignedPlaneBrushOpProps::BeforeDelete()
{
	UBasePlaneBrushOpProps::BeforeDelete();

}

void UFixedPlaneBrushOpProps::AfterRead()
{
	UBasePlaneBrushOpProps::AfterRead();

}

void UFixedPlaneBrushOpProps::BeforeDelete()
{
	UBasePlaneBrushOpProps::BeforeDelete();

}

void UStandardSculptBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UStandardSculptBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UViewAlignedSculptBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UViewAlignedSculptBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void USculptMaxBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void USculptMaxBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void USculptBrushProperties::AfterRead()
{
	UBrushBaseProperties::AfterRead();

}

void USculptBrushProperties::BeforeDelete()
{
	UBrushBaseProperties::BeforeDelete();

}

void UKelvinBrushProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UKelvinBrushProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UWorkPlaneProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UWorkPlaneProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void USculptMaxBrushProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void USculptMaxBrushProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshSelectionToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UMeshSelectionToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UMeshSelectionToolActionPropertySet::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshSelectionToolActionPropertySet::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

// Function MeshModelingTools.MeshSelectionEditActions.Shrink
// ()
void UMeshSelectionEditActions::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.Shrink"));

	UMeshSelectionEditActions_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
// ()
void UMeshSelectionEditActions::SelectLargestComponentByTriCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount"));

	UMeshSelectionEditActions_SelectLargestComponentByTriCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
// ()
void UMeshSelectionEditActions::SelectLargestComponentByArea()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea"));

	UMeshSelectionEditActions_SelectLargestComponentByArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectAll
// ()
void UMeshSelectionEditActions::SelectAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.SelectAll"));

	UMeshSelectionEditActions_SelectAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
// ()
void UMeshSelectionEditActions::OptimizeSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection"));

	UMeshSelectionEditActions_OptimizeSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.Invert
// ()
void UMeshSelectionEditActions::Invert()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.Invert"));

	UMeshSelectionEditActions_Invert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.Grow
// ()
void UMeshSelectionEditActions::Grow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.Grow"));

	UMeshSelectionEditActions_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
// ()
void UMeshSelectionEditActions::ExpandToConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected"));

	UMeshSelectionEditActions_ExpandToConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionEditActions.Clear
// ()
void UMeshSelectionEditActions::Clear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionEditActions.Clear"));

	UMeshSelectionEditActions_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMeshSelectionEditActions::AfterRead()
{
	UMeshSelectionToolActionPropertySet::AfterRead();

}

void UMeshSelectionEditActions::BeforeDelete()
{
	UMeshSelectionToolActionPropertySet::BeforeDelete();

}

// Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
// ()
void UMeshSelectionMeshEditActions::SeparateTriangles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles"));

	UMeshSelectionMeshEditActions_SeparateTriangles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
// ()
void UMeshSelectionMeshEditActions::FlipNormals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals"));

	UMeshSelectionMeshEditActions_FlipNormals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
// ()
void UMeshSelectionMeshEditActions::DisconnectTriangles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles"));

	UMeshSelectionMeshEditActions_DisconnectTriangles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
// ()
void UMeshSelectionMeshEditActions::DeleteTriangles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles"));

	UMeshSelectionMeshEditActions_DeleteTriangles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
// ()
void UMeshSelectionMeshEditActions::CreatePolygroup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup"));

	UMeshSelectionMeshEditActions_CreatePolygroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMeshSelectionMeshEditActions::AfterRead()
{
	UMeshSelectionToolActionPropertySet::AfterRead();

}

void UMeshSelectionMeshEditActions::BeforeDelete()
{
	UMeshSelectionToolActionPropertySet::BeforeDelete();

}

void UMeshSelectionToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshSelectionToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshSelectionTool::AfterRead()
{
	UDynamicMeshBrushTool::AfterRead();

	READ_PTR_FULL(SelectionProps, UMeshSelectionToolProperties);
	READ_PTR_FULL(SelectionActions, UMeshSelectionEditActions);
	READ_PTR_FULL(EditActions, UMeshSelectionToolActionPropertySet);
	READ_PTR_FULL(Selection, UMeshSelectionSet);
}

void UMeshSelectionTool::BeforeDelete()
{
	UDynamicMeshBrushTool::BeforeDelete();

	DELE_PTR_FULL(SelectionProps);
	DELE_PTR_FULL(SelectionActions);
	DELE_PTR_FULL(EditActions);
	DELE_PTR_FULL(Selection);
}

void UBaseSmoothBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UBaseSmoothBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void USmoothBrushOpProps::AfterRead()
{
	UBaseSmoothBrushOpProps::AfterRead();

}

void USmoothBrushOpProps::BeforeDelete()
{
	UBaseSmoothBrushOpProps::BeforeDelete();

}

void USecondarySmoothBrushOpProps::AfterRead()
{
	UBaseSmoothBrushOpProps::AfterRead();

}

void USecondarySmoothBrushOpProps::BeforeDelete()
{
	UBaseSmoothBrushOpProps::BeforeDelete();

}

void USmoothFillBrushOpProps::AfterRead()
{
	UBaseSmoothBrushOpProps::AfterRead();

}

void USmoothFillBrushOpProps::BeforeDelete()
{
	UBaseSmoothBrushOpProps::BeforeDelete();

}

void UFlattenBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UFlattenBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UEraseBrushOpProps::AfterRead()
{
	UMeshSculptBrushOpProps::AfterRead();

}

void UEraseBrushOpProps::BeforeDelete()
{
	UMeshSculptBrushOpProps::BeforeDelete();

}

void UMeshSpaceDeformerToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UMeshSpaceDeformerToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void USpaceDeformerOperatorFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SpaceDeformerTool, UMeshSpaceDeformerTool);
}

void USpaceDeformerOperatorFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SpaceDeformerTool);
}

void UMeshSpaceDeformerTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(StateTarget, UGizmoTransformChangeStateTarget);
	READ_PTR_FULL(Preview, UMeshOpPreviewWithBackgroundCompute);
	READ_PTR_FULL(IntervalGizmo, UIntervalGizmo);
	READ_PTR_FULL(TransformGizmo, UTransformGizmo);
	READ_PTR_FULL(TransformProxy, UTransformProxy);
	READ_PTR_FULL(UpIntervalSource, UGizmoLocalFloatParameterSource);
	READ_PTR_FULL(DownIntervalSource, UGizmoLocalFloatParameterSource);
	READ_PTR_FULL(ForwardIntervalSource, UGizmoLocalFloatParameterSource);
}

void UMeshSpaceDeformerTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(StateTarget);
	DELE_PTR_FULL(Preview);
	DELE_PTR_FULL(IntervalGizmo);
	DELE_PTR_FULL(TransformGizmo);
	DELE_PTR_FULL(TransformProxy);
	DELE_PTR_FULL(UpIntervalSource);
	DELE_PTR_FULL(DownIntervalSource);
	DELE_PTR_FULL(ForwardIntervalSource);
}

void UMeshStatisticsProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UMeshStatisticsProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UMeshVertexSculptToolBuilder::AfterRead()
{
	UMeshSurfacePointToolBuilder::AfterRead();

}

void UMeshVertexSculptToolBuilder::BeforeDelete()
{
	UMeshSurfacePointToolBuilder::BeforeDelete();

}

void UVertexBrushSculptProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UVertexBrushSculptProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UUVProjectionTool::AfterRead()
{
	UMultiSelectionTool::AfterRead();

	READ_PTR_FULL(BasicProperties, UUVProjectionToolProperties);
	READ_PTR_FULL(AdvancedProperties, UUVProjectionAdvancedProperties);
	READ_PTR_FULL(MaterialSettings, UExistingMeshMaterialProperties);
	READ_PTR_FULL(CheckerMaterial, UMaterialInstanceDynamic);
}

void UUVProjectionTool::BeforeDelete()
{
	UMultiSelectionTool::BeforeDelete();

	DELE_PTR_FULL(BasicProperties);
	DELE_PTR_FULL(AdvancedProperties);
	DELE_PTR_FULL(MaterialSettings);
	DELE_PTR_FULL(CheckerMaterial);
}

void UVoxelBlendMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UVoxelBlendMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UVoxelBlendMeshesTool::AfterRead()
{
	UBaseVoxelTool::AfterRead();

	READ_PTR_FULL(BlendProperties, UVoxelBlendMeshesToolProperties);
}

void UVoxelBlendMeshesTool::BeforeDelete()
{
	UBaseVoxelTool::BeforeDelete();

	DELE_PTR_FULL(BlendProperties);
}

void UVoxelBlendMeshesToolBuilder::AfterRead()
{
	UBaseCreateFromSelectedToolBuilder::AfterRead();

}

void UVoxelBlendMeshesToolBuilder::BeforeDelete()
{
	UBaseCreateFromSelectedToolBuilder::BeforeDelete();

}

void UVoxelMorphologyMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UVoxelMorphologyMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UVoxelMorphologyMeshesTool::AfterRead()
{
	UBaseVoxelTool::AfterRead();

	READ_PTR_FULL(MorphologyProperties, UVoxelMorphologyMeshesToolProperties);
}

void UVoxelMorphologyMeshesTool::BeforeDelete()
{
	UBaseVoxelTool::BeforeDelete();

	DELE_PTR_FULL(MorphologyProperties);
}

void UVoxelMorphologyMeshesToolBuilder::AfterRead()
{
	UBaseCreateFromSelectedToolBuilder::AfterRead();

}

void UVoxelMorphologyMeshesToolBuilder::BeforeDelete()
{
	UBaseCreateFromSelectedToolBuilder::BeforeDelete();

}

void UVoxelSolidifyMeshesToolProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UVoxelSolidifyMeshesToolProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UVoxelSolidifyMeshesTool::AfterRead()
{
	UBaseVoxelTool::AfterRead();

	READ_PTR_FULL(SolidifyProperties, UVoxelSolidifyMeshesToolProperties);
}

void UVoxelSolidifyMeshesTool::BeforeDelete()
{
	UBaseVoxelTool::BeforeDelete();

	DELE_PTR_FULL(SolidifyProperties);
}

void UVoxelSolidifyMeshesToolBuilder::AfterRead()
{
	UBaseCreateFromSelectedToolBuilder::AfterRead();

}

void UVoxelSolidifyMeshesToolBuilder::BeforeDelete()
{
	UBaseCreateFromSelectedToolBuilder::BeforeDelete();

}

void UWeldMeshEdgesToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UWeldMeshEdgesToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UWeldMeshEdgesTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

}

void UWeldMeshEdgesTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
