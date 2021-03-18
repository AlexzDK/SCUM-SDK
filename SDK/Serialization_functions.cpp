// Name: S, Version: N

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

void FStructSerializerSetTestStruct::AfterRead()
{
}

void FStructSerializerSetTestStruct::BeforeDelete()
{
}

void FStructSerializerByteArray::AfterRead()
{
}

void FStructSerializerByteArray::BeforeDelete()
{
}

void FStructSerializerNumericTestStruct::AfterRead()
{
}

void FStructSerializerNumericTestStruct::BeforeDelete()
{
}

void FStructSerializerBuiltinTestStruct::AfterRead()
{
}

void FStructSerializerBuiltinTestStruct::BeforeDelete()
{
}

void FStructSerializerArrayTestStruct::AfterRead()
{
}

void FStructSerializerArrayTestStruct::BeforeDelete()
{
}

void FStructSerializerMapTestStruct::AfterRead()
{
}

void FStructSerializerMapTestStruct::BeforeDelete()
{
}

void FStructSerializerObjectTestStruct::AfterRead()
{
	READ_PTR_FULL(Class, UClass);
	READ_PTR_FULL(SubClass, UClass);
	READ_PTR_FULL(Object, UObject);
}

void FStructSerializerObjectTestStruct::BeforeDelete()
{
	DELE_PTR_FULL(Class);
	DELE_PTR_FULL(SubClass);
	DELE_PTR_FULL(Object);
}

void FStructSerializerBooleanTestStruct::AfterRead()
{
}

void FStructSerializerBooleanTestStruct::BeforeDelete()
{
}

void FStructSerializerTestStruct::AfterRead()
{
}

void FStructSerializerTestStruct::BeforeDelete()
{
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
