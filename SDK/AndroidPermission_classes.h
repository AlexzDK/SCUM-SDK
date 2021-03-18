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

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AndroidPermission.AndroidPermissionFunctionLibrary"));
		return ptr;
	}



	bool CheckPermission(const struct FString& permission);
	class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
	void AfterRead();
	void BeforeDelete();

};

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GE6V[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AndroidPermission.AndroidPermissionCallbackProxy"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
