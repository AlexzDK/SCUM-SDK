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

void FPropertyAccessIndirectionChain::AfterRead()
{
}

void FPropertyAccessIndirectionChain::BeforeDelete()
{
}

void FPropertyAccessCopy::AfterRead()
{
}

void FPropertyAccessCopy::BeforeDelete()
{
}

void FPropertyAccessCopyBatch::AfterRead()
{
}

void FPropertyAccessCopyBatch::BeforeDelete()
{
}

void FPropertyAccessPath::AfterRead()
{
}

void FPropertyAccessPath::BeforeDelete()
{
}

void FPropertyAccessSegment::AfterRead()
{
	READ_PTR_FULL(Struct, UStruct);
	READ_PTR_FULL(Function, UFunction);
}

void FPropertyAccessSegment::BeforeDelete()
{
	DELE_PTR_FULL(Struct);
	DELE_PTR_FULL(Function);
}

void FPropertyAccessIndirection::AfterRead()
{
	READ_PTR_FULL(Function, UFunction);
}

void FPropertyAccessIndirection::BeforeDelete()
{
	DELE_PTR_FULL(Function);
}

void FPropertyAccessLibrary::AfterRead()
{
}

void FPropertyAccessLibrary::BeforeDelete()
{
}

void UPropertyAccess::AfterRead()
{
	UInterface::AfterRead();

}

void UPropertyAccess::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPropertyEventBroadcaster::AfterRead()
{
	UInterface::AfterRead();

}

void UPropertyEventBroadcaster::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPropertyEventSubscriber::AfterRead()
{
	UInterface::AfterRead();

}

void UPropertyEventSubscriber::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
