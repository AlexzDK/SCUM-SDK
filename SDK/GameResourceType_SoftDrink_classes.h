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

// BlueprintGeneratedClass GameResourceType_SoftDrink.GameResourceType_SoftDrink_C
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UGameResourceType_SoftDrink_C : public UGameResourceType_SoftDrink
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GameResourceType_SoftDrink.GameResourceType_SoftDrink_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
