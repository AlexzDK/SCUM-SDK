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

// BlueprintGeneratedClass BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UBP_AK47_CheckAmmo_C : public UWeaponActionCheckAmmoSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C"));
		return ptr;
	}



	float Execute();
	bool CanExecute();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
