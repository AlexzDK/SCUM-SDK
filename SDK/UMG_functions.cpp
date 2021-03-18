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

void FWidgetTransform::AfterRead()
{
}

void FWidgetTransform::BeforeDelete()
{
}

void FPaintContext::AfterRead()
{
}

void FPaintContext::BeforeDelete()
{
}

void FAnimationEventBinding::AfterRead()
{
	READ_PTR_FULL(Animation, UWidgetAnimation);
}

void FAnimationEventBinding::BeforeDelete()
{
	DELE_PTR_FULL(Animation);
}

void FAnchorData::AfterRead()
{
}

void FAnchorData::BeforeDelete()
{
}

void FDynamicPropertyPath::AfterRead()
{
	FCachedPropertyPath::AfterRead();

}

void FDynamicPropertyPath::BeforeDelete()
{
	FCachedPropertyPath::BeforeDelete();

}

void FMovieScene2DTransformMask::AfterRead()
{
}

void FMovieScene2DTransformMask::BeforeDelete()
{
}

void FMovieSceneMarginSectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneMarginSectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneWidgetMaterialSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneWidgetMaterialSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FRadialBoxSettings::AfterRead()
{
}

void FRadialBoxSettings::BeforeDelete()
{
}

void FRichTextStyleRow::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FRichTextStyleRow::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void FRichImageRow::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FRichImageRow::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void FSlateMeshVertex::AfterRead()
{
}

void FSlateMeshVertex::BeforeDelete()
{
}

void FWidgetComponentInstanceData::AfterRead()
{
	FSceneComponentInstanceData::AfterRead();

}

void FWidgetComponentInstanceData::BeforeDelete()
{
	FSceneComponentInstanceData::BeforeDelete();

}

void FWidgetNavigationData::AfterRead()
{
}

void FWidgetNavigationData::BeforeDelete()
{
}

void FShapedTextOptions::AfterRead()
{
}

void FShapedTextOptions::BeforeDelete()
{
}

void FNamedSlotBinding::AfterRead()
{
	READ_PTR_FULL(Content, UWidget);
}

void FNamedSlotBinding::BeforeDelete()
{
	DELE_PTR_FULL(Content);
}

void FUserWidgetPool::AfterRead()
{
}

void FUserWidgetPool::BeforeDelete()
{
}

void FSlateChildSize::AfterRead()
{
}

void FSlateChildSize::BeforeDelete()
{
}

void FWidgetAnimationBinding::AfterRead()
{
}

void FWidgetAnimationBinding::BeforeDelete()
{
}

void FBlueprintWidgetAnimationDelegateBinding::AfterRead()
{
}

void FBlueprintWidgetAnimationDelegateBinding::BeforeDelete()
{
}

void FDelegateRuntimeBinding::AfterRead()
{
}

void FDelegateRuntimeBinding::BeforeDelete()
{
}

void FEventReply::AfterRead()
{
}

void FEventReply::BeforeDelete()
{
}

void UVisual::AfterRead()
{
	UObject::AfterRead();

}

void UVisual::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.Widget.SetVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetVisibility"));

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetUserFocus
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetUserFocus"));

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetToolTipText
// ()
// Parameters:
// struct FText                   InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWidget::SetToolTipText(const struct FText& InToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTipText"));

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetToolTip
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetToolTip(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTip"));

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTranslation
// ()
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTranslation"));

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTransformPivot
// ()
// Parameters:
// struct FVector2D               Pivot                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransformPivot"));

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTransformAngle
// ()
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransformAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransformAngle"));

	UWidget_SetRenderTransformAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTransform
// ()
// Parameters:
// struct FWidgetTransform        InTransform                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransform"));

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderShear
// ()
// Parameters:
// struct FVector2D               Shear                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderShear"));

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderScale
// ()
// Parameters:
// struct FVector2D               Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderScale"));

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderOpacity
// ()
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderOpacity"));

	UWidget_SetRenderOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRuleExplicit
// ()
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleExplicit(SlateCore_EUINavigation Direction, class UWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRuleExplicit"));

	UWidget_SetNavigationRuleExplicit_Params params;
	params.Direction = Direction;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// ()
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCustomDelegate               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleCustomBoundary(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRuleCustomBoundary"));

	UWidget_SetNavigationRuleCustomBoundary_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRuleCustom
// ()
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCustomDelegate               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleCustom(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRuleCustom"));

	UWidget_SetNavigationRuleCustom_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRuleBase
// ()
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SlateCore_EUINavigationRule    Rule                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleBase(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRuleBase"));

	UWidget_SetNavigationRuleBase_Params params;
	params.Direction = Direction;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRule
// ()
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SlateCore_EUINavigationRule    Rule                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRule(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRule"));

	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetKeyboardFocus
// ()
void UWidget::SetKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetKeyboardFocus"));

	UWidget_SetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetIsEnabled
// ()
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetIsEnabled"));

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetFocus
// ()
void UWidget::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetFocus"));

	UWidget_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetCursor
// ()
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> InCursor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetCursor"));

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetClipping
// ()
// Parameters:
// SlateCore_EWidgetClipping      InClipping                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetClipping(SlateCore_EWidgetClipping InClipping)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetClipping"));

	UWidget_SetClipping_Params params;
	params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetAllNavigationRules
// ()
// Parameters:
// SlateCore_EUINavigationRule    Rule                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetAllNavigationRules"));

	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.ResetCursor
// ()
void UWidget::ResetCursor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ResetCursor"));

	UWidget_ResetCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.RemoveFromParent
// ()
void UWidget::RemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.RemoveFromParent"));

	UWidget_RemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnReply__DelegateSignature"));

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature"));

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsVisible"));

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsHovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsHovered"));

	UWidget_IsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// ()
void UWidget::InvalidateLayoutAndVolatility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.InvalidateLayoutAndVolatility"));

	UWidget_InvalidateLayoutAndVolatility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.HasUserFocusedDescendants
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocusedDescendants"));

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocus"));

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCaptureByUser
// ()
// Parameters:
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PointerIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasMouseCaptureByUser(int UserIndex, int PointerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasMouseCaptureByUser"));

	UWidget_HasMouseCaptureByUser_Params params;
	params.UserIndex = UserIndex;
	params.PointerIndex = PointerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasMouseCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasMouseCapture"));

	UWidget_HasMouseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasKeyboardFocus"));

	UWidget_HasKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasFocusedDescendants()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasFocusedDescendants"));

	UWidget_HasFocusedDescendants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasAnyUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasAnyUserFocus"));

	UWidget_HasAnyUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetWidget__DelegateSignature"));

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetVisibility"));

	UWidget_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetTickSpaceGeometry
// ()
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetTickSpaceGeometry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetTickSpaceGeometry"));

	UWidget_GetTickSpaceGeometry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetText__DelegateSignature"));

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature"));

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature"));

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature"));

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetRenderTransformAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetRenderTransformAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetRenderTransformAngle"));

	UWidget_GetRenderTransformAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetRenderOpacity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetRenderOpacity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetRenderOpacity"));

	UWidget_GetRenderOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// ()
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelWidget* UWidget::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetParent"));

	UWidget_GetParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetPaintSpaceGeometry
// ()
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetPaintSpaceGeometry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetPaintSpaceGeometry"));

	UWidget_GetPaintSpaceGeometry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UWidget::GetOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetOwningPlayer"));

	UWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningLocalPlayer
// ()
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UWidget::GetOwningLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetOwningLocalPlayer"));

	UWidget_GetOwningLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// ()
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature"));

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature"));

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetIsEnabled"));

	UWidget_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidget::GetInt32__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetInt32__DelegateSignature"));

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetGameInstance
// ()
// Parameters:
// class UGameInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameInstance* UWidget::GetGameInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetGameInstance"));

	UWidget_GetGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetFloat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetFloat__DelegateSignature"));

	UWidget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidget::GetDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetDesiredSize"));

	UWidget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetClipping
// ()
// Parameters:
// SlateCore_EWidgetClipping      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_EWidgetClipping UWidget::GetClipping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetClipping"));

	UWidget_GetClipping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature"));

	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// ()
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetCachedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetCachedGeometry"));

	UWidget_GetCachedGeometry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetBool__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetBool__DelegateSignature"));

	UWidget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetAccessibleText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetAccessibleText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetAccessibleText"));

	UWidget_GetAccessibleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetAccessibleSummaryText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetAccessibleSummaryText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetAccessibleSummaryText"));

	UWidget_GetAccessibleSummaryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// ()
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature"));

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature"));

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// ()
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::ForceVolatile(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceVolatile"));

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.ForceLayoutPrepass
// ()
void UWidget::ForceLayoutPrepass()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceLayoutPrepass"));

	UWidget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidget::AfterRead()
{
	UVisual::AfterRead();

	READ_PTR_FULL(Slot, UPanelSlot);
	READ_PTR_FULL(ToolTipWidget, UWidget);
	READ_PTR_FULL(AccessibleWidgetData, USlateAccessibleWidgetData);
	READ_PTR_FULL(Navigation, UWidgetNavigation);
}

void UWidget::BeforeDelete()
{
	UVisual::BeforeDelete();

	DELE_PTR_FULL(Slot);
	DELE_PTR_FULL(ToolTipWidget);
	DELE_PTR_FULL(AccessibleWidgetData);
	DELE_PTR_FULL(Navigation);
}

// Function UMG.PanelWidget.RemoveChildAt
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChildAt"));

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChild"));

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasChild"));

	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasAnyChildren()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasAnyChildren"));

	UPanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildrenCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildrenCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildrenCount"));

	UPanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// ()
// Parameters:
// class UWidget*                 Content                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildIndex"));

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPanelWidget::GetChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildAt"));

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetAllChildren
// ()
// Parameters:
// TArray<class UWidget*>         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UWidget*> UPanelWidget::GetAllChildren()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetAllChildren"));

	UPanelWidget_GetAllChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// ()
void UPanelWidget::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.ClearChildren"));

	UPanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.PanelWidget.AddChild
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.AddChild"));

	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPanelWidget::AfterRead()
{
	UWidget::AfterRead();

}

void UPanelWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.ContentWidget.SetContent
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.SetContent"));

	UContentWidget_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// ()
// Parameters:
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::GetContentSlot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContentSlot"));

	UContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UContentWidget::GetContent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContent"));

	UContentWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UContentWidget::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UContentWidget::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.UserWidget.UnregisterInputComponent
// ()
void UUserWidget::UnregisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnregisterInputComponent"));

	UUserWidget_UnregisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.UnbindFromAnimationStarted
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnbindFromAnimationStarted"));

	UUserWidget_UnbindFromAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnbindFromAnimationFinished"));

	UUserWidget_UnbindFromAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnbindAllFromAnimationStarted"));

	UUserWidget_UnbindAllFromAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnbindAllFromAnimationFinished"));

	UUserWidget_UnbindAllFromAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.Tick
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Tick"));

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopListeningForInputAction
// ()
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForInputAction"));

	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// ()
void UUserWidget::StopListeningForAllInputActions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForAllInputActions"));

	UUserWidget_StopListeningForAllInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// ()
void UUserWidget::StopAnimationsAndLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAnimationsAndLatentActions"));

	UUserWidget_StopAnimationsAndLatentActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopAnimation
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAnimation"));

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopAllAnimations
// ()
void UUserWidget::StopAllAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAllAnimations"));

	UUserWidget_StopAllAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPositionInViewport
// ()
// Parameters:
// struct FVector2D               position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetPositionInViewport(const struct FVector2D& position, bool bRemoveDPIScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPositionInViewport"));

	UUserWidget_SetPositionInViewport_Params params;
	params.position = position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPlaybackSpeed"));

	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPadding"));

	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetOwningPlayer
// ()
// Parameters:
// class APlayerController*       LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningPlayer"));

	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetNumLoopsToPlay"));

	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetInputActionPriority
// ()
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetInputActionPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionPriority"));

	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetInputActionBlocking
// ()
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionBlocking"));

	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetForegroundColor
// ()
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm, NativeAccessSpecifierPublic)
void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetForegroundColor"));

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// ()
// Parameters:
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetDesiredSizeInViewport"));

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetColorAndOpacity"));

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetAnimationCurrentTime
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAnimationCurrentTime"));

	UUserWidget_SetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// ()
// Parameters:
// struct FAnchors                Anchors                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAnchorsInViewport"));

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// ()
// Parameters:
// struct FVector2D               Alignment                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAlignmentInViewport"));

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.ReverseAnimation
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ReverseAnimation"));

	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.RemoveFromViewport
// ()
void UUserWidget::RemoveFromViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RemoveFromViewport"));

	UUserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.RegisterInputComponent
// ()
void UUserWidget::RegisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RegisterInputComponent"));

	UUserWidget_RegisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PreConstruct
// ()
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PreConstruct"));

	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PlaySound
// ()
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlaySound"));

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PlayAnimationTimeRange
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimationTimeRange"));

	UUserWidget_PlayAnimationTimeRange_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimationReverse
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimationReverse"));

	UUserWidget_PlayAnimationReverse_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimationForward
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimationForward"));

	UUserWidget_PlayAnimationForward_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimation
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimation"));

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.PauseAnimation
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PauseAnimation"));

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchStarted
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchStarted"));

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchMoved
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchMoved"));

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchGesture
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           GestureEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchGesture"));

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchForceChanged
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchForceChanged"));

	UUserWidget_OnTouchForceChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchEnded
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchEnded"));

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// ()
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnRemovedFromFocusPath"));

	UUserWidget_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewMouseButtonDown"));

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPreviewKeyDown
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewKeyDown"));

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPaint"));

	UUserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.UserWidget.OnMouseWheel
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseWheel"));

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseMove
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseMove"));

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseLeave
// ()
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseLeave"));

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseEnter
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseEnter"));

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseCaptureLost
// ()
void UUserWidget::OnMouseCaptureLost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseCaptureLost"));

	UUserWidget_OnMouseCaptureLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseButtonUp
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonUp"));

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDown
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDown"));

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// ()
// Parameters:
// struct FGeometry               InMyGeometry                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDoubleClick"));

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMotionDetected
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionEvent            InMotionEvent                  (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMotionDetected"));

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyUp
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyUp"));

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyDown
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyDown"));

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyChar
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FCharacterEvent         InCharacterEvent               (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyChar"));

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnInitialized
// ()
void UUserWidget::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnInitialized"));

	UUserWidget_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnFocusReceived
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusReceived"));

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// ()
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusLost"));

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDrop
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDrop"));

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragOver
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragOver"));

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragLeave
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragLeave"));

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDragEnter
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragEnter"));

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDragDetected
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragDetected"));

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function UMG.UserWidget.OnDragCancelled
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragCancelled"));

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnimationStarted
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationStarted"));

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnimationFinished
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationFinished"));

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAnalogInputEvent       InAnalogInputEvent             (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnalogValueChanged"));

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAddedToFocusPath
// ()
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAddedToFocusPath"));

	UUserWidget_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.ListenForInputAction
// ()
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bConsume                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ListenForInputAction"));

	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.IsPlayingAnimation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsPlayingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsPlayingAnimation"));

	UUserWidget_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// ()
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsListeningForInputAction"));

	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInViewport"));

	UUserWidget_IsInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInteractable"));

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnyAnimationPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnyAnimationPlaying"));

	UUserWidget_IsAnyAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlayingForward
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnimationPlayingForward"));

	UUserWidget_IsAnimationPlayingForward_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlaying
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnimationPlaying"));

	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayerPawn"));

	UUserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerCameraManager
// ()
// Parameters:
// class APlayerCameraManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayerCameraManager"));

	UUserWidget_GetOwningPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetIsVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::GetIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetIsVisible"));

	UUserWidget_GetIsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnimationCurrentTime
// ()
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnimationCurrentTime"));

	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnchorsInViewport
// ()
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnchorsInViewport"));

	UUserWidget_GetAnchorsInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAlignmentInViewport
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAlignmentInViewport"));

	UUserWidget_GetAlignmentInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.FlushAnimations
// ()
void UUserWidget::FlushAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.FlushAnimations"));

	UUserWidget_FlushAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.Destruct
// ()
void UUserWidget::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Destruct"));

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.Construct
// ()
void UUserWidget::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Construct"));

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.CancelLatentActions
// ()
void UUserWidget::CancelLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.CancelLatentActions"));

	UUserWidget_CancelLatentActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.BindToAnimationStarted
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.BindToAnimationStarted"));

	UUserWidget_BindToAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.BindToAnimationFinished
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.BindToAnimationFinished"));

	UUserWidget_BindToAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.BindToAnimationEvent
// ()
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UMG_EWidgetAnimationEvent      AnimationEvent                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   UserTag                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.BindToAnimationEvent"));

	UUserWidget_BindToAnimationEvent_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;
	params.AnimationEvent = AnimationEvent;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.AddToViewport
// ()
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::AddToViewport(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToViewport"));

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.AddToPlayerScreen
// ()
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::AddToPlayerScreen(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToPlayerScreen"));

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserWidget::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(AnimationTickManager, UUMGSequenceTickManager);
	READ_PTR_FULL(WidgetTree, UWidgetTree);
	READ_PTR_FULL(InputComponent, UInputComponent);
}

void UUserWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(AnimationTickManager);
	DELE_PTR_FULL(WidgetTree);
	DELE_PTR_FULL(InputComponent);
}

// Function UMG.TextLayoutWidget.SetJustification
// ()
// Parameters:
// TEnumAsByte<Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextLayoutWidget::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextLayoutWidget.SetJustification"));

	UTextLayoutWidget_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTextLayoutWidget::AfterRead()
{
	UWidget::AfterRead();

}

void UTextLayoutWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.TextBlock.SetTextTransformPolicy
// ()
// Parameters:
// Slate_ETextTransformPolicy     InTransformPolicy              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetTextTransformPolicy"));

	UTextBlock_SetTextTransformPolicy_Params params;
	params.InTransformPolicy = InTransformPolicy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetText"));

	UTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetStrikeBrush
// ()
// Parameters:
// struct FSlateBrush             InStrikeBrush                  (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetStrikeBrush"));

	UTextBlock_SetStrikeBrush_Params params;
	params.InStrikeBrush = InStrikeBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetShadowOffset
// ()
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowOffset"));

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowColorAndOpacity"));

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetOpacity
// ()
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetOpacity"));

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// ()
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetMinDesiredWidth"));

	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetFont
// ()
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetFont"));

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetColorAndOpacity
// ()
// Parameters:
// struct FSlateColor             InColorAndOpacity              (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetColorAndOpacity"));

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetAutoWrapText
// ()
// Parameters:
// bool                           InAutoTextWrap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetAutoWrapText"));

	UTextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetText"));

	UTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetDynamicOutlineMaterial"));

	UTextBlock_GetDynamicOutlineMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicFontMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetDynamicFontMaterial"));

	UTextBlock_GetDynamicFontMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTextBlock::AfterRead()
{
	UTextLayoutWidget::AfterRead();

}

void UTextBlock::BeforeDelete()
{
	UTextLayoutWidget::BeforeDelete();

}

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::SetActiveWidgetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidgetIndex"));

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidget"));

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetWidgetAtIndex"));

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetNumWidgets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetNumWidgets"));

	UWidgetSwitcher_GetNumWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetActiveWidgetIndex"));

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidget
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetActiveWidget"));

	UWidgetSwitcher_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetSwitcher::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UWidgetSwitcher::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.RichTextBlock.SetTextTransformPolicy
// ()
// Parameters:
// Slate_ETextTransformPolicy     InTransformPolicy              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetTextTransformPolicy"));

	URichTextBlock_SetTextTransformPolicy_Params params;
	params.InTransformPolicy = InTransformPolicy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetTextStyleSet
// ()
// Parameters:
// class UDataTable*              NewTextStyleSet                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetTextStyleSet"));

	URichTextBlock_SetTextStyleSet_Params params;
	params.NewTextStyleSet = NewTextStyleSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetText
// ()
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetText"));

	URichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// ()
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetMinDesiredWidth"));

	URichTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetDefaultTextStyle
// ()
// Parameters:
// struct FTextBlockStyle         InDefaultTextStyle             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultTextStyle"));

	URichTextBlock_SetDefaultTextStyle_Params params;
	params.InDefaultTextStyle = InDefaultTextStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// ()
// Parameters:
// struct FSlateBrush             InStrikeBrush                  (Parm, OutParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultStrikeBrush"));

	URichTextBlock_SetDefaultStrikeBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InStrikeBrush != nullptr)
		*InStrikeBrush = params.InStrikeBrush;

}


// Function UMG.RichTextBlock.SetDefaultShadowOffset
// ()
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultShadowOffset"));

	URichTextBlock_SetDefaultShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity"));

	URichTextBlock_SetDefaultShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetDefaultFont
// ()
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultFont"));

	URichTextBlock_SetDefaultFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// ()
// Parameters:
// struct FSlateColor             InColorAndOpacity              (Parm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetDefaultColorAndOpacity"));

	URichTextBlock_SetDefaultColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.SetAutoWrapText
// ()
// Parameters:
// bool                           InAutoTextWrap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.SetAutoWrapText"));

	URichTextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RichTextBlock.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText URichTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.GetText"));

	URichTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.RichTextBlock.GetDecoratorByClass
// ()
// Parameters:
// class UClass*                  DecoratorClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URichTextBlockDecorator* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.GetDecoratorByClass"));

	URichTextBlock_GetDecoratorByClass_Params params;
	params.DecoratorClass = DecoratorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// ()
void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides"));

	URichTextBlock_ClearAllDefaultStyleOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URichTextBlock::AfterRead()
{
	UTextLayoutWidget::AfterRead();

	READ_PTR_FULL(TextStyleSet, UDataTable);
}

void URichTextBlock::BeforeDelete()
{
	UTextLayoutWidget::BeforeDelete();

	DELE_PTR_FULL(TextStyleSet);
}

void URichTextBlockDecorator::AfterRead()
{
	UObject::AfterRead();

}

void URichTextBlockDecorator::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.AsyncTaskDownloadImage.DownloadImage
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskDownloadImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.AsyncTaskDownloadImage.DownloadImage"));

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAsyncTaskDownloadImage::AfterRead()
{
	UBlueprintAsyncActionBase::AfterRead();

}

void UAsyncTaskDownloadImage::BeforeDelete()
{
	UBlueprintAsyncActionBase::BeforeDelete();

}

// Function UMG.BackgroundBlur.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetVerticalAlignment"));

	UBackgroundBlur_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetPadding"));

	UBackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// ()
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush"));

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetHorizontalAlignment"));

	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// ()
// Parameters:
// float                          InStrength                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurStrength"));

	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// ()
// Parameters:
// int                            InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetBlurRadius(int InBlurRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurRadius"));

	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// ()
// Parameters:
// bool                           bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetApplyAlphaToBlur"));

	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBackgroundBlur::AfterRead()
{
	UContentWidget::AfterRead();

}

void UBackgroundBlur::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

void UPanelSlot::AfterRead()
{
	UVisual::AfterRead();

	READ_PTR_FULL(Parent, UPanelWidget);
	READ_PTR_FULL(Content, UWidget);
}

void UPanelSlot::BeforeDelete()
{
	UVisual::BeforeDelete();

	DELE_PTR_FULL(Parent);
	DELE_PTR_FULL(Content);
}

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetVerticalAlignment"));

	UBackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetPadding"));

	UBackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment"));

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBackgroundBlurSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UBackgroundBlurSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

void UPropertyBinding::AfterRead()
{
	UObject::AfterRead();

}

void UPropertyBinding::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.BoolBinding.GetValue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBoolBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BoolBinding.GetValue"));

	UBoolBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBoolBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UBoolBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.Border.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetVerticalAlignment"));

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetPadding"));

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetHorizontalAlignment"));

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetDesiredSizeScale
// ()
// Parameters:
// struct FVector2D               InScale                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetDesiredSizeScale"));

	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetContentColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetContentColorAndOpacity"));

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromTexture
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromTexture"));

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromMaterial
// ()
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromMaterial"));

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromAsset
// ()
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromAsset"));

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushColor
// ()
// Parameters:
// struct FLinearColor            InBrushColor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushColor"));

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrush
// ()
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrush"));

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.GetDynamicMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.GetDynamicMaterial"));

	UBorder_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBorder::AfterRead()
{
	UContentWidget::AfterRead();

}

void UBorder::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.BorderSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetVerticalAlignment"));

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BorderSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetPadding"));

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetHorizontalAlignment"));

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBorderSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UBorderSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.BrushBinding.GetValue
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UBrushBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BrushBinding.GetValue"));

	UBrushBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBrushBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UBrushBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.Button.SetTouchMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetTouchMethod"));

	UButton_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetStyle
// ()
// Parameters:
// struct FButtonStyle            InStyle                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetStyle"));

	UButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetPressMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetPressMethod"));

	UButton_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetColorAndOpacity"));

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetClickMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetClickMethod"));

	UButton_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetBackgroundColor
// ()
// Parameters:
// struct FLinearColor            InBackgroundColor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetBackgroundColor"));

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.IsPressed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UButton::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.IsPressed"));

	UButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UButton::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UButton::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function UMG.ButtonSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetVerticalAlignment"));

	UButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ButtonSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetPadding"));

	UButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetHorizontalAlignment"));

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UButtonSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UButtonSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.CanvasPanel.AddChildToCanvas
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanel.AddChildToCanvas"));

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCanvasPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UCanvasPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.CanvasPanelSlot.SetZOrder
// ()
// Parameters:
// int                            InZOrder                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetZOrder(int InZOrder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetZOrder"));

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetSize
// ()
// Parameters:
// struct FVector2D               InSize                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetSize"));

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetPosition
// ()
// Parameters:
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetPosition"));

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// ()
// Parameters:
// struct FMargin                 InOffset                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetOffsets"));

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// ()
// Parameters:
// struct FVector2D               InMinimumAnchors               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMinimum"));

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// ()
// Parameters:
// struct FVector2D               InMaximumAnchors               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMaximum"));

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetLayout
// ()
// Parameters:
// struct FAnchorData             InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetLayout"));

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// ()
// Parameters:
// bool                           InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAutoSize"));

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// ()
// Parameters:
// struct FAnchors                InAnchors                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAnchors"));

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// ()
// Parameters:
// struct FVector2D               InAlignment                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAlignment"));

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCanvasPanelSlot::GetZOrder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetZOrder"));

	UCanvasPanelSlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetSize"));

	UCanvasPanelSlot_GetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetPosition"));

	UCanvasPanelSlot_GetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// ()
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetOffsets"));

	UCanvasPanelSlot_GetOffsets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// ()
// Parameters:
// struct FAnchorData             ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetLayout"));

	UCanvasPanelSlot_GetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAutoSize
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCanvasPanelSlot::GetAutoSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAutoSize"));

	UCanvasPanelSlot_GetAutoSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// ()
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAnchors"));

	UCanvasPanelSlot_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAlignment"));

	UCanvasPanelSlot_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCanvasPanelSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UCanvasPanelSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.CheckBox.SetTouchMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetTouchMethod"));

	UCheckBox_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.SetPressMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetPressMethod"));

	UCheckBox_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.SetIsChecked
// ()
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetIsChecked"));

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.SetClickMethod
// ()
// Parameters:
// TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetClickMethod"));

	UCheckBox_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.SetCheckedState
// ()
// Parameters:
// SlateCore_ECheckBoxState       InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetCheckedState"));

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.IsPressed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsPressed"));

	UCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsChecked"));

	UCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.GetCheckedState"));

	UCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCheckBox::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(UncheckedImage, USlateBrushAsset);
	READ_PTR_FULL(UncheckedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(UncheckedPressedImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedPressedImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedPressedImage, USlateBrushAsset);
}

void UCheckBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(UncheckedImage);
	DELE_PTR_FULL(UncheckedHoveredImage);
	DELE_PTR_FULL(UncheckedPressedImage);
	DELE_PTR_FULL(CheckedImage);
	DELE_PTR_FULL(CheckedHoveredImage);
	DELE_PTR_FULL(CheckedPressedImage);
	DELE_PTR_FULL(UndeterminedImage);
	DELE_PTR_FULL(UndeterminedHoveredImage);
	DELE_PTR_FULL(UndeterminedPressedImage);
}

// Function UMG.CheckedStateBinding.GetValue
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckedStateBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckedStateBinding.GetValue"));

	UCheckedStateBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCheckedStateBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UCheckedStateBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.CircularThrobber.SetRadius
// ()
// Parameters:
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetRadius"));

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CircularThrobber.SetPeriod
// ()
// Parameters:
// float                          InPeriod                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetPeriod(float InPeriod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetPeriod"));

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// ()
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetNumberOfPieces"));

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCircularThrobber::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(PieceImage, USlateBrushAsset);
}

void UCircularThrobber::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(PieceImage);
}

// Function UMG.ColorBinding.GetSlateValue
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UColorBinding::GetSlateValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetSlateValue"));

	UColorBinding_GetSlateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UColorBinding::GetLinearValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetLinearValue"));

	UColorBinding_GetLinearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UColorBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UColorBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

void UComboBox::AfterRead()
{
	UWidget::AfterRead();

}

void UComboBox::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.ComboBoxString.SetSelectedOption
// ()
// Parameters:
// struct FString                 option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::SetSelectedOption(const struct FString& option)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.SetSelectedOption"));

	UComboBoxString_SetSelectedOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.SetSelectedIndex
// ()
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.SetSelectedIndex"));

	UComboBoxString_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.RemoveOption
// ()
// Parameters:
// struct FString                 option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UComboBoxString::RemoveOption(const struct FString& option)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RemoveOption"));

	UComboBoxString_RemoveOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// ()
void UComboBoxString::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RefreshOptions"));

	UComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature"));

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// ()
void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature"));

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.IsOpen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UComboBoxString::IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.IsOpen"));

	UComboBoxString_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetSelectedOption
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetSelectedOption"));

	UComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetSelectedIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetSelectedIndex"));

	UComboBoxString_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::GetOptionCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionCount"));

	UComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetOptionAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionAtIndex"));

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// ()
// Parameters:
// struct FString                 option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::FindOptionIndex(const struct FString& option)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.FindOptionIndex"));

	UComboBoxString_FindOptionIndex_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// ()
void UComboBoxString::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearSelection"));

	UComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.ClearOptions
// ()
void UComboBoxString::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearOptions"));

	UComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.AddOption
// ()
// Parameters:
// struct FString                 option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::AddOption(const struct FString& option)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.AddOption"));

	UComboBoxString_AddOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UComboBoxString::AfterRead()
{
	UWidget::AfterRead();

}

void UComboBoxString::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.DragDropOperation.Drop
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Drop"));

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DragDropOperation.Dragged
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Dragged"));

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DragDropOperation.DragCancelled
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.DragCancelled"));

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDragDropOperation::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Payload, UObject);
	READ_PTR_FULL(DefaultDragVisual, UWidget);
}

void UDragDropOperation::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Payload);
	DELE_PTR_FULL(DefaultDragVisual);
}

// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// ()
// Parameters:
// struct FRadialBoxSettings      InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBoxBase.SetRadialSettings"));

	UDynamicEntryBoxBase_SetRadialSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// ()
// Parameters:
// struct FVector2D               InEntrySpacing                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBoxBase.SetEntrySpacing"));

	UDynamicEntryBoxBase_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DynamicEntryBoxBase.GetNumEntries
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDynamicEntryBoxBase::GetNumEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBoxBase.GetNumEntries"));

	UDynamicEntryBoxBase_GetNumEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// ()
// Parameters:
// TArray<class UUserWidget*>     ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBoxBase.GetAllEntries"));

	UDynamicEntryBoxBase_GetAllEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDynamicEntryBoxBase::AfterRead()
{
	UWidget::AfterRead();

}

void UDynamicEntryBoxBase::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.DynamicEntryBox.Reset
// ()
// Parameters:
// bool                           bDeleteWidgets                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBox.Reset"));

	UDynamicEntryBox_Reset_Params params;
	params.bDeleteWidgets = bDeleteWidgets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DynamicEntryBox.RemoveEntry
// ()
// Parameters:
// class UUserWidget*             EntryWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBox.RemoveEntry"));

	UDynamicEntryBox_RemoveEntry_Params params;
	params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// ()
// Parameters:
// class UClass*                  EntryClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(class UClass* EntryClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass"));

	UDynamicEntryBox_BP_CreateEntryOfClass_Params params;
	params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// ()
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DynamicEntryBox.BP_CreateEntry"));

	UDynamicEntryBox_BP_CreateEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDynamicEntryBox::AfterRead()
{
	UDynamicEntryBoxBase::AfterRead();

	READ_PTR_FULL(EntryWidgetClass, UClass);
}

void UDynamicEntryBox::BeforeDelete()
{
	UDynamicEntryBoxBase::BeforeDelete();

	DELE_PTR_FULL(EntryWidgetClass);
}

// Function UMG.EditableText.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetText"));

	UEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetJustification
// ()
// Parameters:
// TEnumAsByte<Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetJustification"));

	UEditableText_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetIsReadOnly
// ()
// Parameters:
// bool                           InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsReadOnly"));

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetIsPassword
// ()
// Parameters:
// bool                           InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsPassword"));

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetHintText
// ()
// Parameters:
// struct FText                   InHintText                     (Parm, NativeAccessSpecifierPublic)
void UEditableText::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetHintText"));

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature"));

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature"));

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.GetText"));

	UEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEditableText::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BackgroundImageSelected, USlateBrushAsset);
	READ_PTR_FULL(BackgroundImageComposing, USlateBrushAsset);
	READ_PTR_FULL(CaretImage, USlateBrushAsset);
}

void UEditableText::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BackgroundImageSelected);
	DELE_PTR_FULL(BackgroundImageComposing);
	DELE_PTR_FULL(CaretImage);
}

// Function UMG.EditableTextBox.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetText"));

	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetJustification
// ()
// Parameters:
// TEnumAsByte<Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetJustification"));

	UEditableTextBox_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetIsReadOnly
// ()
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetIsReadOnly"));

	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetIsPassword
// ()
// Parameters:
// bool                           bIsPassword                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetIsPassword"));

	UEditableTextBox_SetIsPassword_Params params;
	params.bIsPassword = bIsPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetHintText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetHintText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetHintText"));

	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetError
// ()
// Parameters:
// struct FText                   InError                        (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetError"));

	UEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.HasError
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableTextBox::HasError()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.HasError"));

	UEditableTextBox_HasError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.GetText"));

	UEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// ()
void UEditableTextBox::ClearError()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.ClearError"));

	UEditableTextBox_ClearError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditableTextBox::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UEditableTextBox::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function UMG.ExpandableArea.SetIsExpanded_Animated
// ()
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded_Animated"));

	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ExpandableArea.SetIsExpanded
// ()
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded"));

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ExpandableArea.GetIsExpanded
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UExpandableArea::GetIsExpanded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.GetIsExpanded"));

	UExpandableArea_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UExpandableArea::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(HeaderContent, UWidget);
	READ_PTR_FULL(BodyContent, UWidget);
}

void UExpandableArea::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(HeaderContent);
	DELE_PTR_FULL(BodyContent);
}

// Function UMG.FloatBinding.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFloatBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.FloatBinding.GetValue"));

	UFloatBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFloatBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UFloatBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.GridPanel.SetRowFill
// ()
// Parameters:
// int                            ColumnIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Coefficient                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridPanel::SetRowFill(int ColumnIndex, float Coefficient)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.SetRowFill"));

	UGridPanel_SetRowFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridPanel.SetColumnFill
// ()
// Parameters:
// int                            ColumnIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Coefficient                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridPanel::SetColumnFill(int ColumnIndex, float Coefficient)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.SetColumnFill"));

	UGridPanel_SetColumnFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridPanel.AddChildToGrid
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.AddChildToGrid"));

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGridPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UGridPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.GridSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetVerticalAlignment"));

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetRowSpan
// ()
// Parameters:
// int                            InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetRowSpan(int InRowSpan)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRowSpan"));

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetRow
// ()
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRow"));

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetPadding"));

	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetNudge
// ()
// Parameters:
// struct FVector2D               InNudge                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetNudge"));

	UGridSlot_SetNudge_Params params;
	params.InNudge = InNudge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetLayer
// ()
// Parameters:
// int                            InLayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetLayer(int InLayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetLayer"));

	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetHorizontalAlignment"));

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetColumnSpan
// ()
// Parameters:
// int                            InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetColumnSpan(int InColumnSpan)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumnSpan"));

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetColumn
// ()
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumn"));

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGridSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UGridSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.HorizontalBox.AddChildToHorizontalBox
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBox.AddChildToHorizontalBox"));

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UHorizontalBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UHorizontalBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetVerticalAlignment"));

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetSize
// ()
// Parameters:
// struct FSlateChildSize         InSize                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetSize"));

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetPadding"));

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment"));

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UHorizontalBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UHorizontalBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.Image.SetOpacity
// ()
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetOpacity"));

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetColorAndOpacity"));

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushTintColor
// ()
// Parameters:
// struct FSlateColor             TintColor                      (Parm, NativeAccessSpecifierPublic)
void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushTintColor"));

	UImage_SetBrushTintColor_Params params;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushSize
// ()
// Parameters:
// struct FVector2D               DesiredSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushSize(const struct FVector2D& DesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushSize"));

	UImage_SetBrushSize_Params params;
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushResourceObject
// ()
// Parameters:
// class UObject*                 ResourceObject                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushResourceObject(class UObject* ResourceObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushResourceObject"));

	UImage_SetBrushResourceObject_Params params;
	params.ResourceObject = ResourceObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// ()
// Parameters:
// class UTexture2DDynamic*       Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTextureDynamic"));

	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromTexture
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTexture"));

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromSoftTexture
// ()
// Parameters:
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromSoftTexture(bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromSoftTexture"));

	UImage_SetBrushFromSoftTexture_Params params;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromSoftMaterial
// ()
void UImage::SetBrushFromSoftMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromSoftMaterial"));

	UImage_SetBrushFromSoftMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromMaterial
// ()
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromMaterial"));

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromAtlasInterface
// ()
// Parameters:
// TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromAtlasInterface"));

	UImage_SetBrushFromAtlasInterface_Params params;
	params.AtlasRegion = AtlasRegion;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromAsset
// ()
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromAsset"));

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrush
// ()
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrush"));

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.GetDynamicMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.GetDynamicMaterial"));

	UImage_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UImage::AfterRead()
{
	UWidget::AfterRead();

}

void UImage::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.InputKeySelector.SetTextBlockVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetTextBlockVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetTextBlockVisibility"));

	UInputKeySelector_SetTextBlockVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetSelectedKey
// ()
// Parameters:
// struct FInputChord             InSelectedKey                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetSelectedKey"));

	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// ()
// Parameters:
// struct FText                   InNoKeySpecifiedText           (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetNoKeySpecifiedText"));

	UInputKeySelector_SetNoKeySpecifiedText_Params params;
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// ()
// Parameters:
// struct FText                   InKeySelectionText             (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetKeySelectionText"));

	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetEscapeKeys
// ()
// Parameters:
// TArray<struct FKey>            InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetEscapeKeys(TArray<struct FKey> InKeys)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetEscapeKeys"));

	UInputKeySelector_SetEscapeKeys_Params params;
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// ()
// Parameters:
// bool                           bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetAllowModifierKeys"));

	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// ()
// Parameters:
// bool                           bInAllowGamepadKeys            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetAllowGamepadKeys"));

	UInputKeySelector_SetAllowGamepadKeys_Params params;
	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// ()
// Parameters:
// struct FInputChord             SelectedKey                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature"));

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// ()
void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature"));

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInputKeySelector::GetIsSelectingKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.GetIsSelectingKey"));

	UInputKeySelector_GetIsSelectingKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInputKeySelector::AfterRead()
{
	UWidget::AfterRead();

}

void UInputKeySelector::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.Int32Binding.GetValue
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInt32Binding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Int32Binding.GetValue"));

	UInt32Binding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInt32Binding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UInt32Binding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.InvalidationBox.SetCanCache
// ()
// Parameters:
// bool                           CanCache                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInvalidationBox::SetCanCache(bool CanCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.SetCanCache"));

	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InvalidationBox.InvalidateCache
// ()
void UInvalidationBox::InvalidateCache()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.InvalidateCache"));

	UInvalidationBox_InvalidateCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InvalidationBox.GetCanCache
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInvalidationBox::GetCanCache()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.GetCanCache"));

	UInvalidationBox_GetCanCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInvalidationBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void UInvalidationBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// ()
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntry.BP_OnItemSelectionChanged"));

	UUserListEntry_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// ()
// Parameters:
// bool                           bIsExpanded                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntry.BP_OnItemExpansionChanged"));

	UUserListEntry_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserListEntry.BP_OnEntryReleased
// ()
void UUserListEntry::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntry.BP_OnEntryReleased"));

	UUserListEntry_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUserListEntry::AfterRead()
{
	UInterface::AfterRead();

}

void UUserListEntry::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function UMG.UserListEntryLibrary.IsListItemSelected
// ()
// Parameters:
// TScriptInterface<class UUserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserListEntryLibrary::IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntryLibrary.IsListItemSelected"));

	UUserListEntryLibrary_IsListItemSelected_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// ()
// Parameters:
// TScriptInterface<class UUserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserListEntryLibrary::IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntryLibrary.IsListItemExpanded"));

	UUserListEntryLibrary_IsListItemExpanded_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserListEntryLibrary.GetOwningListView
// ()
// Parameters:
// TScriptInterface<class UUserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UListViewBase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UListViewBase* UUserListEntryLibrary::GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserListEntryLibrary.GetOwningListView"));

	UUserListEntryLibrary_GetOwningListView_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserListEntryLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UUserListEntryLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function UMG.UserObjectListEntry.OnListItemObjectSet
// ()
// Parameters:
// class UObject*                 ListItemObject                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserObjectListEntry.OnListItemObjectSet"));

	UUserObjectListEntry_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUserObjectListEntry::AfterRead()
{
	UUserListEntry::AfterRead();

}

void UUserObjectListEntry::BeforeDelete()
{
	UUserListEntry::BeforeDelete();

}

// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// ()
// Parameters:
// TScriptInterface<class UUserObjectListEntry> UserObjectListEntry            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UUserObjectListEntryLibrary::GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserObjectListEntryLibrary.GetListItemObject"));

	UUserObjectListEntryLibrary_GetListItemObject_Params params;
	params.UserObjectListEntry = UserObjectListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserObjectListEntryLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UUserObjectListEntryLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UListViewDesignerPreviewItem::AfterRead()
{
	UObject::AfterRead();

}

void UListViewDesignerPreviewItem::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.MenuAnchor.ToggleOpen
// ()
// Parameters:
// bool                           bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ToggleOpen"));

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::ShouldOpenDueToClick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ShouldOpenDueToClick"));

	UMenuAnchor_ShouldOpenDueToClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.SetPlacement
// ()
// Parameters:
// TEnumAsByte<SlateCore_EMenuPlacement> InPlacement                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::SetPlacement(TEnumAsByte<SlateCore_EMenuPlacement> InPlacement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.SetPlacement"));

	UMenuAnchor_SetPlacement_Params params;
	params.InPlacement = InPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.Open
// ()
// Parameters:
// bool                           bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::Open(bool bFocusMenu)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Open"));

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.IsOpen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.IsOpen"));

	UMenuAnchor_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::HasOpenSubMenus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.HasOpenSubMenus"));

	UMenuAnchor_HasOpenSubMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// ()
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature"));

	UMenuAnchor_GetUserWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.GetMenuPosition"));

	UMenuAnchor_GetMenuPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.FitInWindow
// ()
// Parameters:
// bool                           bFit                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::FitInWindow(bool bFit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.FitInWindow"));

	UMenuAnchor_FitInWindow_Params params;
	params.bFit = bFit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.Close
// ()
void UMenuAnchor::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Close"));

	UMenuAnchor_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMenuAnchor::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(MenuClass, UClass);
}

void UMenuAnchor::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(MenuClass);
}

// Function UMG.MouseCursorBinding.GetValue
// ()
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UMouseCursorBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MouseCursorBinding.GetValue"));

	UMouseCursorBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMouseCursorBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UMouseCursorBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

void UMovieScene2DTransformPropertySystem::AfterRead()
{
	UMovieScenePropertySystem::AfterRead();

}

void UMovieScene2DTransformPropertySystem::BeforeDelete()
{
	UMovieScenePropertySystem::BeforeDelete();

}

void UMovieScene2DTransformSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene2DTransformSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene2DTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScene2DTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneMarginSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneMarginSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneMarginTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneMarginTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneWidgetMaterialTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

}

void UMovieSceneWidgetMaterialTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

}

// Function UMG.MultiLineEditableText.SetWidgetStyle
// ()
// Parameters:
// struct FTextBlockStyle         InWidgetStyle                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetWidgetStyle"));

	UMultiLineEditableText_SetWidgetStyle_Params params;
	params.InWidgetStyle = InWidgetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetText"));

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// ()
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetIsReadOnly"));

	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.SetHintText
// ()
// Parameters:
// struct FText                   InHintText                     (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetHintText"));

	UMultiLineEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.GetText"));

	UMultiLineEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MultiLineEditableText.GetHintText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableText::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.GetHintText"));

	UMultiLineEditableText_GetHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMultiLineEditableText::AfterRead()
{
	UTextLayoutWidget::AfterRead();

}

void UMultiLineEditableText::BeforeDelete()
{
	UTextLayoutWidget::BeforeDelete();

}

// Function UMG.MultiLineEditableTextBox.SetTextStyle
// ()
// Parameters:
// struct FTextBlockStyle         InTextStyle                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetTextStyle"));

	UMultiLineEditableTextBox_SetTextStyle_Params params;
	params.InTextStyle = InTextStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetText"));

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// ()
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetIsReadOnly"));

	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetHintText
// ()
// Parameters:
// struct FText                   InHintText                     (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetHintText"));

	UMultiLineEditableTextBox_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetError
// ()
// Parameters:
// struct FText                   InError                        (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetError"));

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.GetText"));

	UMultiLineEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.GetHintText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableTextBox::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.GetHintText"));

	UMultiLineEditableTextBox_GetHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMultiLineEditableTextBox::AfterRead()
{
	UTextLayoutWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UMultiLineEditableTextBox::BeforeDelete()
{
	UTextLayoutWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

void UNamedSlot::AfterRead()
{
	UContentWidget::AfterRead();

}

void UNamedSlot::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

void UNamedSlotInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNamedSlotInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNativeWidgetHost::AfterRead()
{
	UWidget::AfterRead();

}

void UNativeWidgetHost::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.Overlay.AddChildToOverlay
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Overlay.AddChildToOverlay"));

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UOverlay::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UOverlay::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.OverlaySlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetVerticalAlignment"));

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.OverlaySlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetPadding"));

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetHorizontalAlignment"));

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOverlaySlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UOverlaySlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.ProgressBar.SetPercent
// ()
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetPercent"));

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ProgressBar.SetIsMarquee
// ()
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetIsMarquee"));

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetFillColorAndOpacity"));

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UProgressBar::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BackgroundImage, USlateBrushAsset);
	READ_PTR_FULL(FillImage, USlateBrushAsset);
	READ_PTR_FULL(MarqueeImage, USlateBrushAsset);
}

void UProgressBar::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BackgroundImage);
	DELE_PTR_FULL(FillImage);
	DELE_PTR_FULL(MarqueeImage);
}

// Function UMG.RetainerBox.SetTextureParameter
// ()
// Parameters:
// struct FName                   TextureParameter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetTextureParameter(const struct FName& TextureParameter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetTextureParameter"));

	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.SetRetainRendering
// ()
// Parameters:
// bool                           bInRetainRendering             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetRetainRendering(bool bInRetainRendering)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetRetainRendering"));

	URetainerBox_SetRetainRendering_Params params;
	params.bInRetainRendering = bInRetainRendering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.SetRenderingPhase
// ()
// Parameters:
// int                            RenderPhase                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TotalPhases                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetRenderingPhase(int RenderPhase, int TotalPhases)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetRenderingPhase"));

	URetainerBox_SetRenderingPhase_Params params;
	params.RenderPhase = RenderPhase;
	params.TotalPhases = TotalPhases;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.SetEffectMaterial
// ()
// Parameters:
// class UMaterialInterface*      EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetEffectMaterial"));

	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.RequestRender
// ()
void URetainerBox::RequestRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.RequestRender"));

	URetainerBox_RequestRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.GetEffectMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.GetEffectMaterial"));

	URetainerBox_GetEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URetainerBox::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(EffectMaterial, UMaterialInterface);
}

void URetainerBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(EffectMaterial);
}

void URichTextBlockImageDecorator::AfterRead()
{
	URichTextBlockDecorator::AfterRead();

	READ_PTR_FULL(ImageSet, UDataTable);
}

void URichTextBlockImageDecorator::BeforeDelete()
{
	URichTextBlockDecorator::BeforeDelete();

	DELE_PTR_FULL(ImageSet);
}

// Function UMG.SafeZone.SetSidesToPad
// ()
// Parameters:
// bool                           InPadLeft                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadRight                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadTop                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadBottom                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SafeZone.SetSidesToPad"));

	USafeZone_SetSidesToPad_Params params;
	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USafeZone::AfterRead()
{
	UContentWidget::AfterRead();

}

void USafeZone::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

void USafeZoneSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void USafeZoneSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.ScaleBox.SetUserSpecifiedScale
// ()
// Parameters:
// float                          InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetUserSpecifiedScale"));

	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetStretchDirection
// ()
// Parameters:
// TEnumAsByte<Slate_EStretchDirection> InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretchDirection"));

	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetStretch
// ()
// Parameters:
// TEnumAsByte<Slate_EStretch>    InStretch                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetStretch(TEnumAsByte<Slate_EStretch> InStretch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretch"));

	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// ()
// Parameters:
// bool                           bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetIgnoreInheritedScale"));

	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScaleBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void UScaleBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetVerticalAlignment"));

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetPadding"));

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetHorizontalAlignment"));

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScaleBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UScaleBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.ScrollBar.SetState
// ()
// Parameters:
// float                          InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBar.SetState"));

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScrollBar::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UScrollBar::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function UMG.ScrollBox.SetWheelScrollMultiplier
// ()
// Parameters:
// float                          NewWheelScrollMultiplier       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetWheelScrollMultiplier"));

	UScrollBox_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollOffset
// ()
// Parameters:
// float                          NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollOffset"));

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollbarVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           NewScrollBarVisibility         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarVisibility(UMG_ESlateVisibility NewScrollBarVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollbarVisibility"));

	UScrollBox_SetScrollbarVisibility_Params params;
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollbarThickness
// ()
// Parameters:
// struct FVector2D               NewScrollbarThickness          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollbarThickness"));

	UScrollBox_SetScrollbarThickness_Params params;
	params.NewScrollbarThickness = NewScrollbarThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollbarPadding
// ()
// Parameters:
// struct FMargin                 NewScrollbarPadding            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollbarPadding"));

	UScrollBox_SetScrollbarPadding_Params params;
	params.NewScrollbarPadding = NewScrollbarPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetOrientation
// ()
// Parameters:
// TEnumAsByte<SlateCore_EOrientation> NewOrientation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetOrientation"));

	UScrollBox_SetOrientation_Params params;
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetConsumeMouseWheel
// ()
// Parameters:
// SlateCore_EConsumeMouseWheel   NewConsumeMouseWheel           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetConsumeMouseWheel(SlateCore_EConsumeMouseWheel NewConsumeMouseWheel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetConsumeMouseWheel"));

	UScrollBox_SetConsumeMouseWheel_Params params;
	params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetAnimateWheelScrolling
// ()
// Parameters:
// bool                           bShouldAnimateWheelScrolling   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetAnimateWheelScrolling"));

	UScrollBox_SetAnimateWheelScrolling_Params params;
	params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// ()
// Parameters:
// bool                           NewAlwaysShowScrollbar         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetAlwaysShowScrollbar"));

	UScrollBox_SetAlwaysShowScrollbar_Params params;
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// ()
// Parameters:
// bool                           NewAllowOverscroll             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetAllowOverscroll"));

	UScrollBox_SetAllowOverscroll_Params params;
	params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// ()
// Parameters:
// class UWidget*                 WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Slate_EDescendantScrollDestination ScrollDestination              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Padding                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination, float Padding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollWidgetIntoView"));

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;
	params.Padding = Padding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollToStart
// ()
void UScrollBox::ScrollToStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToStart"));

	UScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollToEnd
// ()
void UScrollBox::ScrollToEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToEnd"));

	UScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.GetViewOffsetFraction
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetViewOffsetFraction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetViewOffsetFraction"));

	UScrollBox_GetViewOffsetFraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetScrollOffsetOfEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollOffsetOfEnd"));

	UScrollBox_GetScrollOffsetOfEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollOffset"));

	UScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ScrollBox.EndInertialScrolling
// ()
void UScrollBox::EndInertialScrolling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.EndInertialScrolling"));

	UScrollBox_EndInertialScrolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScrollBox::AfterRead()
{
	UPanelWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BarStyle, USlateWidgetStyleAsset);
}

void UScrollBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BarStyle);
}

// Function UMG.ScrollBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetVerticalAlignment"));

	UScrollBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetPadding"));

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetHorizontalAlignment"));

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScrollBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UScrollBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.SizeBox.SetWidthOverride
// ()
// Parameters:
// float                          InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetWidthOverride"));

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// ()
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredWidth"));

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// ()
// Parameters:
// float                          InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredHeight"));

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMinAspectRatio
// ()
// Parameters:
// float                          InMinAspectRatio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinAspectRatio"));

	USizeBox_SetMinAspectRatio_Params params;
	params.InMinAspectRatio = InMinAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// ()
// Parameters:
// float                          InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredWidth"));

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// ()
// Parameters:
// float                          InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredHeight"));

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// ()
// Parameters:
// float                          InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxAspectRatio"));

	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetHeightOverride
// ()
// Parameters:
// float                          InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetHeightOverride"));

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearWidthOverride
// ()
void USizeBox::ClearWidthOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearWidthOverride"));

	USizeBox_ClearWidthOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// ()
void USizeBox::ClearMinDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredWidth"));

	USizeBox_ClearMinDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// ()
void USizeBox::ClearMinDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredHeight"));

	USizeBox_ClearMinDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMinAspectRatio
// ()
void USizeBox::ClearMinAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinAspectRatio"));

	USizeBox_ClearMinAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// ()
void USizeBox::ClearMaxDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredWidth"));

	USizeBox_ClearMaxDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// ()
void USizeBox::ClearMaxDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredHeight"));

	USizeBox_ClearMaxDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// ()
void USizeBox::ClearMaxAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxAspectRatio"));

	USizeBox_ClearMaxAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearHeightOverride
// ()
void USizeBox::ClearHeightOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearHeightOverride"));

	USizeBox_ClearHeightOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USizeBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void USizeBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.SizeBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetVerticalAlignment"));

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetPadding"));

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetHorizontalAlignment"));

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USizeBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void USizeBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               LocalVector                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute"));

	USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalVector = LocalVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteVector                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal"));

	USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteVector = AbsoluteVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          LocalScalar                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute"));

	USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalScalar = LocalScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          AbsoluteScalar                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal"));

	USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteScalar = AbsoluteScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeWindowPosition         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal"));

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;
	params.bIncludeWindowPosition = bIncludeWindowPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeWindowPosition         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute"));

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.bIncludeWindowPosition = bIncludeWindowPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToViewport"));

	USlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PixelPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToViewport"));

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToAbsolute"));

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.IsUnderLocation"));

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft"));

	USlateBlueprintLibrary_GetLocalTopLeft_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetLocalSize"));

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize"));

	USlateBlueprintLibrary_GetAbsoluteSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// ()
// Parameters:
// struct FSlateBrush             A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSlateBrush             B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush"));

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteDesktopCoordinate      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PixelPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport"));

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// ()
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal"));

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USlateBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USlateBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void USlateVectorArtData::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void USlateVectorArtData::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Material);
}

void USlateAccessibleWidgetData::AfterRead()
{
	UObject::AfterRead();

}

void USlateAccessibleWidgetData::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.Slider.SetValue
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetValue"));

	USlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetStepSize
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetStepSize"));

	USlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetSliderHandleColor
// ()
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderHandleColor"));

	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetSliderBarColor
// ()
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderBarColor"));

	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetMinValue
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetMinValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetMinValue"));

	USlider_SetMinValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetMaxValue
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetMaxValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetMaxValue"));

	USlider_SetMaxValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetLocked
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetLocked"));

	USlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetIndentHandle
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetIndentHandle"));

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.GetValue"));

	USlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Slider.GetNormalizedValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlider::GetNormalizedValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.GetNormalizedValue"));

	USlider_GetNormalizedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USlider::AfterRead()
{
	UWidget::AfterRead();

}

void USlider::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.Spacer.SetSize
// ()
// Parameters:
// struct FVector2D               InSize                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpacer::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Spacer.SetSize"));

	USpacer_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USpacer::AfterRead()
{
	UWidget::AfterRead();

}

void USpacer::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function UMG.SpinBox.SetValue
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetValue"));

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMinValue
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinValue"));

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMinSliderValue
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinSliderValue"));

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMinFractionalDigits
// ()
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinFractionalDigits(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinFractionalDigits"));

	USpinBox_SetMinFractionalDigits_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMaxValue
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxValue"));

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMaxSliderValue
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxSliderValue"));

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMaxFractionalDigits
// ()
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxFractionalDigits(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxFractionalDigits"));

	USpinBox_SetMaxFractionalDigits_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetForegroundColor
// ()
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm, NativeAccessSpecifierPublic)
void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetForegroundColor"));

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetDelta
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetDelta(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetDelta"));

	USpinBox_SetDelta_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// ()
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap"));

	USpinBox_SetAlwaysUsesDeltaSnap_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// ()
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature"));

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetValue"));

	USpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinValue"));

	USpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinSliderValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinSliderValue"));

	USpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinFractionalDigits
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USpinBox::GetMinFractionalDigits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinFractionalDigits"));

	USpinBox_GetMinFractionalDigits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxValue"));

	USpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxSliderValue"));

	USpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxFractionalDigits
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USpinBox::GetMaxFractionalDigits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxFractionalDigits"));

	USpinBox_GetMaxFractionalDigits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetDelta
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetDelta"));

	USpinBox_GetDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpinBox::GetAlwaysUsesDeltaSnap()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap"));

	USpinBox_GetAlwaysUsesDeltaSnap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// ()
void USpinBox::ClearMinValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinValue"));

	USpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMinSliderValue
// ()
void USpinBox::ClearMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinSliderValue"));

	USpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMaxValue
// ()
void USpinBox::ClearMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxValue"));

	USpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// ()
void USpinBox::ClearMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxSliderValue"));

	USpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USpinBox::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void USpinBox::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function UMG.TextBinding.GetTextValue
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBinding::GetTextValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetTextValue"));

	UTextBinding_GetTextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTextBinding::GetStringValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetStringValue"));

	UTextBinding_GetStringValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTextBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UTextBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.Throbber.SetNumberOfPieces
// ()
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetNumberOfPieces"));

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateVertically
// ()
// Parameters:
// bool                           bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateVertically"));

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateOpacity
// ()
// Parameters:
// bool                           bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateOpacity"));

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateHorizontally
// ()
// Parameters:
// bool                           bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateHorizontally"));

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UThrobber::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(PieceImage, USlateBrushAsset);
}

void UThrobber::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(PieceImage);
}

// Function UMG.ListViewBase.SetWheelScrollMultiplier
// ()
// Parameters:
// float                          NewWheelScrollMultiplier       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.SetWheelScrollMultiplier"));

	UListViewBase_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.SetScrollOffset
// ()
// Parameters:
// float                          InScrollOffset                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetScrollOffset(float InScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.SetScrollOffset"));

	UListViewBase_SetScrollOffset_Params params;
	params.InScrollOffset = InScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.SetScrollbarVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetScrollbarVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.SetScrollbarVisibility"));

	UListViewBase_SetScrollbarVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.ScrollToTop
// ()
void UListViewBase::ScrollToTop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.ScrollToTop"));

	UListViewBase_ScrollToTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.ScrollToBottom
// ()
void UListViewBase::ScrollToBottom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.ScrollToBottom"));

	UListViewBase_ScrollToBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.RequestRefresh
// ()
void UListViewBase::RequestRefresh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.RequestRefresh"));

	UListViewBase_RequestRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.RegenerateAllEntries
// ()
void UListViewBase::RegenerateAllEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.RegenerateAllEntries"));

	UListViewBase_RegenerateAllEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// ()
// Parameters:
// TArray<class UUserWidget*>     ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListViewBase.GetDisplayedEntryWidgets"));

	UListViewBase_GetDisplayedEntryWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UListViewBase::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(EntryWidgetClass, UClass);
}

void UListViewBase::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(EntryWidgetClass);
}

// Function UMG.ListView.SetSelectionMode
// ()
// Parameters:
// TEnumAsByte<Slate_ESelectionMode> SelectionMode                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::SetSelectionMode(TEnumAsByte<Slate_ESelectionMode> SelectionMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.SetSelectionMode"));

	UListView_SetSelectionMode_Params params;
	params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.SetSelectedIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.SetSelectedIndex"));

	UListView_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.ScrollIndexIntoView
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::ScrollIndexIntoView(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.ScrollIndexIntoView"));

	UListView_ScrollIndexIntoView_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.RemoveItem
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::RemoveItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.RemoveItem"));

	UListView_RemoveItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.NavigateToIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::NavigateToIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.NavigateToIndex"));

	UListView_NavigateToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.IsRefreshPending
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::IsRefreshPending()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.IsRefreshPending"));

	UListView_IsRefreshPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.GetNumItems
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::GetNumItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.GetNumItems"));

	UListView_GetNumItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.GetListItems
// ()
// Parameters:
// TArray<class UObject*>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UListView::GetListItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.GetListItems"));

	UListView_GetListItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.GetItemAt
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UListView::GetItemAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.GetItemAt"));

	UListView_GetItemAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.GetIndexForItem
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::GetIndexForItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.GetIndexForItem"));

	UListView_GetIndexForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.ClearListItems
// ()
void UListView::ClearListItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.ClearListItems"));

	UListView_ClearListItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_SetSelectedItem
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_SetSelectedItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_SetSelectedItem"));

	UListView_BP_SetSelectedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_SetListItems
// ()
// Parameters:
// TArray<class UObject*>         InListItems                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UListView::BP_SetListItems(TArray<class UObject*> InListItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_SetListItems"));

	UListView_BP_SetListItems_Params params;
	params.InListItems = InListItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_SetItemSelection
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_SetItemSelection"));

	UListView_BP_SetItemSelection_Params params;
	params.Item = Item;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_ScrollItemIntoView
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_ScrollItemIntoView"));

	UListView_BP_ScrollItemIntoView_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_NavigateToItem
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_NavigateToItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_NavigateToItem"));

	UListView_BP_NavigateToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_IsItemVisible
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::BP_IsItemVisible(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_IsItemVisible"));

	UListView_BP_IsItemVisible_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetSelectedItems
// ()
// Parameters:
// TArray<class UObject*>         Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_GetSelectedItems"));

	UListView_BP_GetSelectedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;


	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetSelectedItem
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UListView::BP_GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_GetSelectedItem"));

	UListView_BP_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetNumItemsSelected
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::BP_GetNumItemsSelected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_GetNumItemsSelected"));

	UListView_BP_GetNumItemsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ListView.BP_ClearSelection
// ()
void UListView::BP_ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_ClearSelection"));

	UListView_BP_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.BP_CancelScrollIntoView
// ()
void UListView::BP_CancelScrollIntoView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.BP_CancelScrollIntoView"));

	UListView_BP_CancelScrollIntoView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ListView.AddItem
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::AddItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ListView.AddItem"));

	UListView_AddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UListView::AfterRead()
{
	UListViewBase::AfterRead();

}

void UListView::BeforeDelete()
{
	UListViewBase::BeforeDelete();

}

// Function UMG.TileView.SetEntryWidth
// ()
// Parameters:
// float                          NewWidth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::SetEntryWidth(float NewWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetEntryWidth"));

	UTileView_SetEntryWidth_Params params;
	params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TileView.SetEntryHeight
// ()
// Parameters:
// float                          NewHeight                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::SetEntryHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetEntryHeight"));

	UTileView_SetEntryHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TileView.GetEntryWidth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTileView::GetEntryWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.GetEntryWidth"));

	UTileView_GetEntryWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TileView.GetEntryHeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTileView::GetEntryHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.GetEntryHeight"));

	UTileView_GetEntryHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTileView::AfterRead()
{
	UListView::AfterRead();

}

void UTileView::BeforeDelete()
{
	UListView::BeforeDelete();

}

// Function UMG.TreeView.SetItemExpansion
// ()
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExpandItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TreeView.SetItemExpansion"));

	UTreeView_SetItemExpansion_Params params;
	params.Item = Item;
	params.bExpandItem = bExpandItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TreeView.ExpandAll
// ()
void UTreeView::ExpandAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TreeView.ExpandAll"));

	UTreeView_ExpandAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TreeView.CollapseAll
// ()
void UTreeView::CollapseAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TreeView.CollapseAll"));

	UTreeView_CollapseAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTreeView::AfterRead()
{
	UListView::AfterRead();

}

void UTreeView::BeforeDelete()
{
	UListView::BeforeDelete();

}

// Function UMG.UMGSequencePlayer.SetUserTag
// ()
// Parameters:
// struct FName                   InUserTag                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGSequencePlayer::SetUserTag(const struct FName& InUserTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UMGSequencePlayer.SetUserTag"));

	UUMGSequencePlayer_SetUserTag_Params params;
	params.InUserTag = InUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UMGSequencePlayer.GetUserTag
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UUMGSequencePlayer::GetUserTag()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UMGSequencePlayer.GetUserTag"));

	UUMGSequencePlayer_GetUserTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUMGSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Animation, UWidgetAnimation);
}

void UUMGSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Animation);
}

void UUMGSequenceTickManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Linker, UMovieSceneEntitySystemLinker);
}

void UUMGSequenceTickManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Linker);
}

// Function UMG.UniformGridPanel.SetSlotPadding
// ()
// Parameters:
// struct FMargin                 InSlotPadding                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetSlotPadding"));

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// ()
// Parameters:
// float                          InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth"));

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// ()
// Parameters:
// float                          InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight"));

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.AddChildToUniformGrid"));

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUniformGridPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UUniformGridPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.UniformGridSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetVerticalAlignment"));

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetRow
// ()
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetRow"));

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetHorizontalAlignment"));

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetColumn
// ()
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetColumn"));

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUniformGridSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UUniformGridSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.VerticalBox.AddChildToVerticalBox
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBox.AddChildToVerticalBox"));

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVerticalBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UVerticalBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetVerticalAlignment"));

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetSize
// ()
// Parameters:
// struct FSlateChildSize         InSize                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetSize"));

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetPadding"));

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetHorizontalAlignment"));

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVerticalBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UVerticalBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.Viewport.Spawn
// ()
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.Spawn"));

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.SetViewRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewRotation"));

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Viewport.SetViewLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UViewport::SetViewLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewLocation"));

	UViewport_SetViewLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Viewport.GetViewRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UViewport::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewRotation"));

	UViewport_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWorld* UViewport::GetViewportWorld()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewportWorld"));

	UViewport_GetViewportWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UViewport::GetViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewLocation"));

	UViewport_GetViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UViewport::AfterRead()
{
	UContentWidget::AfterRead();

}

void UViewport::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.VisibilityBinding.GetValue
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UVisibilityBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VisibilityBinding.GetValue"));

	UVisibilityBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVisibilityBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UVisibilityBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.UnbindFromAnimationStarted"));

	UWidgetAnimation_UnbindFromAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.UnbindFromAnimationFinished"));

	UWidgetAnimation_UnbindFromAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted"));

	UWidgetAnimation_UnbindAllFromAnimationStarted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished"));

	UWidgetAnimation_UnbindAllFromAnimationFinished_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetAnimation.GetStartTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetStartTime"));

	UWidgetAnimation_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetEndTime"));

	UWidgetAnimation_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.BindToAnimationStarted"));

	UWidgetAnimation_BindToAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetAnimation.BindToAnimationFinished
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.BindToAnimationFinished"));

	UWidgetAnimation_BindToAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidgetAnimation::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UWidgetAnimation::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void UWidgetAnimationDelegateBinding::AfterRead()
{
	UDynamicBlueprintBinding::AfterRead();

}

void UWidgetAnimationDelegateBinding::BeforeDelete()
{
	UDynamicBlueprintBinding::BeforeDelete();

}

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// ()
// Parameters:
// class UUMGSequencePlayer*      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimationPlayCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject"));

	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// ()
// Parameters:
// class UUMGSequencePlayer*      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimationPlayCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject"));

	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


void UWidgetAnimationPlayCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UWidgetAnimationPlayCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.WidgetBinding.GetValue
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBinding.GetValue"));

	UWidgetBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UWidgetBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

void UWidgetBlueprintGeneratedClass::AfterRead()
{
	UBlueprintGeneratedClass::AfterRead();

	READ_PTR_FULL(WidgetTree, UWidgetTree);
}

void UWidgetBlueprintGeneratedClass::BeforeDelete()
{
	UBlueprintGeneratedClass::BeforeDelete();

	DELE_PTR_FULL(WidgetTree);
}

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.UnlockMouse"));

	UWidgetBlueprintLibrary_UnlockMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Unhandled"));

	UWidgetBlueprintLibrary_Unhandled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// ()
// Parameters:
// class UWidget*                 TitleBarContent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EWindowTitleBarMode     Mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTitleBarDragEnabled           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWindowButtonsVisible          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTitleBarVisible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, Engine_EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState"));

	UWidgetBlueprintLibrary_SetWindowTitleBarState_Params params;
	params.TitleBarContent = TitleBarContent;
	params.Mode = Mode;
	params.bTitleBarDragEnabled = bTitleBarDragEnabled;
	params.bWindowButtonsVisible = bWindowButtonsVisible;
	params.bTitleBarVisible = bTitleBarVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// ()
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate"));

	UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive"));

	UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetUserFocus"));

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D               NewMousePosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetMousePosition"));

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EMouseLockMode          InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// ()
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EMouseLockMode          InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// ()
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<CoreUObject_EMouseCursor> CursorShape                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   CursorName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               HotSpot                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor"));

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// ()
void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// ()
// Parameters:
// SlateCore_EColorVisionDeficiency Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           CorrectDeficiency              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowCorrectionWithDeficiency   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(SlateCore_EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType"));

	UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params params;
	params.Type = Type;
	params.Severity = Severity;
	params.CorrectDeficiency = CorrectDeficiency;
	params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// ()
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture"));

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// ()
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial"));

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// ()
void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState"));

	UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture"));

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture"));

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// ()
void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature"));

	UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.NoResourceBrush"));

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture"));

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// ()
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial"));

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// ()
// Parameters:
// class USlateBrushAsset*        BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset"));

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.LockMouse"));

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.IsDragDropping"));

	UWidgetBlueprintLibrary_IsDragDropping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Handled"));

	UWidgetBlueprintLibrary_Handled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                SafePadding                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                SpillOverPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding"));

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// ()
// Parameters:
// struct FAnalogInputEvent       Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FKeyEvent               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent"));

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// ()
// Parameters:
// struct FPointerEvent           Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// ()
// Parameters:
// struct FNavigationEvent        Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// ()
// Parameters:
// struct FKeyEvent               Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// ()
// Parameters:
// struct FCharacterEvent         Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// ()
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial"));

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// ()
// Parameters:
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent"));

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// ()
// Parameters:
// struct FSlateBrush             Brush                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D"));

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// ()
// Parameters:
// struct FSlateBrush             Brush                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial"));

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// ()
// Parameters:
// struct FSlateBrush             Brush                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResource"));

	UWidgetBlueprintLibrary_GetBrushResource_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UClass*                  Interface                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface"));

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass"));

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.EndDragDrop"));

	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D               position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                   Font                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   FontTypeFace                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted"));

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.position = position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 inString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& position, const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawText"));

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.position = position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLines"));

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               PositionA                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PositionB                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLine"));

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// ()
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USlateBrushAsset*        Brush                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, const struct FVector2D& position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawBox"));

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.position = position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// ()
void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DismissAllMenus"));

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// ()
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    DragKey                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed"));

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    DragKey                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDrag"));

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// ()
// Parameters:
// class UClass*                  OperationClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation"));

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WidgetType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Create"));

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ClearUserFocus"));

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureMouse"));

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// ()
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureJoystick"));

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// ()
void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CancelDragDrop"));

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidgetBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWidgetBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function UMG.WidgetComponent.SetWindowVisibility
// ()
// Parameters:
// UMG_EWindowVisibility          InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWindowVisibility(UMG_EWindowVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWindowVisibility"));

	UWidgetComponent_SetWindowVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetWindowFocusable
// ()
// Parameters:
// bool                           bInWindowFocusable             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWindowFocusable"));

	UWidgetComponent_SetWindowFocusable_Params params;
	params.bInWindowFocusable = bInWindowFocusable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetWidgetSpace
// ()
// Parameters:
// UMG_EWidgetSpace               NewSpace                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWidgetSpace(UMG_EWidgetSpace NewSpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWidgetSpace"));

	UWidgetComponent_SetWidgetSpace_Params params;
	params.NewSpace = NewSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetWidget
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWidget"));

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetTwoSided
// ()
// Parameters:
// bool                           bWantTwoSided                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetTwoSided"));

	UWidgetComponent_SetTwoSided_Params params;
	params.bWantTwoSided = bWantTwoSided;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            NewTintColorAndOpacity         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetTintColorAndOpacity"));

	UWidgetComponent_SetTintColorAndOpacity_Params params;
	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetTickWhenOffscreen
// ()
// Parameters:
// bool                           bWantTickWhenOffscreen         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetTickWhenOffscreen"));

	UWidgetComponent_SetTickWhenOffscreen_Params params;
	params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetTickMode
// ()
// Parameters:
// UMG_ETickMode                  InTickMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTickMode(UMG_ETickMode InTickMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetTickMode"));

	UWidgetComponent_SetTickMode_Params params;
	params.InTickMode = InTickMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetRedrawTime
// ()
// Parameters:
// float                          InRedrawTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetRedrawTime"));

	UWidgetComponent_SetRedrawTime_Params params;
	params.InRedrawTime = InRedrawTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetPivot
// ()
// Parameters:
// struct FVector2D               InPivot                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetPivot"));

	UWidgetComponent_SetPivot_Params params;
	params.InPivot = InPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// ()
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetOwnerPlayer"));

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetManuallyRedraw
// ()
// Parameters:
// bool                           bUseManualRedraw               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetManuallyRedraw"));

	UWidgetComponent_SetManuallyRedraw_Params params;
	params.bUseManualRedraw = bUseManualRedraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetGeometryMode
// ()
// Parameters:
// UMG_EWidgetGeometryMode        InGeometryMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetGeometryMode(UMG_EWidgetGeometryMode InGeometryMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetGeometryMode"));

	UWidgetComponent_SetGeometryMode_Params params;
	params.InGeometryMode = InGeometryMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetDrawSize
// ()
// Parameters:
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetDrawSize"));

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// ()
// Parameters:
// bool                           bInDrawAtDesiredSize           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetDrawAtDesiredSize"));

	UWidgetComponent_SetDrawAtDesiredSize_Params params;
	params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// ()
// Parameters:
// float                          InCylinderArcAngle             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetCylinderArcAngle"));

	UWidgetComponent_SetCylinderArcAngle_Params params;
	params.InCylinderArcAngle = InCylinderArcAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// ()
// Parameters:
// struct FLinearColor            NewBackgroundColor             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetBackgroundColor"));

	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.RequestRedraw
// ()
void UWidgetComponent::RequestRedraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.RequestRedraw"));

	UWidgetComponent_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.IsWidgetVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::IsWidgetVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.IsWidgetVisible"));

	UWidgetComponent_IsWidgetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWindowVisiblility
// ()
// Parameters:
// UMG_EWindowVisibility          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWindowVisibility UWidgetComponent::GetWindowVisiblility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetWindowVisiblility"));

	UWidgetComponent_GetWindowVisiblility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWindowFocusable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetWindowFocusable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetWindowFocusable"));

	UWidgetComponent_GetWindowFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWidgetSpace
// ()
// Parameters:
// UMG_EWidgetSpace               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWidgetSpace UWidgetComponent::GetWidgetSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetWidgetSpace"));

	UWidgetComponent_GetWidgetSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWidget
// ()
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetComponent::GetWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetWidget"));

	UWidgetComponent_GetWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetUserWidgetObject
// ()
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetUserWidgetObject"));

	UWidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetTwoSided
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetTwoSided()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetTwoSided"));

	UWidgetComponent_GetTwoSided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetTickWhenOffscreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetTickWhenOffscreen"));

	UWidgetComponent_GetTickWhenOffscreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// ()
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetRenderTarget"));

	UWidgetComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRedrawTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetComponent::GetRedrawTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetRedrawTime"));

	UWidgetComponent_GetRedrawTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetPivot
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetPivot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetPivot"));

	UWidgetComponent_GetPivot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// ()
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetOwnerPlayer"));

	UWidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetMaterialInstance"));

	UWidgetComponent_GetMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetManuallyRedraw
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetManuallyRedraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetManuallyRedraw"));

	UWidgetComponent_GetManuallyRedraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetGeometryMode
// ()
// Parameters:
// UMG_EWidgetGeometryMode        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetGeometryMode"));

	UWidgetComponent_GetGeometryMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetDrawSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetDrawSize"));

	UWidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetDrawAtDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetDrawAtDesiredSize"));

	UWidgetComponent_GetDrawAtDesiredSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetComponent::GetCylinderArcAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetCylinderArcAngle"));

	UWidgetComponent_GetCylinderArcAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetCurrentDrawSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetCurrentDrawSize"));

	UWidgetComponent_GetCurrentDrawSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(WidgetClass, UClass);
	READ_PTR_FULL(OwnerPlayer, ULocalPlayer);
	READ_PTR_FULL(BodySetup, UBodySetup);
	READ_PTR_FULL(TranslucentMaterial, UMaterialInterface);
	READ_PTR_FULL(TranslucentMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(OpaqueMaterial, UMaterialInterface);
	READ_PTR_FULL(OpaqueMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(MaskedMaterial, UMaterialInterface);
	READ_PTR_FULL(MaskedMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(RenderTarget, UTextureRenderTarget2D);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(Widget, UUserWidget);
}

void UWidgetComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(WidgetClass);
	DELE_PTR_FULL(OwnerPlayer);
	DELE_PTR_FULL(BodySetup);
	DELE_PTR_FULL(TranslucentMaterial);
	DELE_PTR_FULL(TranslucentMaterial_OneSided);
	DELE_PTR_FULL(OpaqueMaterial);
	DELE_PTR_FULL(OpaqueMaterial_OneSided);
	DELE_PTR_FULL(MaskedMaterial);
	DELE_PTR_FULL(MaskedMaterial_OneSided);
	DELE_PTR_FULL(RenderTarget);
	DELE_PTR_FULL(MaterialInstance);
	DELE_PTR_FULL(Widget);
}

// Function UMG.WidgetInteractionComponent.SetFocus
// ()
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SetFocus"));

	UWidgetInteractionComponent_SetFocus_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// ()
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SetCustomHitResult"));

	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// ()
// Parameters:
// struct FString                 Characters                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SendKeyChar"));

	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// ()
// Parameters:
// float                          ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ScrollWheel"));

	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleasePointerKey"));

	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleaseKey"));

	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressPointerKey"));

	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.PressKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressKey"));

	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressAndReleaseKey"));

	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget"));

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget"));

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget"));

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// ()
// Parameters:
// struct FHitResult              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetLastHitResult"));

	UWidgetInteractionComponent_GetLastHitResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// ()
// Parameters:
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent"));

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.Get2DHitLocation"));

	UWidgetInteractionComponent_Get2DHitLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetInteractionComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(HoveredWidgetComponent, UWidgetComponent);
}

void UWidgetInteractionComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(HoveredWidgetComponent);
}

// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot"));

	UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetSwitcherSlot*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot"));

	UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot"));

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USizeBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot"));

	UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScrollBoxSlot*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot"));

	UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScaleBoxSlot*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot"));

	UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USafeZoneSlot*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot"));

	UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot"));

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot"));

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot"));

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// ()
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBorderSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot"));

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets"));

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerViewportRelative        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition"));

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry"));

	UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportSize"));

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportScale"));

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry"));

	UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// ()
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI"));

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport"));

	UWidgetLayoutLibrary_GetMousePositionOnViewport_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform"));

	UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetLayoutLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWidgetLayoutLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWidgetNavigation::AfterRead()
{
	UObject::AfterRead();

}

void UWidgetNavigation::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment"));

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetPadding"));

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment"));

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidgetSwitcherSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UWidgetSwitcherSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

void UWidgetTree::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RootWidget, UWidget);
}

void UWidgetTree::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RootWidget);
}

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetVerticalAlignment"));

	UWindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarArea.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetPadding"));

	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetHorizontalAlignment"));

	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWindowTitleBarArea::AfterRead()
{
	UContentWidget::AfterRead();

}

void UWindowTitleBarArea::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment"));

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetPadding"));

	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment"));

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWindowTitleBarAreaSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UWindowTitleBarAreaSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function UMG.WrapBox.SetInnerSlotPadding
// ()
// Parameters:
// struct FVector2D               InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.SetInnerSlotPadding"));

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBox.AddChildToWrapBox
// ()
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.AddChildToWrapBox"));

	UWrapBox_AddChildToWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWrapBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UWrapBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function UMG.WrapBoxSlot.SetVerticalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetVerticalAlignment"));

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetPadding
// ()
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetPadding"));

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// ()
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetHorizontalAlignment"));

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// ()
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan"));

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// ()
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillEmptySpace"));

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWrapBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UWrapBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
