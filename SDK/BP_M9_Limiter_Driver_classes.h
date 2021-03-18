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

// BlueprintGeneratedClass BP_M9_Limiter_Driver.BP_M9_Limiter_Driver_C
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBP_M9_Limiter_Driver_C : public UWeaponActionReloadSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_M9_Limiter_Driver.BP_M9_Limiter_Driver_C"));
		return ptr;
	}



	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
