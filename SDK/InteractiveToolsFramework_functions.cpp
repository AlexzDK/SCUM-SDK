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

void FGizmoFloatParameterChange::AfterRead()
{
}

void FGizmoFloatParameterChange::BeforeDelete()
{
}

void FGizmoVec2ParameterChange::AfterRead()
{
}

void FGizmoVec2ParameterChange::BeforeDelete()
{
}

void FBrushStampData::AfterRead()
{
}

void FBrushStampData::BeforeDelete()
{
}

void FBehaviorInfo::AfterRead()
{
	READ_PTR_FULL(Behavior, UInputBehavior);
}

void FBehaviorInfo::BeforeDelete()
{
	DELE_PTR_FULL(Behavior);
}

void FActiveGizmo::AfterRead()
{
}

void FActiveGizmo::BeforeDelete()
{
}

void FInputRayHit::AfterRead()
{
}

void FInputRayHit::BeforeDelete()
{
}

void UInteractiveToolBuilder::AfterRead()
{
	UObject::AfterRead();

}

void UInteractiveToolBuilder::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UInteractiveToolPropertySet::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CachedProperties, UInteractiveToolPropertySet);
}

void UInteractiveToolPropertySet::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CachedProperties);
}

void UInteractiveTool::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(InputBehaviors, UInputBehaviorSet);
}

void UInteractiveTool::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(InputBehaviors);
}

void UMultiSelectionTool::AfterRead()
{
	UInteractiveTool::AfterRead();

}

void UMultiSelectionTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

}

void USingleSelectionTool::AfterRead()
{
	UInteractiveTool::AfterRead();

}

void USingleSelectionTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

}

void UInteractionMechanic::AfterRead()
{
	UObject::AfterRead();

}

void UInteractionMechanic::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USingleClickTool::AfterRead()
{
	UInteractiveTool::AfterRead();

}

void USingleClickTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

}

void UMeshSurfacePointToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UMeshSurfacePointToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UMeshSurfacePointTool::AfterRead()
{
	USingleSelectionTool::AfterRead();

}

void UMeshSurfacePointTool::BeforeDelete()
{
	USingleSelectionTool::BeforeDelete();

}

void UBaseBrushTool::AfterRead()
{
	UMeshSurfacePointTool::AfterRead();

	READ_PTR_FULL(BrushProperties, UBrushBaseProperties);
	READ_PTR_FULL(BrushStampIndicator, UBrushStampIndicator);
}

void UBaseBrushTool::BeforeDelete()
{
	UMeshSurfacePointTool::BeforeDelete();

	DELE_PTR_FULL(BrushProperties);
	DELE_PTR_FULL(BrushStampIndicator);
}

void UBrushBaseProperties::AfterRead()
{
	UInteractiveToolPropertySet::AfterRead();

}

void UBrushBaseProperties::BeforeDelete()
{
	UInteractiveToolPropertySet::BeforeDelete();

}

void UInteractiveGizmoBuilder::AfterRead()
{
	UObject::AfterRead();

}

void UInteractiveGizmoBuilder::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAxisAngleGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UAxisAngleGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UInteractiveGizmo::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(InputBehaviors, UInputBehaviorSet);
}

void UInteractiveGizmo::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(InputBehaviors);
}

void UAxisAngleGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

}

void UAxisAngleGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

}

void UAxisPositionGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UAxisPositionGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UInputBehavior::AfterRead()
{
	UObject::AfterRead();

}

void UInputBehavior::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMouseHoverBehavior::AfterRead()
{
	UInputBehavior::AfterRead();

}

void UMouseHoverBehavior::BeforeDelete()
{
	UInputBehavior::BeforeDelete();

}

void UAnyButtonInputBehavior::AfterRead()
{
	UInputBehavior::AfterRead();

}

void UAnyButtonInputBehavior::BeforeDelete()
{
	UInputBehavior::BeforeDelete();

}

void UMultiClickSequenceInputBehavior::AfterRead()
{
	UAnyButtonInputBehavior::AfterRead();

}

void UMultiClickSequenceInputBehavior::BeforeDelete()
{
	UAnyButtonInputBehavior::BeforeDelete();

}

void UGizmoBaseFloatParameterSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoBaseFloatParameterSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoLocalFloatParameterSource::AfterRead()
{
	UGizmoBaseFloatParameterSource::AfterRead();

}

void UGizmoLocalFloatParameterSource::BeforeDelete()
{
	UGizmoBaseFloatParameterSource::BeforeDelete();

}

void UGizmoBaseVec2ParameterSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoBaseVec2ParameterSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoLocalVec2ParameterSource::AfterRead()
{
	UGizmoBaseVec2ParameterSource::AfterRead();

}

void UGizmoLocalVec2ParameterSource::BeforeDelete()
{
	UGizmoBaseVec2ParameterSource::BeforeDelete();

}

void UGizmoAxisTranslationParameterSource::AfterRead()
{
	UGizmoBaseFloatParameterSource::AfterRead();

}

void UGizmoAxisTranslationParameterSource::BeforeDelete()
{
	UGizmoBaseFloatParameterSource::BeforeDelete();

}

void UGizmoPlaneTranslationParameterSource::AfterRead()
{
	UGizmoBaseVec2ParameterSource::AfterRead();

}

void UGizmoPlaneTranslationParameterSource::BeforeDelete()
{
	UGizmoBaseVec2ParameterSource::BeforeDelete();

}

void UGizmoAxisRotationParameterSource::AfterRead()
{
	UGizmoBaseFloatParameterSource::AfterRead();

}

void UGizmoAxisRotationParameterSource::BeforeDelete()
{
	UGizmoBaseFloatParameterSource::BeforeDelete();

}

void UGizmoUniformScaleParameterSource::AfterRead()
{
	UGizmoBaseVec2ParameterSource::AfterRead();

}

void UGizmoUniformScaleParameterSource::BeforeDelete()
{
	UGizmoBaseVec2ParameterSource::BeforeDelete();

}

void UGizmoAxisScaleParameterSource::AfterRead()
{
	UGizmoBaseFloatParameterSource::AfterRead();

}

void UGizmoAxisScaleParameterSource::BeforeDelete()
{
	UGizmoBaseFloatParameterSource::BeforeDelete();

}

void UGizmoPlaneScaleParameterSource::AfterRead()
{
	UGizmoBaseVec2ParameterSource::AfterRead();

}

void UGizmoPlaneScaleParameterSource::BeforeDelete()
{
	UGizmoBaseVec2ParameterSource::BeforeDelete();

}

void UPlanePositionGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UPlanePositionGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UPlanePositionGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

}

void UPlanePositionGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

}

void USelectionSet::AfterRead()
{
	UObject::AfterRead();

}

void USelectionSet::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMeshSelectionSet::AfterRead()
{
	USelectionSet::AfterRead();

}

void UMeshSelectionSet::BeforeDelete()
{
	USelectionSet::BeforeDelete();

}

void USingleClickInputBehavior::AfterRead()
{
	UAnyButtonInputBehavior::AfterRead();

}

void USingleClickInputBehavior::BeforeDelete()
{
	UAnyButtonInputBehavior::BeforeDelete();

}

void USingleClickToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void USingleClickToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UGizmoNilStateTarget::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoNilStateTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoLambdaStateTarget::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoLambdaStateTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoObjectModifyStateTarget::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoObjectModifyStateTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAxisPositionGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

}

void UAxisPositionGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

}

void UGizmoConstantAxisSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoConstantAxisSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoConstantFrameAxisSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoConstantFrameAxisSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoWorldAxisSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoWorldAxisSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoComponentAxisSource::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Component, USceneComponent);
}

void UGizmoComponentAxisSource::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Component);
}

void UBrushStampIndicatorBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UBrushStampIndicatorBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UBrushStampIndicator::AfterRead()
{
	UInteractiveGizmo::AfterRead();

	READ_PTR_FULL(AttachedComponent, UPrimitiveComponent);
}

void UBrushStampIndicator::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

	DELE_PTR_FULL(AttachedComponent);
}

void UClickDragInputBehavior::AfterRead()
{
	UAnyButtonInputBehavior::AfterRead();

}

void UClickDragInputBehavior::BeforeDelete()
{
	UAnyButtonInputBehavior::BeforeDelete();

}

void ULocalClickDragInputBehavior::AfterRead()
{
	UClickDragInputBehavior::AfterRead();

}

void ULocalClickDragInputBehavior::BeforeDelete()
{
	UClickDragInputBehavior::BeforeDelete();

}

void UClickDragToolBuilder::AfterRead()
{
	UInteractiveToolBuilder::AfterRead();

}

void UClickDragToolBuilder::BeforeDelete()
{
	UInteractiveToolBuilder::BeforeDelete();

}

void UClickDragTool::AfterRead()
{
	UInteractiveTool::AfterRead();

}

void UClickDragTool::BeforeDelete()
{
	UInteractiveTool::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// ()
// Parameters:
// bool                           bWorldIn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState"));

	UGizmoBaseComponent_UpdateWorldLocalState_Params params;
	params.bWorldIn = bWorldIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// ()
// Parameters:
// bool                           bHoveringIn                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState"));

	UGizmoBaseComponent_UpdateHoverState_Params params;
	params.bHoveringIn = bHoveringIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGizmoBaseComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UGizmoBaseComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void UGizmoArrowComponent::AfterRead()
{
	UGizmoBaseComponent::AfterRead();

}

void UGizmoArrowComponent::BeforeDelete()
{
	UGizmoBaseComponent::BeforeDelete();

}

void UGizmoBoxComponent::AfterRead()
{
	UGizmoBaseComponent::AfterRead();

}

void UGizmoBoxComponent::BeforeDelete()
{
	UGizmoBaseComponent::BeforeDelete();

}

void UGizmoCircleComponent::AfterRead()
{
	UGizmoBaseComponent::AfterRead();

}

void UGizmoCircleComponent::BeforeDelete()
{
	UGizmoBaseComponent::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// ()
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform"));

	UGizmoTransformSource_SetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGizmoTransformSource::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform"));

	UGizmoTransformSource_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGizmoTransformSource::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoTransformSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGizmoAxisSource::HasTangentVectors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors"));

	UGizmoAxisSource_HasTangentVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// ()
// Parameters:
// struct FVector                 TangentXOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TangentYOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors"));

	UGizmoAxisSource_GetTangentVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TangentXOut != nullptr)
		*TangentXOut = params.TangentXOut;
	if (TangentYOut != nullptr)
		*TangentYOut = params.TangentYOut;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin"));

	UGizmoAxisSource_GetOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection"));

	UGizmoAxisSource_GetDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGizmoAxisSource::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoAxisSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// ()
// Parameters:
// bool                           bHovering                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState"));

	UGizmoClickTarget_UpdateHoverState_Params params;
	params.bHovering = bHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGizmoClickTarget::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoClickTarget::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// ()
void UGizmoStateTarget::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate"));

	UGizmoStateTarget_EndUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// ()
void UGizmoStateTarget::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate"));

	UGizmoStateTarget_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGizmoStateTarget::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoStateTarget::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter"));

	UGizmoFloatParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGizmoFloatParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter"));

	UGizmoFloatParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// ()
void UGizmoFloatParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify"));

	UGizmoFloatParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// ()
void UGizmoFloatParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify"));

	UGizmoFloatParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGizmoFloatParameterSource::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoFloatParameterSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// ()
// Parameters:
// struct FVector2D               NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter"));

	UGizmoVec2ParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter"));

	UGizmoVec2ParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// ()
void UGizmoVec2ParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify"));

	UGizmoVec2ParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// ()
void UGizmoVec2ParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify"));

	UGizmoVec2ParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGizmoVec2ParameterSource::AfterRead()
{
	UInterface::AfterRead();

}

void UGizmoVec2ParameterSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UGizmoLineHandleComponent::AfterRead()
{
	UGizmoBaseComponent::AfterRead();

}

void UGizmoLineHandleComponent::BeforeDelete()
{
	UGizmoBaseComponent::BeforeDelete();

}

void UGizmoRectangleComponent::AfterRead()
{
	UGizmoBaseComponent::AfterRead();

}

void UGizmoRectangleComponent::BeforeDelete()
{
	UGizmoBaseComponent::BeforeDelete();

}

void UGizmoLambdaHitTarget::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoLambdaHitTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoComponentHitTarget::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Component, UPrimitiveComponent);
}

void UGizmoComponentHitTarget::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Component);
}

void UInputBehaviorSet::AfterRead()
{
	UObject::AfterRead();

}

void UInputBehaviorSet::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UInputBehaviorSource::AfterRead()
{
	UInterface::AfterRead();

}

void UInputBehaviorSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInputRouter::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ActiveInputBehaviors, UInputBehaviorSet);
}

void UInputRouter::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ActiveInputBehaviors);
}

void UInteractiveGizmoManager::AfterRead()
{
	UObject::AfterRead();

}

void UInteractiveGizmoManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UToolContextTransactionProvider::AfterRead()
{
	UInterface::AfterRead();

}

void UToolContextTransactionProvider::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInteractiveToolManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ActiveLeftTool, UInteractiveTool);
	READ_PTR_FULL(ActiveRightTool, UInteractiveTool);
}

void UInteractiveToolManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ActiveLeftTool);
	DELE_PTR_FULL(ActiveRightTool);
}

void UToolFrameworkComponent::AfterRead()
{
	UInterface::AfterRead();

}

void UToolFrameworkComponent::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInteractiveToolsContext::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(InputRouter, UInputRouter);
	READ_PTR_FULL(ToolManager, UInteractiveToolManager);
	READ_PTR_FULL(GizmoManager, UInteractiveGizmoManager);
}

void UInteractiveToolsContext::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(InputRouter);
	DELE_PTR_FULL(ToolManager);
	DELE_PTR_FULL(GizmoManager);
}

void AInternalToolFrameworkActor::AfterRead()
{
	AActor::AfterRead();

}

void AInternalToolFrameworkActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AGizmoActor::AfterRead()
{
	AInternalToolFrameworkActor::AfterRead();

}

void AGizmoActor::BeforeDelete()
{
	AInternalToolFrameworkActor::BeforeDelete();

}

void AIntervalGizmoActor::AfterRead()
{
	AGizmoActor::AfterRead();

	READ_PTR_FULL(UpIntervalComponent, UGizmoLineHandleComponent);
	READ_PTR_FULL(DownIntervalComponent, UGizmoLineHandleComponent);
	READ_PTR_FULL(ForwardIntervalComponent, UGizmoLineHandleComponent);
}

void AIntervalGizmoActor::BeforeDelete()
{
	AGizmoActor::BeforeDelete();

	DELE_PTR_FULL(UpIntervalComponent);
	DELE_PTR_FULL(DownIntervalComponent);
	DELE_PTR_FULL(ForwardIntervalComponent);
}

void UIntervalGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UIntervalGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UIntervalGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

	READ_PTR_FULL(StateTarget, UGizmoTransformChangeStateTarget);
	READ_PTR_FULL(TransformProxy, UTransformProxy);
	READ_PTR_FULL(AxisYSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(AxisZSource, UGizmoComponentAxisSource);
}

void UIntervalGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

	DELE_PTR_FULL(StateTarget);
	DELE_PTR_FULL(TransformProxy);
	DELE_PTR_FULL(AxisYSource);
	DELE_PTR_FULL(AxisZSource);
}

void UGizmoAxisIntervalParameterSource::AfterRead()
{
	UGizmoBaseFloatParameterSource::AfterRead();

}

void UGizmoAxisIntervalParameterSource::BeforeDelete()
{
	UGizmoBaseFloatParameterSource::BeforeDelete();

}

void UKeyAsModifierInputBehavior::AfterRead()
{
	UInputBehavior::AfterRead();

}

void UKeyAsModifierInputBehavior::BeforeDelete()
{
	UInputBehavior::BeforeDelete();

}

void UGizmoTransformChangeStateTarget::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoTransformChangeStateTarget::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ATransformGizmoActor::AfterRead()
{
	AGizmoActor::AfterRead();

	READ_PTR_FULL(TranslateX, UPrimitiveComponent);
	READ_PTR_FULL(TranslateY, UPrimitiveComponent);
	READ_PTR_FULL(TranslateZ, UPrimitiveComponent);
	READ_PTR_FULL(TranslateYZ, UPrimitiveComponent);
	READ_PTR_FULL(TranslateXZ, UPrimitiveComponent);
	READ_PTR_FULL(TranslateXY, UPrimitiveComponent);
	READ_PTR_FULL(RotateX, UPrimitiveComponent);
	READ_PTR_FULL(RotateY, UPrimitiveComponent);
	READ_PTR_FULL(RotateZ, UPrimitiveComponent);
	READ_PTR_FULL(UniformScale, UPrimitiveComponent);
	READ_PTR_FULL(AxisScaleX, UPrimitiveComponent);
	READ_PTR_FULL(AxisScaleY, UPrimitiveComponent);
	READ_PTR_FULL(AxisScaleZ, UPrimitiveComponent);
	READ_PTR_FULL(PlaneScaleYZ, UPrimitiveComponent);
	READ_PTR_FULL(PlaneScaleXZ, UPrimitiveComponent);
	READ_PTR_FULL(PlaneScaleXY, UPrimitiveComponent);
}

void ATransformGizmoActor::BeforeDelete()
{
	AGizmoActor::BeforeDelete();

	DELE_PTR_FULL(TranslateX);
	DELE_PTR_FULL(TranslateY);
	DELE_PTR_FULL(TranslateZ);
	DELE_PTR_FULL(TranslateYZ);
	DELE_PTR_FULL(TranslateXZ);
	DELE_PTR_FULL(TranslateXY);
	DELE_PTR_FULL(RotateX);
	DELE_PTR_FULL(RotateY);
	DELE_PTR_FULL(RotateZ);
	DELE_PTR_FULL(UniformScale);
	DELE_PTR_FULL(AxisScaleX);
	DELE_PTR_FULL(AxisScaleY);
	DELE_PTR_FULL(AxisScaleZ);
	DELE_PTR_FULL(PlaneScaleYZ);
	DELE_PTR_FULL(PlaneScaleXZ);
	DELE_PTR_FULL(PlaneScaleXY);
}

void UTransformGizmoBuilder::AfterRead()
{
	UInteractiveGizmoBuilder::AfterRead();

}

void UTransformGizmoBuilder::BeforeDelete()
{
	UInteractiveGizmoBuilder::BeforeDelete();

}

void UTransformGizmo::AfterRead()
{
	UInteractiveGizmo::AfterRead();

	READ_PTR_FULL(ActiveTarget, UTransformProxy);
	READ_PTR_FULL(CameraAxisSource, UGizmoConstantFrameAxisSource);
	READ_PTR_FULL(AxisXSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(AxisYSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(AxisZSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(UnitAxisXSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(UnitAxisYSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(UnitAxisZSource, UGizmoComponentAxisSource);
	READ_PTR_FULL(StateTarget, UGizmoTransformChangeStateTarget);
	READ_PTR_FULL(ScaledTransformSource, UGizmoScaledTransformSource);
}

void UTransformGizmo::BeforeDelete()
{
	UInteractiveGizmo::BeforeDelete();

	DELE_PTR_FULL(ActiveTarget);
	DELE_PTR_FULL(CameraAxisSource);
	DELE_PTR_FULL(AxisXSource);
	DELE_PTR_FULL(AxisYSource);
	DELE_PTR_FULL(AxisZSource);
	DELE_PTR_FULL(UnitAxisXSource);
	DELE_PTR_FULL(UnitAxisYSource);
	DELE_PTR_FULL(UnitAxisZSource);
	DELE_PTR_FULL(StateTarget);
	DELE_PTR_FULL(ScaledTransformSource);
}

void UTransformProxy::AfterRead()
{
	UObject::AfterRead();

}

void UTransformProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoBaseTransformSource::AfterRead()
{
	UObject::AfterRead();

}

void UGizmoBaseTransformSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGizmoComponentWorldTransformSource::AfterRead()
{
	UGizmoBaseTransformSource::AfterRead();

	READ_PTR_FULL(Component, USceneComponent);
}

void UGizmoComponentWorldTransformSource::BeforeDelete()
{
	UGizmoBaseTransformSource::BeforeDelete();

	DELE_PTR_FULL(Component);
}

void UGizmoScaledTransformSource::AfterRead()
{
	UGizmoBaseTransformSource::AfterRead();

}

void UGizmoScaledTransformSource::BeforeDelete()
{
	UGizmoBaseTransformSource::BeforeDelete();

}

void UGizmoTransformProxyTransformSource::AfterRead()
{
	UGizmoBaseTransformSource::AfterRead();

	READ_PTR_FULL(Proxy, UTransformProxy);
}

void UGizmoTransformProxyTransformSource::BeforeDelete()
{
	UGizmoBaseTransformSource::BeforeDelete();

	DELE_PTR_FULL(Proxy);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
