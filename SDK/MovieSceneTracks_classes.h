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

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_7Z6K[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                       // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel  Channel;                                                   // 0x00E8(0x0088) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData_2AV8[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_2KFP[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                       // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (FullSize[0x0188] - InheritedSize[0x0160])
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FString                                     ShotDisplayName;                                           // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayName;                                               // 0x0170(0x0018) (Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotSection"));
		return ptr;
	}



	void SetShotDisplayName(const struct FString& InShotDisplayName);
	struct FString GetShotDisplayName();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0280 (FullSize[0x0368] - InheritedSize[0x00E8])
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     RedCurve;                                                  // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     GreenCurve;                                                // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                 // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                                // 0x02C8(0x00A0) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                          SectionToKey;                                              // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieScenePropertyBinding                  PropertyBinding;                                           // 0x0080(0x0014) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AYH3[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0098(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertyTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_GG63[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsSlateColor;                                             // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q5PK[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// 0x0180 (FullSize[0x01C0] - InheritedSize[0x0040])
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_LGK5[0x180];                                   // 0x0040(0x0180) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentAttachmentSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// 0x01E0 (FullSize[0x0220] - InheritedSize[0x0040])
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_S0NP[0x1E0];                                   // 0x0040(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentMobilitySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
// 0x0180 (FullSize[0x01C0] - InheritedSize[0x0040])
class UMovieScenePreAnimatedComponentTransformSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_8SJA[0x180];                                   // 0x0040(0x0180) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePropertySystem
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	class UMovieScenePropertyInstantiatorSystem*       InstantiatorSystem;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3G7H[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentTransformSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      EnumCurve;                                                 // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_27SD[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       Enum;                                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEulerTransformTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSectionBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData_BSXZ[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEvent                            Event;                                                     // 0x00F0(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventRepeaterSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                    // 0x00E8(0x0078) (Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData                 eventData;                                                 // 0x0160(0x0088) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventSystem
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_CM4D[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePreSpawnEventSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePostSpawnEventSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePostEvalEventSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_K98L[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X26Y[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieSceneTracks_EFireEventsAtPosition             EventPosition;                                             // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PGU3[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData_L7P9[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEventChannel                     EventChannel;                                              // 0x00F0(0x0088) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventTriggerSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x00B8 (FullSize[0x01A0] - InheritedSize[0x00E8])
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)
	struct FLinearColor                                FadeColor;                                                 // 0x0188(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFadeAudio : 1;                                            // 0x0198(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GA1[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:
	unsigned char                                      UnknownData_0WCI[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatPropertySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00A8 (FullSize[0x0190] - InheritedSize[0x00E8])
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_73AO[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x00F0(0x00A0) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel                   IntegerCurve;                                              // 0x00E8(0x0090) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_LJPV[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// 0x01A8 (FullSize[0x01E8] - InheritedSize[0x0040])
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_SK9M[0x1A8];                                   // 0x0040(0x01A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_CPUK[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieSceneTracks_ELevelVisibility                  Visibility;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LI5R[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x00F8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilitySection"));
		return ptr;
	}



	void SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility);
	void SetLevelNames(TArray<struct FName> InLevelNames);
	MovieSceneTracks_ELevelVisibility GetVisibility();
	TArray<struct FName> GetLevelNames();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// 0x0168 (FullSize[0x01A8] - InheritedSize[0x0040])
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_0AZ8[0x168];                                   // 0x0040(0x0168) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilitySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData_OZP0[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialParameterCollection*                MPC;                                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData_H1VB[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaterialIndex;                                             // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9YVH[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentMaterialTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                             // 0x00E8(0x00C0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneObjectPropertySection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_TGYZ[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PropertyClass;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneObjectPropertyTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FBoolParameterNameAndCurve>          BoolParameterNamesAndCurves;                               // 0x00E8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                             // 0x00F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector2DParameterNameAndCurves>     Vector2DParameterNamesAndCurves;                           // 0x0108(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                             // 0x0118(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                              // 0x0128(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransformParameterNameAndCurves>    TransformParameterNamesAndCurves;                          // 0x0138(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParameterSection"));
		return ptr;
	}



	bool RemoveVectorParameter(const struct FName& InParameterName);
	bool RemoveVector2DParameter(const struct FName& InParameterName);
	bool RemoveTransformParameter(const struct FName& InParameterName);
	bool RemoveScalarParameter(const struct FName& InParameterName);
	bool RemoveColorParameter(const struct FName& InParameterName);
	bool RemoveBoolParameter(const struct FName& InParameterName);
	void GetParameterNames();
	void AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);
	void AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);
	void AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue);
	void AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue);
	void AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);
	void AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue);
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_7LZP[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleParameterTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel                  ParticleKeys;                                              // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_EXP1[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  ParticleSections;                                          // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// 0x00C0 (FullSize[0x0120] - InheritedSize[0x0060])
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData_E8FF[0xC0];                                    // 0x0060(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                           // 0x00E8(0x00C0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_AAQB[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaterialIndex;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AFWW[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// 0x0250 (FullSize[0x0290] - InheritedSize[0x0040])
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_N1N0[0x250];                                   // 0x0040(0x0250) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0188 (FullSize[0x0270] - InheritedSize[0x00E8])
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                    // 0x00E8(0x00D8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // 0x01C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                           Animation;                                                 // 0x01C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x01D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndOffset;                                                 // 0x01D4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x01D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x01DC(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MKS4[0x3];                                     // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x01E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     StartLocationOffset;                                       // 0x01E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    StartRotationOffset;                                       // 0x01F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMatchWithPrevious;                                        // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZRYY[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MatchedBoneName;                                           // 0x0204(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MatchedLocationOffset;                                     // 0x020C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    MatchedRotationOffset;                                     // 0x0218(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMatchTranslation;                                         // 0x0224(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchIncludeZHeight;                                      // 0x0225(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchRotationYaw;                                         // 0x0226(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchRotationPitch;                                       // 0x0227(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchRotationRoll;                                        // 0x0228(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_554G[0x47];                                    // 0x0229(0x0047) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0058 (FullSize[0x00D0] - InheritedSize[0x0078])
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_CJDJ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUseLegacySectionIndexBlend;                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2RJ[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                                          // 0x0098(0x0030) (NativeAccessSpecifierPublic)
	bool                                               bBlendFirstChildOfRoot;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D84Y[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	unsigned char                                      UnknownData_JRBS[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel                    StringCurve;                                               // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_VCDQ[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_ULTF[0x38];                                    // 0x0040(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformOriginSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0288 (FullSize[0x0370] - InheritedSize[0x00E8])
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     Curves[0x4];                                               // 0x00E8(0x0280) (NativeAccessSpecifierPrivate)
	int                                                ChannelsUsed;                                              // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_24QF[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_1BP4[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumChannelsUsed;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KZYP[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_G931[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBoolTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVisibilityTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_FG2X[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_WP8T[0x38];                                    // 0x0040(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.WeightAndEasingEvaluatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.FloatChannelEvaluatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneTransformOrigin : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformOrigin"));
		return ptr;
	}



	struct FTransform BP_GetTransformOrigin();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                              // 0x00E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID                  ConstraintBindingID;                                       // 0x00F8(0x0018) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintSection"));
		return ptr;
	}



	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData_161T[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocketName;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachComponentName;                                       // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentLocationRule;                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentRotationRule;                                    // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentScaleRule;                                       // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentLocationRule;                                    // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentRotationRule;                                    // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentScaleRule;                                       // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1K3W[0x2];                                     // 0x012E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                        // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00A8 (FullSize[0x01B8] - InheritedSize[0x0110])
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel                     TimingCurve;                                               // 0x0110(0x00A0) (NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     FrontAxisEnum;                                             // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     UpAxisEnum;                                                // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NT2D[0x2];                                     // 0x01B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceUpright : 1;                                         // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WAYF[0x3];                                     // 0x01B5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	unsigned char                                      UnknownData_HL0Q[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformPropertySystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0658 (FullSize[0x0740] - InheritedSize[0x00E8])
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_ZJKE[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneTransformMask                    TransformMask;                                             // 0x00F0(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1UK6[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     Translation[0x3];                                          // 0x00F8(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     Rotation[0x3];                                             // 0x02D8(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     Scale[0x3];                                                // 0x04B8(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     ManualWeight;                                              // 0x0698(0x00A0) (NativeAccessSpecifierPrivate)
	bool                                               bUseQuaternionInterpolation;                               // 0x0738(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1ML4[0x7];                                     // 0x0739(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0140 (FullSize[0x0228] - InheritedSize[0x00E8])
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                        // 0x00E8(0x00B0) (NativeAccessSpecifierPrivate)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x0198(0x0080) (Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ActorGuidStrings;                                          // 0x0218(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_FDBW[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0250 (FullSize[0x0338] - InheritedSize[0x00E8])
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x00F0(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioStartTime;                                            // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioDilationFactor;                                       // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioVolume;                                               // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QPAE[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     SoundVolume;                                               // 0x0108(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                           // 0x01A8(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData               AttachActorData;                                           // 0x0248(0x00B0) (NativeAccessSpecifierPrivate)
	bool                                               bLooping;                                                  // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSuppressSubtitles;                                        // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOverrideAttenuation;                                      // 0x02FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YNJU[0x5];                                     // 0x02FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             OnQueueSubtitles;                                          // 0x0308(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                           // 0x0318(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                    // 0x0328(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioSection"));
		return ptr;
	}



	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class USoundBase* InSound);
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_3BGI[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  AudioSections;                                             // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      ByteCurve;                                                 // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_9WFT[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       Enum;                                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                  // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                                 CameraAnim;                                                // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayScale;                                                 // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendInTime;                                               // 0x0118(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendOutTime;                                              // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLooping;                                                  // 0x0120(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R644[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_K6ZE[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                        // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_E0KY[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLockPreviousCamera;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LD1Z[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       CameraGuid;                                                // 0x00F4(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                           // 0x0104(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZX47[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialCameraCutTransform;                                 // 0x0120(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bHasInitialCameraCutTransform;                             // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KRYW[0xF];                                     // 0x0151(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutSection"));
		return ptr;
	}



	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieSceneObjectBindingID GetCameraBindingID();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bCanBlend;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFJD[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// 0x0068 (FullSize[0x00B8] - InheritedSize[0x0050])
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
	unsigned char                                      UnknownData_9SSW[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutTrackInstance"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                 // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ShakeClass;                                                // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ECameraShakePlaySpace                       PlaySpace;                                                 // 0x0114(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJZP[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0118(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB05[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                 // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
