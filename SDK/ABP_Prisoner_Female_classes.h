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

// AnimBlueprintGeneratedClass ABP_Prisoner_Female.ABP_Prisoner_Female_C
// 0x0000 (FullSize[0x74058] - InheritedSize[0x74058])
class UABP_Prisoner_Female_C : public UABP_Prisoner_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Prisoner_Female.ABP_Prisoner_Female_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
