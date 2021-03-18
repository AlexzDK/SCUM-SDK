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

// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary"));
		return ptr;
	}



	bool RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate);
	bool RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
	bool CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
