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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_OYWL[0x8];                                     // 0x07B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemSteam.SteamNetDriver"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (FullSize[0x1B98] - InheritedSize[0x1B90])
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                            // 0x1B90(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SGE[0x7];                                     // 0x1B91(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemSteam.SteamNetConnection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
