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

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureInterface"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MovieSceneCapture
// 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData_DZ0C[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              ImageCaptureProtocolType;                                  // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                  // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                      // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                      // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings                  Settings;                                                  // 0x0078(0x0070) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                               bUseSeparateProcess;                                       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseEditorWhenCaptureStarts;                             // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YBWZ[0x6];                                     // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdditionalCommandLineArguments;                            // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InheritedCommandLineArguments;                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5JX[0x110];                                   // 0x0110(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCapture"));
		return ptr;
	}



	void SetImageCaptureProtocolType(class UClass* ProtocolType);
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.LevelCapture
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                         // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5UV[0xB];                                     // 0x0221(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       PrerequisiteActorId;                                       // 0x022C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9609[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.LevelCapture"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureEnvironment"));
		return ptr;
	}



	bool IsCaptureInProgress();
	int GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
	class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData_3TXE[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieSceneCapture_EMovieSceneCaptureProtocolState  State;                                                     // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_07XC[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureProtocolBase"));
		return ptr;
	}



	bool IsCapturing();
	MovieSceneCapture_EMovieSceneCaptureProtocolState GetState();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                      World;                                                     // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8WTQ[0x78];                                    // 0x0060(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.UserDefinedCaptureProtocol"));
		return ptr;
	}



	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& streamId);
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	struct FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	ImageWriteQueue_EDesiredImageFormat                Format;                                                    // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCompression;                                        // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3L7Y[0x2];                                     // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CompressionQuality;                                        // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.UserDefinedImageCaptureProtocol"));
		return ptr;
	}



	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& streamId, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
	struct FString GenerateFilenameForCurrentFrame();
	struct FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& streamId);
	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData_FF6I[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.FrameGrabberProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                               bUseCompression;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91TQ[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CompressionQuality;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22A4[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.VideoCaptureProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData_2417[0x70];                                    // 0x0068(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageSequenceProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2GI[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.CompressedImageSequenceProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageSequenceProtocol_BMP"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageSequenceProtocol_PNG"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageSequenceProtocol_JPG"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                               bCompressed;                                               // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CN2H[0xE];                                     // 0x00DA(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageSequenceProtocol_EXR"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.NullAudioCaptureProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	struct FString                                     Filename;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MXBV[0x28];                                    // 0x0068(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                               bCaptureFramesInHDR;                                       // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXH2[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HDRCompressionQuality;                                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YCG[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             PostProcessingMaterial;                                    // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableScreenPercentage;                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4T5E[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                 // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_50ZM[0x20];                                    // 0x00A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.CompositionGraphCaptureProtocol"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
