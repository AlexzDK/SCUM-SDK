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

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpatializationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEffectSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEncodingSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SoundModulatorBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundModulatorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundModulatorBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReverbPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
