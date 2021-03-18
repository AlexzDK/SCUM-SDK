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

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraMergeable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraMergeable"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraDataInterfaceBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
