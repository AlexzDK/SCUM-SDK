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

// BlueprintGeneratedClass Improvised_Lockpick.Improvised_Lockpick_C
// 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
class AImprovised_Lockpick_C : public AEquipmentItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Improvised_Lockpick.Improvised_Lockpick_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
