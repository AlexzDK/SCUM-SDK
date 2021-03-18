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

// Function UI_CharacterNameWidget.UI_CharacterNameWidget_C.SetText
// ()
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_CharacterNameWidget_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_CharacterNameWidget.UI_CharacterNameWidget_C.SetText"));

	UUI_CharacterNameWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CharacterNameWidget_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(MainText, UTextBlock);
}

void UUI_CharacterNameWidget_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(MainText);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
