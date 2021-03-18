#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_CharacterNameWidget.UI_CharacterNameWidget_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UUI_CharacterNameWidget_C : public UUserWidget
{
public:
	class UTextBlock*                                  MainText;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_CharacterNameWidget.UI_CharacterNameWidget_C"));
		return ptr;
	}



	void SetText(const struct FText& Text);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
