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

// BlueprintGeneratedClass Underpants_01.Underpants_01_C
// 0x0000 (FullSize[0x0818] - InheritedSize[0x0818])
class AUnderpants_01_C : public AClothesItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Underpants_01.Underpants_01_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
