﻿#pragma once

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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010
struct FNiagaraCompileHash
{
	TArray<unsigned char>                              DataHash;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
