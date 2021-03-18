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

void FPrimaryAssetType::AfterRead()
{
}

void FPrimaryAssetType::BeforeDelete()
{
}

void FPrimaryAssetId::AfterRead()
{
}

void FPrimaryAssetId::BeforeDelete()
{
}

void FFallbackStruct::AfterRead()
{
}

void FFallbackStruct::BeforeDelete()
{
}

void FFloatRangeBound::AfterRead()
{
}

void FFloatRangeBound::BeforeDelete()
{
}

void FFloatRange::AfterRead()
{
}

void FFloatRange::BeforeDelete()
{
}

void FInt32RangeBound::AfterRead()
{
}

void FInt32RangeBound::BeforeDelete()
{
}

void FInt32Range::AfterRead()
{
}

void FInt32Range::BeforeDelete()
{
}

void FFrameNumber::AfterRead()
{
}

void FFrameNumber::BeforeDelete()
{
}

void FFrameNumberRangeBound::AfterRead()
{
}

void FFrameNumberRangeBound::BeforeDelete()
{
}

void FFrameNumberRange::AfterRead()
{
}

void FFrameNumberRange::BeforeDelete()
{
}

void FFloatInterval::AfterRead()
{
}

void FFloatInterval::BeforeDelete()
{
}

void FInt32Interval::AfterRead()
{
}

void FInt32Interval::BeforeDelete()
{
}

void FPolyglotTextData::AfterRead()
{
}

void FPolyglotTextData::BeforeDelete()
{
}

void FGuid::AfterRead()
{
}

void FGuid::BeforeDelete()
{
}

void FAutomationEvent::AfterRead()
{
}

void FAutomationEvent::BeforeDelete()
{
}

void FDateTime::AfterRead()
{
}

void FDateTime::BeforeDelete()
{
}

void FAutomationExecutionEntry::AfterRead()
{
}

void FAutomationExecutionEntry::BeforeDelete()
{
}

void FARFilter::AfterRead()
{
}

void FARFilter::BeforeDelete()
{
}

void FSoftObjectPath::AfterRead()
{
}

void FSoftObjectPath::BeforeDelete()
{
}

void FAssetBundleEntry::AfterRead()
{
}

void FAssetBundleEntry::BeforeDelete()
{
}

void FAssetBundleData::AfterRead()
{
}

void FAssetBundleData::BeforeDelete()
{
}

void FAssetData::AfterRead()
{
}

void FAssetData::BeforeDelete()
{
}

void FColor::AfterRead()
{
}

void FColor::BeforeDelete()
{
}

void FLinearColor::AfterRead()
{
}

void FLinearColor::BeforeDelete()
{
}

void FVector::AfterRead()
{
}

void FVector::BeforeDelete()
{
}

void FBox::AfterRead()
{
}

void FBox::BeforeDelete()
{
}

void FVector2D::AfterRead()
{
}

void FVector2D::BeforeDelete()
{
}

void FBox2D::AfterRead()
{
}

void FBox2D::BeforeDelete()
{
}

void FBoxSphereBounds::AfterRead()
{
}

void FBoxSphereBounds::BeforeDelete()
{
}

void FOrientedBox::AfterRead()
{
}

void FOrientedBox::BeforeDelete()
{
}

void FPlane::AfterRead()
{
	FVector::AfterRead();

}

void FPlane::BeforeDelete()
{
	FVector::BeforeDelete();

}

void FMatrix::AfterRead()
{
}

void FMatrix::BeforeDelete()
{
}

void FInterpCurvePointFloat::AfterRead()
{
}

void FInterpCurvePointFloat::BeforeDelete()
{
}

void FInterpCurveFloat::AfterRead()
{
}

void FInterpCurveFloat::BeforeDelete()
{
}

void FInterpCurvePointVector2D::AfterRead()
{
}

void FInterpCurvePointVector2D::BeforeDelete()
{
}

void FInterpCurveVector2D::AfterRead()
{
}

void FInterpCurveVector2D::BeforeDelete()
{
}

void FInterpCurvePointVector::AfterRead()
{
}

void FInterpCurvePointVector::BeforeDelete()
{
}

void FInterpCurveVector::AfterRead()
{
}

void FInterpCurveVector::BeforeDelete()
{
}

void FQuat::AfterRead()
{
}

void FQuat::BeforeDelete()
{
}

void FInterpCurvePointQuat::AfterRead()
{
}

void FInterpCurvePointQuat::BeforeDelete()
{
}

void FInterpCurveQuat::AfterRead()
{
}

void FInterpCurveQuat::BeforeDelete()
{
}

void FTwoVectors::AfterRead()
{
}

void FTwoVectors::BeforeDelete()
{
}

void FInterpCurvePointTwoVectors::AfterRead()
{
}

void FInterpCurvePointTwoVectors::BeforeDelete()
{
}

void FInterpCurveTwoVectors::AfterRead()
{
}

void FInterpCurveTwoVectors::BeforeDelete()
{
}

void FInterpCurvePointLinearColor::AfterRead()
{
}

void FInterpCurvePointLinearColor::BeforeDelete()
{
}

void FInterpCurveLinearColor::AfterRead()
{
}

void FInterpCurveLinearColor::BeforeDelete()
{
}

void FTransform::AfterRead()
{
}

void FTransform::BeforeDelete()
{
}

void FRandomStream::AfterRead()
{
}

void FRandomStream::BeforeDelete()
{
}

void FFrameRate::AfterRead()
{
}

void FFrameRate::BeforeDelete()
{
}

void FFrameTime::AfterRead()
{
}

void FFrameTime::BeforeDelete()
{
}

void FQualifiedFrameTime::AfterRead()
{
}

void FQualifiedFrameTime::BeforeDelete()
{
}

void FTimecode::AfterRead()
{
}

void FTimecode::BeforeDelete()
{
}

void FTimespan::AfterRead()
{
}

void FTimespan::BeforeDelete()
{
}

void FSoftClassPath::AfterRead()
{
	FSoftObjectPath::AfterRead();

}

void FSoftClassPath::BeforeDelete()
{
	FSoftObjectPath::BeforeDelete();

}

void FJoinabilitySettings::AfterRead()
{
}

void FJoinabilitySettings::BeforeDelete()
{
}

void FUniqueNetIdWrapper::AfterRead()
{
}

void FUniqueNetIdWrapper::BeforeDelete()
{
}

void FVector4::AfterRead()
{
}

void FVector4::BeforeDelete()
{
}

void FRotator::AfterRead()
{
}

void FRotator::BeforeDelete()
{
}

void FPackedNormal::AfterRead()
{
}

void FPackedNormal::BeforeDelete()
{
}

void FPackedRGB10A2N::AfterRead()
{
}

void FPackedRGB10A2N::BeforeDelete()
{
}

void FPackedRGBA16N::AfterRead()
{
}

void FPackedRGBA16N::BeforeDelete()
{
}

void FIntPoint::AfterRead()
{
}

void FIntPoint::BeforeDelete()
{
}

void FIntVector::AfterRead()
{
}

void FIntVector::BeforeDelete()
{
}

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function CoreUObject.Object.ExecuteUbergraph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObject::ExecuteUbergraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoreUObject.Object.ExecuteUbergraph"));

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UObject::AfterRead()
{
	READ_PTR_FULL(Class, UClass);
	READ_PTR_FULL(Outer, UObject);
}

void UObject::BeforeDelete()
{
	DELE_PTR_FULL(Class);
	DELE_PTR_FULL(Outer);
}

void ULinkerPlaceholderExportObject::AfterRead()
{
	UObject::AfterRead();

}

void ULinkerPlaceholderExportObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UField::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Next, UField);
}

void UField::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Next);
}

void UStruct::AfterRead()
{
	UField::AfterRead();

	READ_PTR_FULL(SuperField, UStruct);
	READ_PTR_FULL(Children, UField);
	READ_PTR_FULL(ChildProperties, UField);
	READ_PTR_FULL(PropertyLink, UProperty);
	READ_PTR_FULL(RefLink, UProperty);
	READ_PTR_FULL(DestructorLink, UProperty);
	READ_PTR_FULL(PostConstructLink, UProperty);
}

void UStruct::BeforeDelete()
{
	UField::BeforeDelete();

	DELE_PTR_FULL(SuperField);
	DELE_PTR_FULL(Children);
	DELE_PTR_FULL(ChildProperties);
	DELE_PTR_FULL(PropertyLink);
	DELE_PTR_FULL(RefLink);
	DELE_PTR_FULL(DestructorLink);
	DELE_PTR_FULL(PostConstructLink);
}

void UFunction::AfterRead()
{
	UStruct::AfterRead();

	READ_PTR_FULL(FirstPropertyToInit, UProperty);
	READ_PTR_FULL(EventGraphFunction, UFunction);
}

void UFunction::BeforeDelete()
{
	UStruct::BeforeDelete();

	DELE_PTR_FULL(FirstPropertyToInit);
	DELE_PTR_FULL(EventGraphFunction);
}

void ULinkerPlaceholderFunction::AfterRead()
{
	UFunction::AfterRead();

}

void ULinkerPlaceholderFunction::BeforeDelete()
{
	UFunction::BeforeDelete();

}

void UMetaData::AfterRead()
{
	UObject::AfterRead();

}

void UMetaData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UObjectRedirector::AfterRead()
{
	UObject::AfterRead();

}

void UObjectRedirector::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UProperty::AfterRead()
{
	UField::AfterRead();

}

void UProperty::BeforeDelete()
{
	UField::BeforeDelete();

}

void UEnumProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UEnumProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UArrayProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UArrayProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UObjectPropertyBase::AfterRead()
{
	UProperty::AfterRead();

}

void UObjectPropertyBase::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UBoolProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UBoolProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UNumericProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UNumericProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UByteProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UByteProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void UObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UClassProperty::AfterRead()
{
	UObjectProperty::AfterRead();

}

void UClassProperty::BeforeDelete()
{
	UObjectProperty::BeforeDelete();

}

void UDelegateProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UDelegateProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UDoubleProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UDoubleProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UFloatProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UFloatProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UUInt16Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt16Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UUInt32Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt32Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UUInt64Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt64Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UWeakObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void UWeakObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UTextProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UTextProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UPropertyWrapper::AfterRead()
{
	UObject::AfterRead();

}

void UPropertyWrapper::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMulticastDelegatePropertyWrapper::AfterRead()
{
	UPropertyWrapper::AfterRead();

}

void UMulticastDelegatePropertyWrapper::BeforeDelete()
{
	UPropertyWrapper::BeforeDelete();

}

void UMulticastInlineDelegatePropertyWrapper::AfterRead()
{
	UMulticastDelegatePropertyWrapper::AfterRead();

}

void UMulticastInlineDelegatePropertyWrapper::BeforeDelete()
{
	UMulticastDelegatePropertyWrapper::BeforeDelete();

}

void UIntProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UIntProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt8Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt8Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt16Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt16Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt64Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt64Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInterfaceProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UInterfaceProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void ULazyObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void ULazyObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UMapProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UMapProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UMulticastDelegateProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UMulticastDelegateProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UMulticastInlineDelegateProperty::AfterRead()
{
	UMulticastDelegateProperty::AfterRead();

}

void UMulticastInlineDelegateProperty::BeforeDelete()
{
	UMulticastDelegateProperty::BeforeDelete();

}

void UMulticastSparseDelegateProperty::AfterRead()
{
	UMulticastDelegateProperty::AfterRead();

}

void UMulticastSparseDelegateProperty::BeforeDelete()
{
	UMulticastDelegateProperty::BeforeDelete();

}

void UNameProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UNameProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void USetProperty::AfterRead()
{
	UProperty::AfterRead();

}

void USetProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void USoftObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void USoftObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void USoftClassProperty::AfterRead()
{
	USoftObjectProperty::AfterRead();

}

void USoftClassProperty::BeforeDelete()
{
	USoftObjectProperty::BeforeDelete();

}

void UStrProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UStrProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UStructProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UStructProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UInterface::AfterRead()
{
	UObject::AfterRead();

}

void UInterface::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGCObjectReferencer::AfterRead()
{
	UObject::AfterRead();

}

void UGCObjectReferencer::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTextBuffer::AfterRead()
{
	UObject::AfterRead();

}

void UTextBuffer::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UScriptStruct::AfterRead()
{
	UStruct::AfterRead();

}

void UScriptStruct::BeforeDelete()
{
	UStruct::BeforeDelete();

}

void UPackage::AfterRead()
{
	UObject::AfterRead();

}

void UPackage::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDelegateFunction::AfterRead()
{
	UFunction::AfterRead();

}

void UDelegateFunction::BeforeDelete()
{
	UFunction::BeforeDelete();

}

void USparseDelegateFunction::AfterRead()
{
	UDelegateFunction::AfterRead();

}

void USparseDelegateFunction::BeforeDelete()
{
	UDelegateFunction::BeforeDelete();

}

void UClass::AfterRead()
{
	UStruct::AfterRead();

}

void UClass::BeforeDelete()
{
	UStruct::BeforeDelete();

}

void UDynamicClass::AfterRead()
{
	UClass::AfterRead();

}

void UDynamicClass::BeforeDelete()
{
	UClass::BeforeDelete();

}

void UPackageMap::AfterRead()
{
	UObject::AfterRead();

}

void UPackageMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEnum::AfterRead()
{
	UField::AfterRead();

}

void UEnum::BeforeDelete()
{
	UField::BeforeDelete();

}

void ULinkerPlaceholderClass::AfterRead()
{
	UClass::AfterRead();

}

void ULinkerPlaceholderClass::BeforeDelete()
{
	UClass::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
