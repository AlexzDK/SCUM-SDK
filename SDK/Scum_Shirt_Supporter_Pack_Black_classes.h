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

// BlueprintGeneratedClass Scum_Shirt_Supporter_Pack_Black.Scum_Shirt_Supporter_Pack_Black_C
// 0x0000 (FullSize[0x0818] - InheritedSize[0x0818])
class AScum_Shirt_Supporter_Pack_Black_C : public AClothesItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Scum_Shirt_Supporter_Pack_Black.Scum_Shirt_Supporter_Pack_Black_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
