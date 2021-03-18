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

void FFilterOptionPerAxis::AfterRead()
{
}

void FFilterOptionPerAxis::BeforeDelete()
{
}

void FConstraintDescriptionEx::AfterRead()
{
}

void FConstraintDescriptionEx::BeforeDelete()
{
}

void FAxis::AfterRead()
{
}

void FAxis::BeforeDelete()
{
}

void FAimConstraintDescription::AfterRead()
{
	FConstraintDescriptionEx::AfterRead();

}

void FAimConstraintDescription::BeforeDelete()
{
	FConstraintDescriptionEx::BeforeDelete();

}

void FTransformConstraintDescription::AfterRead()
{
	FConstraintDescriptionEx::AfterRead();

}

void FTransformConstraintDescription::BeforeDelete()
{
	FConstraintDescriptionEx::BeforeDelete();

}

void FEulerTransform::AfterRead()
{
}

void FEulerTransform::BeforeDelete()
{
}

void FFABRIKChainLink::AfterRead()
{
}

void FFABRIKChainLink::BeforeDelete()
{
}

void FCCDIKChainLink::AfterRead()
{
}

void FCCDIKChainLink::BeforeDelete()
{
}

void FNodeChain::AfterRead()
{
}

void FNodeChain::BeforeDelete()
{
}

void FNodeObject::AfterRead()
{
}

void FNodeObject::BeforeDelete()
{
}

void FNodeHierarchyData::AfterRead()
{
}

void FNodeHierarchyData::BeforeDelete()
{
}

void FNodeHierarchyWithUserData::AfterRead()
{
}

void FNodeHierarchyWithUserData::BeforeDelete()
{
}

void FTransformNoScale::AfterRead()
{
}

void FTransformNoScale::BeforeDelete()
{
}

void FConstraintOffset::AfterRead()
{
}

void FConstraintOffset::BeforeDelete()
{
}

void FTransformFilter::AfterRead()
{
}

void FTransformFilter::BeforeDelete()
{
}

void FConstraintDescriptor::AfterRead()
{
}

void FConstraintDescriptor::BeforeDelete()
{
}

void FConstraintData::AfterRead()
{
}

void FConstraintData::BeforeDelete()
{
}

void FConstraintDescription::AfterRead()
{
}

void FConstraintDescription::BeforeDelete()
{
}

void FTransformConstraint::AfterRead()
{
}

void FTransformConstraint::BeforeDelete()
{
}

void UAnimationDataSourceRegistry::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationDataSourceRegistry::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
