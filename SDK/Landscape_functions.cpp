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

void FLandscapeMaterialTextureStreamingInfo::AfterRead()
{
}

void FLandscapeMaterialTextureStreamingInfo::BeforeDelete()
{
}

void FLandscapeProxyMaterialOverride::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FLandscapeProxyMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FLandscapeImportLayerInfo::AfterRead()
{
}

void FLandscapeImportLayerInfo::BeforeDelete()
{
}

void FLandscapeLayerStruct::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeLayerStruct::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FLandscapeEditorLayerSettings::AfterRead()
{
}

void FLandscapeEditorLayerSettings::BeforeDelete()
{
}

void FForeignWorldSplineData::AfterRead()
{
}

void FForeignWorldSplineData::BeforeDelete()
{
}

void FForeignSplineSegmentData::AfterRead()
{
}

void FForeignSplineSegmentData::BeforeDelete()
{
}

void FForeignControlPointData::AfterRead()
{
}

void FForeignControlPointData::BeforeDelete()
{
}

void FLandscapeSplineMeshEntry::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMesh);
}

void FLandscapeSplineMeshEntry::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void FLandscapeLayerBrush::AfterRead()
{
}

void FLandscapeLayerBrush::BeforeDelete()
{
}

void FLandscapeLayer::AfterRead()
{
}

void FLandscapeLayer::BeforeDelete()
{
}

void FHeightmapData::AfterRead()
{
	READ_PTR_FULL(Texture, UTexture2D);
}

void FHeightmapData::BeforeDelete()
{
	DELE_PTR_FULL(Texture);
}

void FWeightmapLayerAllocationInfo::AfterRead()
{
	READ_PTR_FULL(LayerInfo, ULandscapeLayerInfoObject);
}

void FWeightmapLayerAllocationInfo::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfo);
}

void FWeightmapData::AfterRead()
{
}

void FWeightmapData::BeforeDelete()
{
}

void FLandscapeLayerComponentData::AfterRead()
{
}

void FLandscapeLayerComponentData::BeforeDelete()
{
}

void FLandscapeEditToolRenderData::AfterRead()
{
	READ_PTR_FULL(ToolMaterial, UMaterialInterface);
	READ_PTR_FULL(GizmoMaterial, UMaterialInterface);
	READ_PTR_FULL(DataTexture, UTexture2D);
	READ_PTR_FULL(LayerContributionTexture, UTexture2D);
	READ_PTR_FULL(DirtyTexture, UTexture2D);
}

void FLandscapeEditToolRenderData::BeforeDelete()
{
	DELE_PTR_FULL(ToolMaterial);
	DELE_PTR_FULL(GizmoMaterial);
	DELE_PTR_FULL(DataTexture);
	DELE_PTR_FULL(LayerContributionTexture);
	DELE_PTR_FULL(DirtyTexture);
}

void FGizmoSelectData::AfterRead()
{
}

void FGizmoSelectData::BeforeDelete()
{
}

void FGrassVariety::AfterRead()
{
	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void FGrassVariety::BeforeDelete()
{
	DELE_PTR_FULL(GrassMesh);
}

void FLandscapeInfoLayerSettings::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeInfoLayerSettings::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FGrassInput::AfterRead()
{
	READ_PTR_FULL(GrassType, ULandscapeGrassType);
}

void FGrassInput::BeforeDelete()
{
	DELE_PTR_FULL(GrassType);
}

void FLayerBlendInput::AfterRead()
{
}

void FLayerBlendInput::BeforeDelete()
{
}

void FPhysicalMaterialInput::AfterRead()
{
	READ_PTR_FULL(PhysicalMaterial, UPhysicalMaterial);
}

void FPhysicalMaterialInput::BeforeDelete()
{
	DELE_PTR_FULL(PhysicalMaterial);
}

void FLandscapeComponentMaterialOverride::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FLandscapeComponentMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FLandscapeSplineConnection::AfterRead()
{
	READ_PTR_FULL(Segment, ULandscapeSplineSegment);
}

void FLandscapeSplineConnection::BeforeDelete()
{
	DELE_PTR_FULL(Segment);
}

void FLandscapeSplineInterpPoint::AfterRead()
{
}

void FLandscapeSplineInterpPoint::BeforeDelete()
{
}

void FLandscapeSplineSegmentConnection::AfterRead()
{
	READ_PTR_FULL(ControlPoint, ULandscapeSplineControlPoint);
}

void FLandscapeSplineSegmentConnection::BeforeDelete()
{
	DELE_PTR_FULL(ControlPoint);
}

void AControlPointMeshActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ControlPointMeshComponent, UControlPointMeshComponent);
}

void AControlPointMeshActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ControlPointMeshComponent);
}

void UControlPointMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UControlPointMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// ()
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue"));

	ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// ()
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue"));

	ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// ()
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue"));

	ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
// ()
// Parameters:
// class UTextureRenderTarget2D*  InRenderTarget                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InExportHeightIntoRGChannel    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InExportLandscapeProxies       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget"));

	ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params params;
	params.InRenderTarget = InRenderTarget;
	params.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
	params.InExportLandscapeProxies = InExportLandscapeProxies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// ()
// Parameters:
// class UMaterialInterface*      NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial"));

	ALandscapeProxy_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.EditorApplySpline
// ()
// Parameters:
// class USplineComponent*        InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   EditLayerName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const struct FName& EditLayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.EditorApplySpline"));

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;
	params.EditLayerName = EditLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// bool                           InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff"));

	ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// float                          InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff"));

	ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// ()
// Parameters:
// float                          InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize"));

	ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// ()
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor"));

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// ()
// Parameters:
// float                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections"));

	ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALandscapeProxy::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SplineComponent, ULandscapeSplinesComponent);
	READ_PTR_FULL(DefaultPhysMaterial, UPhysicalMaterial);
	READ_PTR_FULL(LandscapeMaterial, UMaterialInterface);
	READ_PTR_FULL(LandscapeHoleMaterial, UMaterialInterface);
}

void ALandscapeProxy::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SplineComponent);
	DELE_PTR_FULL(DefaultPhysMaterial);
	DELE_PTR_FULL(LandscapeMaterial);
	DELE_PTR_FULL(LandscapeHoleMaterial);
}

void ALandscape::AfterRead()
{
	ALandscapeProxy::AfterRead();

}

void ALandscape::BeforeDelete()
{
	ALandscapeProxy::BeforeDelete();

}

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// ()
void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate"));

	ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.Render
// ()
// Parameters:
// bool                           InIsHeightmap                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  InCombinedResult               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   InWeightmapLayerName           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeBlueprintBrushBase.Render"));

	ALandscapeBlueprintBrushBase_Render_Params params;
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;
	params.InWeightmapLayerName = InWeightmapLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// ()
// Parameters:
// struct FTransform              InLandscapeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint               InLandscapeSize                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint               InLandscapeRenderTargetSize    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeBlueprintBrushBase.Initialize"));

	ALandscapeBlueprintBrushBase_Initialize_Params params;
	params.InLandscapeTransform = InLandscapeTransform;
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// ()
// Parameters:
// TArray<class UObject*>         OutStreamableAssets            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies"));

	ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStreamableAssets != nullptr)
		*OutStreamableAssets = params.OutStreamableAssets;

}


void ALandscapeBlueprintBrushBase::AfterRead()
{
	AActor::AfterRead();

}

void ALandscapeBlueprintBrushBase::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ULandscapeLODStreamingProxy::AfterRead()
{
	UStreamableRenderAsset::AfterRead();

}

void ULandscapeLODStreamingProxy::BeforeDelete()
{
	UStreamableRenderAsset::BeforeDelete();

}

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// ()
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic"));

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// ()
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   InPaintLayerName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation"));

	ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params;
	params.InLocation = InLocation;
	params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// ()
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation"));

	ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params;
	params.InLocation = InLocation;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULandscapeComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(OverrideMaterial, UMaterialInterface);
	READ_PTR_FULL(OverrideHoleMaterial, UMaterialInterface);
	READ_PTR_FULL(XYOffsetmapTexture, UTexture2D);
	READ_PTR_FULL(HeightmapTexture, UTexture2D);
	READ_PTR_FULL(LODStreamingProxy, ULandscapeLODStreamingProxy);
	READ_PTR_FULL(GIBakedBaseColorTexture, UTexture2D);
	READ_PTR_FULL(MobileMaterialInterface, UMaterialInterface);
}

void ULandscapeComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(OverrideMaterial);
	DELE_PTR_FULL(OverrideHoleMaterial);
	DELE_PTR_FULL(XYOffsetmapTexture);
	DELE_PTR_FULL(HeightmapTexture);
	DELE_PTR_FULL(LODStreamingProxy);
	DELE_PTR_FULL(GIBakedBaseColorTexture);
	DELE_PTR_FULL(MobileMaterialInterface);
}

void ALandscapeGizmoActor::AfterRead()
{
	AActor::AfterRead();

}

void ALandscapeGizmoActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ALandscapeGizmoActiveActor::AfterRead()
{
	ALandscapeGizmoActor::AfterRead();

}

void ALandscapeGizmoActiveActor::BeforeDelete()
{
	ALandscapeGizmoActor::BeforeDelete();

}

void ULandscapeGizmoRenderComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeGizmoRenderComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeGrassType::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void ULandscapeGrassType::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GrassMesh);
}

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// ()
// Parameters:
// class ULandscapeComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent"));

	ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULandscapeHeightfieldCollisionComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeHeightfieldCollisionComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeInfo::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfo::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeInfoMap::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfoMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeLayerInfoObject::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PhysMaterial, UPhysicalMaterial);
}

void ULandscapeLayerInfoObject::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PhysMaterial);
}

void ULandscapeMaterialInstanceConstant::AfterRead()
{
	UMaterialInstanceConstant::AfterRead();

}

void ULandscapeMaterialInstanceConstant::BeforeDelete()
{
	UMaterialInstanceConstant::BeforeDelete();

}

void ULandscapeMeshCollisionComponent::AfterRead()
{
	ULandscapeHeightfieldCollisionComponent::AfterRead();

}

void ULandscapeMeshCollisionComponent::BeforeDelete()
{
	ULandscapeHeightfieldCollisionComponent::BeforeDelete();

}

void ALandscapeMeshProxyActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(LandscapeMeshProxyComponent, ULandscapeMeshProxyComponent);
}

void ALandscapeMeshProxyActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(LandscapeMeshProxyComponent);
}

void ULandscapeMeshProxyComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void ULandscapeMeshProxyComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void ULandscapeSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void ULandscapeSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// ()
// Parameters:
// TArray<class USplineMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents"));

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULandscapeSplinesComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeSplinesComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeSplineControlPoint::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(LocalMeshComponent, UControlPointMeshComponent);
}

void ULandscapeSplineControlPoint::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(LocalMeshComponent);
}

void ULandscapeSplineSegment::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeSplineSegment::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ALandscapeStreamingProxy::AfterRead()
{
	ALandscapeProxy::AfterRead();

}

void ALandscapeStreamingProxy::BeforeDelete()
{
	ALandscapeProxy::BeforeDelete();

}

void ULandscapeSubsystem::AfterRead()
{
	UWorldSubsystem::AfterRead();

}

void ULandscapeSubsystem::BeforeDelete()
{
	UWorldSubsystem::BeforeDelete();

}

void ULandscapeWeightmapUsage::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ChannelUsage[0x4], ULandscapeComponent);
}

void ULandscapeWeightmapUsage::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ChannelUsage[0x4]);
}

void UMaterialExpressionLandscapeGrassOutput::AfterRead()
{
	UMaterialExpressionCustomOutput::AfterRead();

}

void UMaterialExpressionLandscapeGrassOutput::BeforeDelete()
{
	UMaterialExpressionCustomOutput::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerBlend::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerBlend::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerCoords::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerCoords::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSample::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSample::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSwitch::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSwitch::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerWeight::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerWeight::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapePhysicalMaterialOutput::AfterRead()
{
	UMaterialExpressionCustomOutput::AfterRead();

}

void UMaterialExpressionLandscapePhysicalMaterialOutput::BeforeDelete()
{
	UMaterialExpressionCustomOutput::BeforeDelete();

}

void UMaterialExpressionLandscapeVisibilityMask::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeVisibilityMask::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
