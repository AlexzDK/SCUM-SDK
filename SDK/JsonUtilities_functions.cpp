﻿// Name: S, Version: N

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FJsonObjectWrapper::AfterRead()
{
}

void FJsonObjectWrapper::BeforeDelete()
{
}

void UJsonUtilitiesDummyObject::AfterRead()
{
	UObject::AfterRead();

}

void UJsonUtilitiesDummyObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
