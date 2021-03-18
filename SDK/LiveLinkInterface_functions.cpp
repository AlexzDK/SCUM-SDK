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

void FLiveLinkSourceHandle::AfterRead()
{
}

void FLiveLinkSourceHandle::BeforeDelete()
{
}

void FLiveLinkBaseBlueprintData::AfterRead()
{
}

void FLiveLinkBaseBlueprintData::BeforeDelete()
{
}

void FSubjectFrameHandle::AfterRead()
{
	FLiveLinkBaseBlueprintData::AfterRead();

}

void FSubjectFrameHandle::BeforeDelete()
{
	FLiveLinkBaseBlueprintData::BeforeDelete();

}

void FLiveLinkTransform::AfterRead()
{
}

void FLiveLinkTransform::BeforeDelete()
{
}

void FCachedSubjectFrame::AfterRead()
{
}

void FCachedSubjectFrame::BeforeDelete()
{
}

void FSubjectMetadata::AfterRead()
{
}

void FSubjectMetadata::BeforeDelete()
{
}

void FLiveLinkSubjectName::AfterRead()
{
}

void FLiveLinkSubjectName::BeforeDelete()
{
}

void FLiveLinkSourcePreset::AfterRead()
{
	READ_PTR_FULL(Settings, ULiveLinkSourceSettings);
}

void FLiveLinkSourcePreset::BeforeDelete()
{
	DELE_PTR_FULL(Settings);
}

void FLiveLinkRefSkeleton::AfterRead()
{
}

void FLiveLinkRefSkeleton::BeforeDelete()
{
}

void FLiveLinkSubjectRepresentation::AfterRead()
{
	READ_PTR_FULL(Role, UClass);
}

void FLiveLinkSubjectRepresentation::BeforeDelete()
{
	DELE_PTR_FULL(Role);
}

void FLiveLinkInterpolationSettings::AfterRead()
{
}

void FLiveLinkInterpolationSettings::BeforeDelete()
{
}

void FLiveLinkTimeSynchronizationSettings::AfterRead()
{
}

void FLiveLinkTimeSynchronizationSettings::BeforeDelete()
{
}

void FLiveLinkWorldTime::AfterRead()
{
}

void FLiveLinkWorldTime::BeforeDelete()
{
}

void FLiveLinkMetaData::AfterRead()
{
}

void FLiveLinkMetaData::BeforeDelete()
{
}

void FLiveLinkBaseFrameData::AfterRead()
{
}

void FLiveLinkBaseFrameData::BeforeDelete()
{
}

void FLiveLinkAnimationFrameData::AfterRead()
{
	FLiveLinkBaseFrameData::AfterRead();

}

void FLiveLinkAnimationFrameData::BeforeDelete()
{
	FLiveLinkBaseFrameData::BeforeDelete();

}

void FLiveLinkBaseStaticData::AfterRead()
{
}

void FLiveLinkBaseStaticData::BeforeDelete()
{
}

void FLiveLinkSkeletonStaticData::AfterRead()
{
	FLiveLinkBaseStaticData::AfterRead();

}

void FLiveLinkSkeletonStaticData::BeforeDelete()
{
	FLiveLinkBaseStaticData::BeforeDelete();

}

void FLiveLinkCurveConversionSettings::AfterRead()
{
}

void FLiveLinkCurveConversionSettings::BeforeDelete()
{
}

void FLiveLinkTransformStaticData::AfterRead()
{
	FLiveLinkBaseStaticData::AfterRead();

}

void FLiveLinkTransformStaticData::BeforeDelete()
{
	FLiveLinkBaseStaticData::BeforeDelete();

}

void FLiveLinkLightStaticData::AfterRead()
{
	FLiveLinkTransformStaticData::AfterRead();

}

void FLiveLinkLightStaticData::BeforeDelete()
{
	FLiveLinkTransformStaticData::BeforeDelete();

}

void FLiveLinkTransformFrameData::AfterRead()
{
	FLiveLinkBaseFrameData::AfterRead();

}

void FLiveLinkTransformFrameData::BeforeDelete()
{
	FLiveLinkBaseFrameData::BeforeDelete();

}

void FLiveLinkLightFrameData::AfterRead()
{
	FLiveLinkTransformFrameData::AfterRead();

}

void FLiveLinkLightFrameData::BeforeDelete()
{
	FLiveLinkTransformFrameData::BeforeDelete();

}

void FLiveLinkLightBlueprintData::AfterRead()
{
	FLiveLinkBaseBlueprintData::AfterRead();

}

void FLiveLinkLightBlueprintData::BeforeDelete()
{
	FLiveLinkBaseBlueprintData::BeforeDelete();

}

void FLiveLinkSubjectKey::AfterRead()
{
}

void FLiveLinkSubjectKey::BeforeDelete()
{
}

void FLiveLinkSubjectPreset::AfterRead()
{
	READ_PTR_FULL(Role, UClass);
	READ_PTR_FULL(Settings, ULiveLinkSubjectSettings);
	READ_PTR_FULL(VirtualSubject, ULiveLinkVirtualSubject);
}

void FLiveLinkSubjectPreset::BeforeDelete()
{
	DELE_PTR_FULL(Role);
	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(VirtualSubject);
}

void FLiveLinkBasicBlueprintData::AfterRead()
{
	FLiveLinkBaseBlueprintData::AfterRead();

}

void FLiveLinkBasicBlueprintData::BeforeDelete()
{
	FLiveLinkBaseBlueprintData::BeforeDelete();

}

void FLiveLinkCameraStaticData::AfterRead()
{
	FLiveLinkTransformStaticData::AfterRead();

}

void FLiveLinkCameraStaticData::BeforeDelete()
{
	FLiveLinkTransformStaticData::BeforeDelete();

}

void FLiveLinkCameraFrameData::AfterRead()
{
	FLiveLinkTransformFrameData::AfterRead();

}

void FLiveLinkCameraFrameData::BeforeDelete()
{
	FLiveLinkTransformFrameData::BeforeDelete();

}

void FLiveLinkCameraBlueprintData::AfterRead()
{
	FLiveLinkBaseBlueprintData::AfterRead();

}

void FLiveLinkCameraBlueprintData::BeforeDelete()
{
	FLiveLinkBaseBlueprintData::BeforeDelete();

}

void FLiveLinkFrameRate::AfterRead()
{
	FFrameRate::AfterRead();

}

void FLiveLinkFrameRate::BeforeDelete()
{
	FFrameRate::BeforeDelete();

}

void FLiveLinkTimeCode_Base_DEPRECATED::AfterRead()
{
}

void FLiveLinkTimeCode_Base_DEPRECATED::BeforeDelete()
{
}

void FLiveLinkTimeCode::AfterRead()
{
	FLiveLinkTimeCode_Base_DEPRECATED::AfterRead();

}

void FLiveLinkTimeCode::BeforeDelete()
{
	FLiveLinkTimeCode_Base_DEPRECATED::BeforeDelete();

}

void FLiveLinkTime::AfterRead()
{
}

void FLiveLinkTime::BeforeDelete()
{
}

void FLiveLinkSourceDebugInfo::AfterRead()
{
}

void FLiveLinkSourceDebugInfo::BeforeDelete()
{
}

void FLiveLinkTransformBlueprintData::AfterRead()
{
	FLiveLinkBaseBlueprintData::AfterRead();

}

void FLiveLinkTransformBlueprintData::BeforeDelete()
{
	FLiveLinkBaseBlueprintData::BeforeDelete();

}

void FLiveLinkCurveElement::AfterRead()
{
}

void FLiveLinkCurveElement::BeforeDelete()
{
}

void FLiveLinkFrameData::AfterRead()
{
}

void FLiveLinkFrameData::BeforeDelete()
{
}

void FLiveLinkSourceBufferManagementSettings::AfterRead()
{
}

void FLiveLinkSourceBufferManagementSettings::BeforeDelete()
{
}

void ULiveLinkFrameTranslator::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkFrameTranslator::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveLinkRole::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkRole::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveLinkBasicRole::AfterRead()
{
	ULiveLinkRole::AfterRead();

}

void ULiveLinkBasicRole::BeforeDelete()
{
	ULiveLinkRole::BeforeDelete();

}

void ULiveLinkTransformRole::AfterRead()
{
	ULiveLinkBasicRole::AfterRead();

}

void ULiveLinkTransformRole::BeforeDelete()
{
	ULiveLinkBasicRole::BeforeDelete();

}

void ULiveLinkLightRole::AfterRead()
{
	ULiveLinkTransformRole::AfterRead();

}

void ULiveLinkLightRole::BeforeDelete()
{
	ULiveLinkTransformRole::BeforeDelete();

}

void ULiveLinkSubjectSettings::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(InterpolationProcessor, ULiveLinkFrameInterpolationProcessor);
	READ_PTR_FULL(Role, UClass);
}

void ULiveLinkSubjectSettings::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(InterpolationProcessor);
	DELE_PTR_FULL(Role);
}

void ULiveLinkVirtualSubject::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Role, UClass);
}

void ULiveLinkVirtualSubject::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Role);
}

void ULiveLinkSourceFactory::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkSourceFactory::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveLinkAnimationRole::AfterRead()
{
	ULiveLinkBasicRole::AfterRead();

}

void ULiveLinkAnimationRole::BeforeDelete()
{
	ULiveLinkBasicRole::BeforeDelete();

}

void ULiveLinkCameraRole::AfterRead()
{
	ULiveLinkTransformRole::AfterRead();

}

void ULiveLinkCameraRole::BeforeDelete()
{
	ULiveLinkTransformRole::BeforeDelete();

}

void ULiveLinkController::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkController::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveLinkSourceSettings::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Factory, UClass);
}

void ULiveLinkSourceSettings::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Factory);
}

void ULiveLinkCurveRemapSettings::AfterRead()
{
	ULiveLinkSourceSettings::AfterRead();

}

void ULiveLinkCurveRemapSettings::BeforeDelete()
{
	ULiveLinkSourceSettings::BeforeDelete();

}

void ULiveLinkFrameInterpolationProcessor::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkFrameInterpolationProcessor::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveLinkFramePreProcessor::AfterRead()
{
	UObject::AfterRead();

}

void ULiveLinkFramePreProcessor::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
