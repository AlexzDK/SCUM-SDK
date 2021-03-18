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

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_B460[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent"));
		return ptr;
	}



	void ServerMessage(TArray<unsigned char> Message);
	void ClientMessage(TArray<unsigned char> Message);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
