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

// Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.UpdateHair
// ()
void ABP_PrisonerCorpse_C::UpdateHair()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.UpdateHair"));

	ABP_PrisonerCorpse_C_UpdateHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.ExecuteUbergraph_BP_PrisonerCorpse
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrisonerCorpse_C::ExecuteUbergraph_BP_PrisonerCorpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.ExecuteUbergraph_BP_PrisonerCorpse"));

	ABP_PrisonerCorpse_C_ExecuteUbergraph_BP_PrisonerCorpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PrisonerCorpse_C::AfterRead()
{
	APrisonerCorpse::AfterRead();

	READ_PTR_FULL(ShortHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(MediumHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(LongHairCurve, UCurveFloat);
	READ_PTR_FULL(LongHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(LongHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(ShortFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(AfroMediumHairCurve, UCurveFloat);
}

void ABP_PrisonerCorpse_C::BeforeDelete()
{
	APrisonerCorpse::BeforeDelete();

	DELE_PTR_FULL(ShortHairCurve);
	DELE_PTR_FULL(MediumHairCurve);
	DELE_PTR_FULL(MediumHairCurvePDO);
	DELE_PTR_FULL(MediumHairCurveTopOpacity);
	DELE_PTR_FULL(LongHairCurve);
	DELE_PTR_FULL(LongHairCurvePDO);
	DELE_PTR_FULL(LongHairCurveTopOpacity);
	DELE_PTR_FULL(ShortFacialHairCurve);
	DELE_PTR_FULL(MediumFacialHairCurve);
	DELE_PTR_FULL(MediumFacialHairCurvePDO);
	DELE_PTR_FULL(MediumFacialHairCurveTopOpacity);
	DELE_PTR_FULL(LongFacialHairCurve);
	DELE_PTR_FULL(LongFacialHairCurvePDO);
	DELE_PTR_FULL(LongFacialHairCurveTopOpacity);
	DELE_PTR_FULL(AfroMediumHairCurve);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
