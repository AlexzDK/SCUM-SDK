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

// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WeaponScopeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick"));

	UBP_WeaponScopeWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
// ()
void UBP_WeaponScopeWidget_C::OnShowElements()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements"));

	UBP_WeaponScopeWidget_C_OnShowElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
// ()
void UBP_WeaponScopeWidget_C::OnHideElements()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements"));

	UBP_WeaponScopeWidget_C_OnHideElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
// ()
void UBP_WeaponScopeWidget_C::OnConstructFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished"));

	UBP_WeaponScopeWidget_C_OnConstructFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// ()
void UBP_WeaponScopeWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	UBP_WeaponScopeWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WeaponScopeWidget_C::ExecuteUbergraph_BP_WeaponScopeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget"));

	UBP_WeaponScopeWidget_C_ExecuteUbergraph_BP_WeaponScopeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_WeaponScopeWidget_C::AfterRead()
{
	UWeaponScopeWidget::AfterRead();

	READ_PTR_FULL(FadeOut, UWidgetAnimation);
	READ_PTR_FULL(FadeIn, UWidgetAnimation);
	READ_PTR_FULL(BlackBG, UBorder);
	READ_PTR_FULL(BorderLeft, UBorder);
	READ_PTR_FULL(BorderRight, UBorder);
	READ_PTR_FULL(Reticle, UImage);
	READ_PTR_FULL(ScaleBox_1, UScaleBox);
	READ_PTR_FULL(SizeBox_1, USizeBox);
	READ_PTR_FULL(SizeBox_2, USizeBox);
}

void UBP_WeaponScopeWidget_C::BeforeDelete()
{
	UWeaponScopeWidget::BeforeDelete();

	DELE_PTR_FULL(FadeOut);
	DELE_PTR_FULL(FadeIn);
	DELE_PTR_FULL(BlackBG);
	DELE_PTR_FULL(BorderLeft);
	DELE_PTR_FULL(BorderRight);
	DELE_PTR_FULL(Reticle);
	DELE_PTR_FULL(ScaleBox_1);
	DELE_PTR_FULL(SizeBox_1);
	DELE_PTR_FULL(SizeBox_2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
