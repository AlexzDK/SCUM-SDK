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

// BlueprintGeneratedClass BP_AK47_RemoveBullet.BP_AK47_RemoveBullet_C
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UBP_AK47_RemoveBullet_C : public URemoveCartridge
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_AK47_RemoveBullet.BP_AK47_RemoveBullet_C"));
		return ptr;
	}



	float Execute(int AmmoCount);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
