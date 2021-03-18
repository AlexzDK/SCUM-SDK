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
// Enums
//---------------------------------------------------------------------------

// Enum ConZ.EPrisonerActionDifficulty
enum class ConZ_EPrisonerActionDifficulty : uint8_t
{
	EPrisonerActionDifficulty__None = 0,
	EPrisonerActionDifficulty__Easy = 1,
	EPrisonerActionDifficulty__Demanding = 2,
	EPrisonerActionDifficulty__VeryDemanding = 3,
	EPrisonerActionDifficulty__Count = 4,
	EPrisonerActionDifficulty__First = 5,
	EPrisonerActionDifficulty__Last = 6,
	EPrisonerActionDifficulty__EPrisonerActionDifficulty_MAX = 7,

};

// Enum ConZ.EPrisonerECGRhythm
enum class ConZ_EPrisonerECGRhythm : uint8_t
{
	EPrisonerECGRhythm__Normal     = 0,
	EPrisonerECGRhythm__A          = 1,
	EPrisonerECGRhythm__G          = 2,
	EPrisonerECGRhythm__H          = 3,
	EPrisonerECGRhythm__I          = 4,
	EPrisonerECGRhythm__EPrisonerECGRhythm_MAX = 5,

};

// Enum ConZ.EMineral
enum class ConZ_EMineral : uint8_t
{
	EMineral__Calcium              = 0,
	EMineral__Iron                 = 1,
	EMineral__Magnesium            = 2,
	EMineral__Phosphorus           = 3,
	EMineral__Potassium            = 4,
	EMineral__Zinc                 = 5,
	EMineral__Copper               = 6,
	EMineral__Manganese            = 7,
	EMineral__Selenium             = 8,
	EMineral__Count                = 9,
	EMineral__EMineral_MAX         = 10,

};

// Enum ConZ.EVitamin
enum class ConZ_EVitamin : uint8_t
{
	EVitamin__A                    = 0,
	EVitamin__B1                   = 1,
	EVitamin__B2                   = 2,
	EVitamin__B3                   = 3,
	EVitamin__B4                   = 4,
	EVitamin__B5                   = 5,
	EVitamin__B6                   = 6,
	EVitamin__B9                   = 7,
	EVitamin__B12                  = 8,
	EVitamin__C                    = 9,
	EVitamin__D                    = 10,
	EVitamin__E                    = 11,
	EVitamin__K                    = 12,
	EVitamin__Count                = 13,
	EVitamin__EVitamin_MAX         = 14,

};

// Enum ConZ.ETestMinMax
enum class ConZ_ETestMinMax : uint8_t
{
	ETestMinMax__Normal            = 0,
	ETestMinMax__Min               = 1,
	ETestMinMax__Max               = 2,

};

// Enum ConZ.EPrisonWalletChoiceType
enum class ConZ_EPrisonWalletChoiceType : uint8_t
{
	EPrisonWalletChoiceType__JustFirst = 0,
	EPrisonWalletChoiceType__PickRandom = 1,
	EPrisonWalletChoiceType__AllOfThem = 2,
	EPrisonWalletChoiceType__EPrisonWalletChoiceType_MAX = 3,

};

// Enum ConZ.EOptionalState
enum class ConZ_EOptionalState : uint8_t
{
	EOptionalState__None           = 0,
	EOptionalState__Add            = 1,
	EOptionalState__Remove         = 2,
	EOptionalState__EOptionalState_MAX = 3,

};

// Enum ConZ.ERecipeAvailabilityState
enum class ConZ_ERecipeAvailabilityState : uint8_t
{
	ERecipeAvailabilityState__None = 0,
	ERecipeAvailabilityState__SkillLow = 1,
	ERecipeAvailabilityState__NoIngredients = 2,
	ERecipeAvailabilityState__SomeIngredients = 3,
	ERecipeAvailabilityState__AllIngredients = 4,
	ERecipeAvailabilityState__ERecipeAvailabilityState_MAX = 5,

};

// Enum ConZ.EInventoryNodeWidgetType
enum class ConZ_EInventoryNodeWidgetType : uint8_t
{
	EInventoryNodeWidgetType__None = 0,
	EInventoryNodeWidgetType__Inventory = 1,
	EInventoryNodeWidgetType__InventoryContainer = 2,
	EInventoryNodeWidgetType__HandsAndHolsters = 3,
	EInventoryNodeWidgetType__QuickAccess = 4,
	EInventoryNodeWidgetType__ClothesSideLayer = 5,
	EInventoryNodeWidgetType__ToolTip = 6,
	EInventoryNodeWidgetType__Vicinity = 7,
	EInventoryNodeWidgetType__VicinityContainer = 8,
	EInventoryNodeWidgetType__EInventoryNodeWidgetType_MAX = 9,

};

// Enum ConZ.EListSpawnedVehiclesAdminCommandVehicleCategory
enum class ConZ_EListSpawnedVehiclesAdminCommandVehicleCategory : uint8_t
{
	EListSpawnedVehiclesAdminCommandVehicleCategory__MotorizedVehicles = 0,
	EListSpawnedVehiclesAdminCommandVehicleCategory__HumanPoweredVehicles = 1,
	EListSpawnedVehiclesAdminCommandVehicleCategory__SUVs = 2,
	EListSpawnedVehiclesAdminCommandVehicleCategory__Quads = 3,
	EListSpawnedVehiclesAdminCommandVehicleCategory__Pickups = 4,
	EListSpawnedVehiclesAdminCommandVehicleCategory__Tractors = 5,
	EListSpawnedVehiclesAdminCommandVehicleCategory__Wheelbarrows = 6,
	EListSpawnedVehiclesAdminCommandVehicleCategory__Count = 7,
	EListSpawnedVehiclesAdminCommandVehicleCategory__EListSpawnedVehiclesAdminCommandVehicleCategory_MAX = 8,

};

// Enum ConZ.EAnimalStance
enum class ConZ_EAnimalStance : uint8_t
{
	EAnimalStance__Breathing       = 0,
	EAnimalStance__Idle            = 1,
	EAnimalStance__Agressive       = 2,
	EAnimalStance__Alerted         = 3,
	EAnimalStance__EAnimalStance_MAX = 4,

};

// Enum ConZ.EAnimalActivityCycle
enum class ConZ_EAnimalActivityCycle : uint8_t
{
	EAnimalActivityCycle__Diurnal  = 0,
	EAnimalActivityCycle__Nocturnal = 1,
	EAnimalActivityCycle__Both     = 2,
	EAnimalActivityCycle__EAnimalActivityCycle_MAX = 3,

};

// Enum ConZ.EAnimal2Sound
enum class ConZ_EAnimal2Sound : uint8_t
{
	EAnimal2Sound__None            = 0,
	EAnimal2Sound__Idle            = 1,
	EAnimal2Sound__Angry           = 2,
	EAnimal2Sound__Attack          = 3,
	EAnimal2Sound__TakeDamage      = 4,
	EAnimal2Sound__Kill            = 5,
	EAnimal2Sound__Scared          = 6,
	EAnimal2Sound__Alerted         = 7,
	EAnimal2Sound__EAnimal2Sound_MAX = 8,

};

// Enum ConZ.EAnimalLearnLevel
enum class ConZ_EAnimalLearnLevel : uint8_t
{
	EAnimalLearnLevel__Basic       = 0,
	EAnimalLearnLevel__Medium      = 1,
	EAnimalLearnLevel__Advanced    = 2,
	EAnimalLearnLevel__EAnimalLearnLevel_MAX = 3,

};

// Enum ConZ.EAnimalCommand
enum class ConZ_EAnimalCommand : uint8_t
{
	EAnimalCommand__None           = 0,
	EAnimalCommand__Follow         = 1,
	EAnimalCommand__Unfollow       = 2,
	EAnimalCommand__StayStill      = 3,
	EAnimalCommand__MoveFreely     = 4,
	EAnimalCommand__FetchItem      = 5,
	EAnimalCommand__Attack         = 6,
	EAnimalCommand__Defend         = 7,
	EAnimalCommand__Guard          = 8,
	EAnimalCommand__Seek           = 9,
	EAnimalCommand__EAnimalCommand_MAX = 10,

};

// Enum ConZ.EAnimalHandlingStage
enum class ConZ_EAnimalHandlingStage : uint8_t
{
	EAnimalHandlingStage__NotPacified = 0,
	EAnimalHandlingStage__Pacified = 1,
	EAnimalHandlingStage__Tamed    = 2,
	EAnimalHandlingStage__LearnedBasic = 3,
	EAnimalHandlingStage__LearnedMedium = 4,
	EAnimalHandlingStage__LearnedAdvanced = 5,
	EAnimalHandlingStage__EAnimalHandlingStage_MAX = 6,

};

// Enum ConZ.EAnimalHandlingLevel
enum class ConZ_EAnimalHandlingLevel : uint8_t
{
	EAnimalHandlingLevel__SmallDomestic = 0,
	EAnimalHandlingLevel__BigDomestic = 1,
	EAnimalHandlingLevel__Wild     = 2,
	EAnimalHandlingLevel__Unhandleable = 3,
	EAnimalHandlingLevel__EAnimalHandlingLevel_MAX = 4,

};

// Enum ConZ.EAnimalPace
enum class ConZ_EAnimalPace : uint8_t
{
	EAnimalPace__Idle              = 0,
	EAnimalPace__Walking           = 1,
	EAnimalPace__Running           = 2,
	EAnimalPace__EAnimalPace_MAX   = 3,

};

// Enum ConZ.EAnimNotifyStaminDrainType
enum class ConZ_EAnimNotifyStaminDrainType : uint8_t
{
	EAnimNotifyStaminDrainType__OnBegin = 0,
	EAnimNotifyStaminDrainType__Continous = 1,
	EAnimNotifyStaminDrainType__EAnimNotifyStaminDrainType_MAX = 2,

};

// Enum ConZ.AnimNotifyState_FadeForAction
enum class ConZ_EAnimNotifyState_FadeForAction : uint8_t
{
	AnimNotifyState_FadeForAction__All = 0,
	AnimNotifyState_FadeForAction__InFirstPersonView = 1,
	AnimNotifyState_FadeForAction__InThirdPersonView = 2,
	AnimNotifyState_FadeForAction__AnimNotifyState_MAX = 3,

};

// Enum ConZ.EBlueprintItemActionType
enum class ConZ_EBlueprintItemActionType : uint8_t
{
	EBlueprintItemActionType__BlueprintPlaced = 0,
	EBlueprintItemActionType__BlueprintFilled = 1,
	EBlueprintItemActionType__BlueprintCompleted = 2,
	EBlueprintItemActionType__EBlueprintItemActionType_MAX = 3,

};

// Enum ConZ.EPrisonerConsciousness
enum class ConZ_EPrisonerConsciousness : uint8_t
{
	EPrisonerConsciousness__Conscious = 0,
	EPrisonerConsciousness__Unconscious = 1,
	EPrisonerConsciousness__Coma   = 2,
	EPrisonerConsciousness__Death  = 3,
	EPrisonerConsciousness__EPrisonerConsciousness_MAX = 4,

};

// Enum ConZ.ESplineAxis
enum class ConZ_ESplineAxis : uint8_t
{
	ESplineAxis__X                 = 0,
	ESplineAxis__Y                 = 1,
	ESplineAxis__Z                 = 2,
	ESplineAxis__ESplineAxis_MAX   = 3,

};

// Enum ConZ.EWireType
enum class ConZ_EWireType : uint8_t
{
	EWireType__Green               = 0,
	EWireType__Yellow              = 1,
	EWireType__Red                 = 2,
	EWireType__Count               = 3,
	EWireType__EWireType_MAX       = 4,

};

// Enum ConZ.EBoundBodyPart
enum class ConZ_EBoundBodyPart : uint8_t
{
	EBoundBodyPart__Hands          = 0,
	EBoundBodyPart__Feet           = 1,
	EBoundBodyPart__EBoundBodyPart_MAX = 2,

};

// Enum ConZ.EBrokenLimbsTreatment
enum class ConZ_EBrokenLimbsTreatment : uint8_t
{
	EBrokenLimbsTreatment__Immobilize = 0,
	EBrokenLimbsTreatment__MendBones = 1,
	EBrokenLimbsTreatment__EBrokenLimbsTreatment_MAX = 2,

};

// Enum ConZ.EBruiseZone
enum class ConZ_EBruiseZone : uint8_t
{
	EBruiseZone__Left              = 0,
	EBruiseZone__Middle            = 1,
	EBruiseZone__Right             = 2,
	EBruiseZone__Count             = 3,
	EBruiseZone__EBruiseZone_MAX   = 4,

};

// Enum ConZ.EBruiseLayer
enum class ConZ_EBruiseLayer : uint8_t
{
	EBruiseLayer__Light            = 0,
	EBruiseLayer__Medium           = 1,
	EBruiseLayer__Hard             = 2,
	EBruiseLayer__Count            = 3,
	EBruiseLayer__EBruiseLayer_MAX = 4,

};

// Enum ConZ.ECardinalDirection
enum class ConZ_ECardinalDirection : uint8_t
{
	ECardinalDirection__None       = 0,
	ECardinalDirection__North      = 1,
	ECardinalDirection__East       = 2,
	ECardinalDirection__South      = 3,
	ECardinalDirection__West       = 4,
	ECardinalDirection__ECardinalDirection_MAX = 5,

};

// Enum ConZ.EChainsawEngineState
enum class ConZ_EChainsawEngineState : uint8_t
{
	EChainsawEngineState__TurnedOff = 0,
	EChainsawEngineState__TurnedOn = 1,
	EChainsawEngineState__EChainsawEngineState_MAX = 2,

};

// Enum ConZ.EChainsawOwnerRelatedFunctionalityState
enum class ConZ_EChainsawOwnerRelatedFunctionalityState : uint8_t
{
	EChainsawOwnerRelatedFunctionalityState__Default = 0,
	EChainsawOwnerRelatedFunctionalityState__PlayingSound = 1,
	EChainsawOwnerRelatedFunctionalityState__PendingTurnOn = 2,
	EChainsawOwnerRelatedFunctionalityState__PendingTurnOff = 3,
	EChainsawOwnerRelatedFunctionalityState__EChainsawOwnerRelatedFunctionalityState_MAX = 4,

};

// Enum ConZ.ECharacterActionTerminatingEvent
enum class ConZ_ECharacterActionTerminatingEvent : uint8_t
{
	ECharacterActionTerminatingEvent__InputKeyEsc = 0,
	ECharacterActionTerminatingEvent__ToolUnavailable = 1,
	ECharacterActionTerminatingEvent__ECharacterActionTerminatingEvent_MAX = 2,

};

// Enum ConZ.ECharacterActionNotifyType
enum class ConZ_ECharacterActionNotifyType : uint8_t
{
	ECharacterActionNotifyType__None = 0,
	ECharacterActionNotifyType__AddMagazine = 1,
	ECharacterActionNotifyType__RemoveMagazine = 2,
	ECharacterActionNotifyType__InsertCartridge = 3,
	ECharacterActionNotifyType__SwapWeapons = 4,
	ECharacterActionNotifyType__Chop = 5,
	ECharacterActionNotifyType__CommitSuicide = 6,
	ECharacterActionNotifyType__IgniteFlare = 7,
	ECharacterActionNotifyType__BuryBreach = 8,
	ECharacterActionNotifyType__BuryDump = 9,
	ECharacterActionNotifyType__ThrowFPReleased = 10,
	ECharacterActionNotifyType__ThrowTPReleased = 11,
	ECharacterActionNotifyType__ThrowFinished = 12,
	ECharacterActionNotifyType__StopUsingHandCorrections = 13,
	ECharacterActionNotifyType__PinPulled = 14,
	ECharacterActionNotifyType__Unmount = 15,
	ECharacterActionNotifyType__ChangeWeaponFiringMode = 16,
	ECharacterActionNotifyType__OpenDoor = 17,
	ECharacterActionNotifyType__CloseDoor = 18,
	ECharacterActionNotifyType__RemoveAmmoFromWeapon = 19,
	ECharacterActionNotifyType__CheckWeaponAmmo = 20,
	ECharacterActionNotifyType__CheckWeaponFiringMode = 21,
	ECharacterActionNotifyType__ChainsawStartEngineLoop = 22,
	ECharacterActionNotifyType__ShowItemStatus = 23,
	ECharacterActionNotifyType__ECharacterActionNotifyType_MAX = 24,

};

// Enum ConZ.ECharacterActionState
enum class ConZ_ECharacterActionState : uint8_t
{
	ECharacterActionState__None    = 0,
	ECharacterActionState__WaitingBeginOnServer = 1,
	ECharacterActionState__Executing = 2,
	ECharacterActionState__Ended   = 3,
	ECharacterActionState__ECharacterActionState_MAX = 4,

};

// Enum ConZ.ECharacterActionFlags
enum class ConZ_ECharacterActionFlags : uint8_t
{
	ECharacterActionFlags__None    = 0,
	ECharacterActionFlags__ClientWaitBeginOnServer = 1,
	ECharacterActionFlags__AllWaitEndOnOwningClient = 2,
	ECharacterActionFlags__CanBeAborted = 3,
	ECharacterActionFlags__ECharacterActionFlags_MAX = 4,

};

// Enum ConZ.ECharacterActionConstraint
enum class ConZ_ECharacterActionConstraint : uint8_t
{
	ECharacterActionConstraint__None = 0,
	ECharacterActionConstraint__Move = 1,
	ECharacterActionConstraint__Turn = 2,
	ECharacterActionConstraint__Stance = 3,
	ECharacterActionConstraint__ProneInOut = 4,
	ECharacterActionConstraint__Lean = 5,
	ECharacterActionConstraint__ECharacterActionConstraint_MAX = 6,

};

// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ConZ_ECharacterLegsImpactSoundCategory : uint8_t
{
	ECharacterLegsImpactSoundCategory__Any = 0,
	ECharacterLegsImpactSoundCategory__Bare = 1,
	ECharacterLegsImpactSoundCategory__Blocked = 2,
	ECharacterLegsImpactSoundCategory__LightlyClothed = 3,
	ECharacterLegsImpactSoundCategory__ECharacterLegsImpactSoundCategory_MAX = 4,

};

// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ConZ_ECharacterArmsImpactSoundCategory : uint8_t
{
	ECharacterArmsImpactSoundCategory__Any = 0,
	ECharacterArmsImpactSoundCategory__Bare = 1,
	ECharacterArmsImpactSoundCategory__Blocked = 2,
	ECharacterArmsImpactSoundCategory__LightlyClothed = 3,
	ECharacterArmsImpactSoundCategory__ECharacterArmsImpactSoundCategory_MAX = 4,

};

// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ConZ_ECharacterTorsoImpactSoundCategory : uint8_t
{
	ECharacterTorsoImpactSoundCategory__Any = 0,
	ECharacterTorsoImpactSoundCategory__Bare = 1,
	ECharacterTorsoImpactSoundCategory__Blocked = 2,
	ECharacterTorsoImpactSoundCategory__LightlyClothed = 3,
	ECharacterTorsoImpactSoundCategory__ECharacterTorsoImpactSoundCategory_MAX = 4,

};

// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ConZ_ECharacterHeadImpactSoundCategory : uint8_t
{
	ECharacterHeadImpactSoundCategory__Any = 0,
	ECharacterHeadImpactSoundCategory__Bare = 1,
	ECharacterHeadImpactSoundCategory__Blocked = 2,
	ECharacterHeadImpactSoundCategory__Helmet = 3,
	ECharacterHeadImpactSoundCategory__ECharacterHeadImpactSoundCategory_MAX = 4,

};

// Enum ConZ.ECharacterPainSoundSeverity
enum class ConZ_ECharacterPainSoundSeverity : uint8_t
{
	ECharacterPainSoundSeverity__Light = 0,
	ECharacterPainSoundSeverity__Medium = 1,
	ECharacterPainSoundSeverity__Heavy = 2,
	ECharacterPainSoundSeverity__Stun = 3,
	ECharacterPainSoundSeverity__Knockout = 4,
	ECharacterPainSoundSeverity__Death = 5,
	ECharacterPainSoundSeverity__ECharacterPainSoundSeverity_MAX = 6,

};

// Enum ConZ.ECharacterSpawnerRange
enum class ConZ_ECharacterSpawnerRange : uint8_t
{
	ECharacterSpawnerRange__Long   = 0,
	ECharacterSpawnerRange__Short  = 1,
	ECharacterSpawnerRange__ECharacterSpawnerRange_MAX = 2,

};

// Enum ConZ.ESpawnType
enum class ConZ_ESpawnType : uint8_t
{
	ESpawnType__POI                = 0,
	ESpawnType__Exterior           = 1,
	ESpawnType__Interior           = 2,
	ESpawnType__ESpawnType_MAX     = 3,

};

// Enum ConZ.ECharacterStatsOrderByField
enum class ConZ_ECharacterStatsOrderByField : uint8_t
{
	ECharacterStatsOrderByField__FamePoints = 0,
	ECharacterStatsOrderByField__EventScore = 1,
	ECharacterStatsOrderByField__EventKills = 2,
	ECharacterStatsOrderByField__EventDeaths = 3,
	ECharacterStatsOrderByField__ECharacterStatsOrderByField_MAX = 4,

};

// Enum ConZ.EInteractionTargetType
enum class ConZ_EInteractionTargetType : uint8_t
{
	EInteractionTargetType__Self   = 0,
	EInteractionTargetType__HoveredInteractable = 1,
	EInteractionTargetType__Specified = 2,
	EInteractionTargetType__EInteractionTargetType_MAX = 3,

};

// Enum ConZ.ECompassType
enum class ConZ_ECompassType : uint8_t
{
	ECompassType__None             = 0,
	ECompassType__NorthOnly        = 1,
	ECompassType__CardinalOnly     = 2,
	ECompassType__CardinalAndIntercardinal = 3,
	ECompassType__Everything       = 4,
	ECompassType__Count            = 5,
	ECompassType__ECompassType_MAX = 6,

};

// Enum ConZ.EAnimalMovementPace
enum class ConZ_EAnimalMovementPace : uint8_t
{
	EAnimalMovementPace__Sneak     = 0,
	EAnimalMovementPace__Walk      = 1,
	EAnimalMovementPace__Trot      = 2,
	EAnimalMovementPace__Run       = 3,
	EAnimalMovementPace__EAnimalMovementPace_MAX = 4,

};

// Enum ConZ.EAnimalAgressivness
enum class ConZ_EAnimalAgressivness : uint8_t
{
	EAnimalAgressivness__Timid     = 0,
	EAnimalAgressivness__Moderate  = 1,
	EAnimalAgressivness__Agressive = 2,
	EAnimalAgressivness__EAnimalAgressivness_MAX = 3,

};

// Enum ConZ.EAnimalMode
enum class ConZ_EAnimalMode : uint8_t
{
	EAnimalMode__None              = 0,
	EAnimalMode__Roam              = 1,
	EAnimalMode__Alert             = 2,
	EAnimalMode__Observe           = 3,
	EAnimalMode__TrotAway          = 4,
	EAnimalMode__Aggro             = 5,
	EAnimalMode__Flee              = 6,
	EAnimalMode__EAnimalMode_MAX   = 7,

};

// Enum ConZ.EBaseBuildingDebugMode
enum class ConZ_EBaseBuildingDebugMode : uint8_t
{
	EBaseBuildingDebugMode__None   = 0,
	EBaseBuildingDebugMode__Basic  = 1,
	EBaseBuildingDebugMode__RadialDamage = 2,
	EBaseBuildingDebugMode__InteractionZones = 3,
	EBaseBuildingDebugMode__EBaseBuildingDebugMode_MAX = 4,

};

// Enum ConZ.EConZBaseErrorMessage
enum class ConZ_EConZBaseErrorMessage : uint8_t
{
	EConZBaseErrorMessage__None    = 0,
	EConZBaseErrorMessage__CantPlaceMask = 1,
	EConZBaseErrorMessage__CantPlaceDuplicateFlag = 2,
	EConZBaseErrorMessage__CantPlaceEnemyFlag = 3,
	EConZBaseErrorMessage__CantPlaceMustBeOnFoundation = 4,
	EConZBaseErrorMessage__CantPlaceOnOtherElements = 5,
	EConZBaseErrorMessage__CantPlaceNoBase = 6,
	EConZBaseErrorMessage__CantPlaceNoFlag = 7,
	EConZBaseErrorMessage__CantPlaceMaxInstances = 8,
	EConZBaseErrorMessage__EConZBaseErrorMessage_MAX = 9,

};

// Enum ConZ.EConZBaseEventType
enum class ConZ_EConZBaseEventType : uint8_t
{
	EConZBaseEventType__None       = 0,
	EConZBaseEventType__ElementConstructed = 1,
	EConZBaseEventType__ElementRepaired = 2,
	EConZBaseEventType__EConZBaseEventType_MAX = 3,

};

// Enum ConZ.EConZPlacementHeightType
enum class ConZ_EConZPlacementHeightType : uint8_t
{
	EConZPlacementHeightType__LowestPointHeight = 0,
	EConZPlacementHeightType__HighestPointHeight = 1,
	EConZPlacementHeightType__AveragePointHeight = 2,
	EConZPlacementHeightType__EConZPlacementHeightType_MAX = 3,

};

// Enum ConZ.FConZBaseFlagType
enum class ConZ_EFConZBaseFlagType : uint8_t
{
	FConZBaseFlagType__None        = 0,
	FConZBaseFlagType__Friendly    = 1,
	FConZBaseFlagType__Enemy       = 2,
	FConZBaseFlagType__FConZBaseFlagType_MAX = 3,

};

// Enum ConZ.EElementSnapMarkerSocketType
enum class ConZ_EElementSnapMarkerSocketType : uint8_t
{
	EElementSnapMarkerSocketType__None = 0,
	EElementSnapMarkerSocketType__Horizontal = 1,
	EElementSnapMarkerSocketType__VerticalTop = 2,
	EElementSnapMarkerSocketType__VerticalBottom = 3,
	EElementSnapMarkerSocketType__TowerLevel1 = 4,
	EElementSnapMarkerSocketType__TowerLevel2 = 5,
	EElementSnapMarkerSocketType__Door = 6,
	EElementSnapMarkerSocketType__WallSocket = 7,
	EElementSnapMarkerSocketType__CeilingSocket = 8,
	EElementSnapMarkerSocketType__Stairs = 9,
	EElementSnapMarkerSocketType__WallPlatform = 10,
	EElementSnapMarkerSocketType__BedTop = 11,
	EElementSnapMarkerSocketType__HorizontalLeft = 12,
	EElementSnapMarkerSocketType__HorizontalRight = 13,
	EElementSnapMarkerSocketType__EmptySocket13 = 14,
	EElementSnapMarkerSocketType__EmptySocket14 = 15,
	EElementSnapMarkerSocketType__EmptySocket15 = 16,
	EElementSnapMarkerSocketType__EElementSnapMarkerSocketType_MAX = 17,

};

// Enum ConZ.EBaseElementType
enum class ConZ_EBaseElementType : uint8_t
{
	EBaseElementType__None         = 0,
	EBaseElementType__Default      = 1,
	EBaseElementType__WoodenPalisade = 2,
	EBaseElementType__SandBox      = 3,
	EBaseElementType__Door         = 4,
	EBaseElementType__Well         = 5,
	EBaseElementType__Platform     = 6,
	EBaseElementType__Watchtower   = 7,
	EBaseElementType__Empty        = 8,
	EBaseElementType__Foundation   = 9,
	EBaseElementType__Flag         = 10,
	EBaseElementType__WallOrnament = 11,
	EBaseElementType__CeilingOrnament = 12,
	EBaseElementType__Cabin        = 13,
	EBaseElementType__Stairs       = 14,
	EBaseElementType__NewWalls     = 15,
	EBaseElementType__Test         = 16,
	EBaseElementType__All          = 17,
	EBaseElementType__EBaseElementType_MAX = 18,

};

// Enum ConZ.ECharacterHostileState
enum class ConZ_ECharacterHostileState : uint8_t
{
	ECharacterHostileState__None   = 0,
	ECharacterHostileState__Idle   = 1,
	ECharacterHostileState__AlertedWithoutLineOfSight = 2,
	ECharacterHostileState__AlertedWithLineOfSight = 3,
	ECharacterHostileState__ECharacterHostileState_MAX = 4,

};

// Enum ConZ.EPlayPreparationsState
enum class ConZ_EPlayPreparationsState : uint8_t
{
	EPlayPreparationsState__StreamingCheck = 0,
	EPlayPreparationsState__AuthSend = 1,
	EPlayPreparationsState__AuthReceive = 2,
	EPlayPreparationsState__InitialSyncSend = 3,
	EPlayPreparationsState__InitialSyncReceive = 4,
	EPlayPreparationsState__ProcessInitialSync = 5,
	EPlayPreparationsState__Succeeded = 6,
	EPlayPreparationsState__Failed = 7,
	EPlayPreparationsState__EPlayPreparationsState_MAX = 8,

};

// Enum ConZ.ECraftingItemCategory
enum class ConZ_ECraftingItemCategory : uint8_t
{
	ECraftingItemCategory__None    = 0,
	ECraftingItemCategory__ToolsAndWeapons = 1,
	ECraftingItemCategory__Items   = 2,
	ECraftingItemCategory__Food    = 3,
	ECraftingItemCategory__BaseBuilding = 4,
	ECraftingItemCategory__ECraftingItemCategory_MAX = 5,

};

// Enum ConZ.ECraftingType
enum class ConZ_ECraftingType : uint8_t
{
	ECraftingType__Use             = 0,
	ECraftingType__Assemble        = 1,
	ECraftingType__Destroy         = 2,
	ECraftingType__Attach          = 3,
	ECraftingType__ECraftingType_MAX = 4,

};

// Enum ConZ.EDbConnectionOpenMode
enum class ConZ_EDbConnectionOpenMode : uint8_t
{
	EDbConnectionOpenMode__None    = 0,
	EDbConnectionOpenMode__ReadOnly = 1,
	EDbConnectionOpenMode__ReadWrite = 2,
	EDbConnectionOpenMode__EDbConnectionOpenMode_MAX = 3,

};

// Enum ConZ.EDialogAnimationState
enum class ConZ_EDialogAnimationState : uint8_t
{
	EDialogAnimationState__None    = 0,
	EDialogAnimationState__Show    = 1,
	EDialogAnimationState__Hide    = 2,
	EDialogAnimationState__EDialogAnimationState_MAX = 3,

};

// Enum ConZ.EDisposition
enum class ConZ_EDisposition : uint8_t
{
	EDisposition__Neutral          = 0,
	EDisposition__Good             = 1,
	EDisposition__Bad              = 2,
	EDisposition__EDisposition_MAX = 3,

};

// Enum ConZ.EDistantMeshStreamingBehavior
enum class ConZ_EDistantMeshStreamingBehavior : uint8_t
{
	EDistantMeshStreamingBehavior__Default = 0,
	EDistantMeshStreamingBehavior__LoadAsSoonAsPossible = 1,
	EDistantMeshStreamingBehavior__EDistantMeshStreamingBehavior_MAX = 2,

};

// Enum ConZ.EDoorType
enum class ConZ_EDoorType : uint8_t
{
	EDoorType__Regular             = 0,
	EDoorType__BaseDoor            = 1,
	EDoorType__EDoorType_MAX       = 2,

};

// Enum ConZ.EDoorUnlockDataType
enum class ConZ_EDoorUnlockDataType : uint8_t
{
	EDoorUnlockDataType__Default   = 0,
	EDoorUnlockDataType__Killbox   = 1,
	EDoorUnlockDataType__EDoorUnlockDataType_MAX = 2,

};

// Enum ConZ.ESlotType
enum class ConZ_ESlotType : uint8_t
{
	ESlotType__None                = 0,
	ESlotType__LockSlot            = 1,
	ESlotType__ZapperSlot          = 2,
	ESlotType__ESlotType_MAX       = 3,

};

// Enum ConZ.EDroneSound
enum class ConZ_EDroneSound : uint8_t
{
	EDroneSound__None              = 0,
	EDroneSound__Idle              = 1,
	EDroneSound__Attack            = 2,
	EDroneSound__Kill              = 3,
	EDroneSound__EDroneSound_MAX   = 4,

};

// Enum ConZ.EDroneState
enum class ConZ_EDroneState : uint8_t
{
	EDroneState__Initial           = 0,
	EDroneState__Patrolling        = 1,
	EDroneState__Following         = 2,
	EDroneState__Fleeing           = 3,
	EDroneState__EDroneState_MAX   = 4,

};

// Enum ConZ.EDropZoneGameEventPhase
enum class ConZ_EDropZoneGameEventPhase : uint8_t
{
	EDropZoneGameEventPhase__Warmup = 0,
	EDropZoneGameEventPhase__Search = 1,
	EDropZoneGameEventPhase__Drop  = 2,
	EDropZoneGameEventPhase__Capture = 3,
	EDropZoneGameEventPhase__EDropZoneGameEventPhase_MAX = 4,

};

// Enum ConZ.EFlareIgniteState
enum class ConZ_EFlareIgniteState : uint8_t
{
	EFlareIgniteState__None        = 0,
	EFlareIgniteState__Start       = 1,
	EFlareIgniteState__Burning     = 2,
	EFlareIgniteState__Extinguish  = 3,
	EFlareIgniteState__Finished    = 4,
	EFlareIgniteState__EFlareIgniteState_MAX = 5,

};

// Enum ConZ.EDigestionGroup
enum class ConZ_EDigestionGroup : uint8_t
{
	EDigestionGroup__Water         = 0,
	EDigestionGroup__Juices        = 1,
	EDigestionGroup__SemiLiquid    = 2,
	EDigestionGroup__Fruits1       = 3,
	EDigestionGroup__Fruits3       = 4,
	EDigestionGroup__Fruits4       = 5,
	EDigestionGroup__Fruits5       = 6,
	EDigestionGroup__Vegetables1   = 7,
	EDigestionGroup__Vegetables2   = 8,
	EDigestionGroup__Vegetables3   = 9,
	EDigestionGroup__Vegetables4   = 10,
	EDigestionGroup__SemiConcentratedCarbs = 11,
	EDigestionGroup__ConcentratedCarbs1 = 12,
	EDigestionGroup__ConcentratedCarbs2 = 13,
	EDigestionGroup__ConcentratedCarbs3 = 14,
	EDigestionGroup__SeedsNuts1    = 15,
	EDigestionGroup__SeedsNuts2    = 16,
	EDigestionGroup__Dairy1        = 17,
	EDigestionGroup__Dairy2        = 18,
	EDigestionGroup__Dairy3        = 19,
	EDigestionGroup__Animal1       = 20,
	EDigestionGroup__Animal2       = 21,
	EDigestionGroup__Animal3       = 22,
	EDigestionGroup__Animal4       = 23,
	EDigestionGroup__Animal5       = 24,
	EDigestionGroup__Animal6       = 25,
	EDigestionGroup__Fish1         = 26,
	EDigestionGroup__Fish2         = 27,
	EDigestionGroup__Vitamins      = 28,
	EDigestionGroup__CookedMeals   = 29,
	EDigestionGroup__OilFat        = 30,
	EDigestionGroup__EDigestionGroup_MAX = 31,

};

// Enum ConZ.EGameEventPlayerRoundResult
enum class ConZ_EGameEventPlayerRoundResult : uint8_t
{
	EGameEventPlayerRoundResult__None = 0,
	EGameEventPlayerRoundResult__Win = 1,
	EGameEventPlayerRoundResult__Lose = 2,
	EGameEventPlayerRoundResult__Draw = 3,
	EGameEventPlayerRoundResult__EGameEventPlayerRoundResult_MAX = 4,

};

// Enum ConZ.EGameEventNotificationType
enum class ConZ_EGameEventNotificationType : uint8_t
{
	EGameEventNotificationType__EventStarted = 0,
	EGameEventNotificationType__EventCanceled = 1,
	EGameEventNotificationType__EventEnded = 2,
	EGameEventNotificationType__NotEnoughParticipants = 3,
	EGameEventNotificationType__ParticipantJoined = 4,
	EGameEventNotificationType__ParticipantLeft = 5,
	EGameEventNotificationType__EGameEventNotificationType_MAX = 6,

};

// Enum ConZ.EGameEventParticipantState
enum class ConZ_EGameEventParticipantState : uint8_t
{
	EGameEventParticipantState__Registered = 0,
	EGameEventParticipantState__Spawning = 1,
	EGameEventParticipantState__Alive = 2,
	EGameEventParticipantState__Dead = 3,
	EGameEventParticipantState__Left = 4,
	EGameEventParticipantState__EGameEventParticipantState_MAX = 5,

};

// Enum ConZ.EGameEventState
enum class ConZ_EGameEventState : uint8_t
{
	EGameEventState__Announced     = 0,
	EGameEventState__RoundStarted  = 1,
	EGameEventState__RoundEnded    = 2,
	EGameEventState__Ended         = 3,
	EGameEventState__EGameEventState_MAX = 4,

};

// Enum ConZ.EGameEventBorderState
enum class ConZ_EGameEventBorderState : uint8_t
{
	EGameEventBorderState__Off     = 0,
	EGameEventBorderState__On      = 1,
	EGameEventBorderState__Bright  = 2,
	EGameEventBorderState__EGameEventBorderState_MAX = 3,

};

// Enum ConZ.EGameEventTransportState
enum class ConZ_EGameEventTransportState : uint8_t
{
	EGameEventTransportState__StandBy = 0,
	EGameEventTransportState__Travelling = 1,
	EGameEventTransportState__Leaving = 2,
	EGameEventTransportState__Landing = 3,
	EGameEventTransportState__LiftOff = 4,
	EGameEventTransportState__EGameEventTransportState_MAX = 5,

};

// Enum ConZ.ERagdollTransitionState
enum class ConZ_ERagdollTransitionState : uint8_t
{
	ERagdollTransitionState__None  = 0,
	ERagdollTransitionState__GoTo  = 1,
	ERagdollTransitionState__RecoverFrom = 2,
	ERagdollTransitionState__RecoverFromImmediately = 3,
	ERagdollTransitionState__ERagdollTransitionState_MAX = 4,

};

// Enum ConZ.EHitReactState
enum class ConZ_EHitReactState : uint8_t
{
	EHitReactState__None           = 0,
	EHitReactState__Hit            = 1,
	EHitReactState__Stun           = 2,
	EHitReactState__Knockout       = 3,
	EHitReactState__GettingUp      = 4,
	EHitReactState__Ragdoll        = 5,
	EHitReactState__EHitReactState_MAX = 6,

};

// Enum ConZ.EGoToRagdollCaller
enum class ConZ_EGoToRagdollCaller : uint8_t
{
	EGoToRagdollCaller__Default    = 0,
	EGoToRagdollCaller__Montage    = 1,
	EGoToRagdollCaller__EGoToRagdollCaller_MAX = 2,

};

// Enum ConZ.EWarningType
enum class ConZ_EWarningType : uint8_t
{
	EWarningType__Danger           = 0,
	EWarningType__Explosion        = 1,
	EWarningType__LifeThreat       = 2,
	EWarningType__Watching         = 3,
	EWarningType__Traps            = 4,
	EWarningType__EWarningType_MAX = 5,

};

// Enum ConZ.EHumanRace
enum class ConZ_EHumanRace : uint8_t
{
	EHumanRace__Caucasian          = 0,
	EHumanRace__Mongoloid          = 1,
	EHumanRace__Negroid            = 2,
	EHumanRace__EHumanRace_MAX     = 3,

};

// Enum ConZ.EImpactSeverity
enum class ConZ_EImpactSeverity : uint8_t
{
	EImpactSeverity__Light         = 0,
	EImpactSeverity__Medium        = 1,
	EImpactSeverity__Heavy         = 2,
	EImpactSeverity__Count         = 3,
	EImpactSeverity__EImpactSeverity_MAX = 4,

};

// Enum ConZ.EInteractionState
enum class ConZ_EInteractionState : uint8_t
{
	EInteractionState__Busy        = 0,
	EInteractionState__NoInteractionDefined = 1,
	EInteractionState__CanInteract = 2,
	EInteractionState__UnableToInteract = 3,
	EInteractionState__EInteractionState_MAX = 4,

};

// Enum ConZ.EInventoryNodeWidgetDataType
enum class ConZ_EInventoryNodeWidgetDataType : uint8_t
{
	EInventoryNodeWidgetDataType__Number = 0,
	EInventoryNodeWidgetDataType__Text = 1,
	EInventoryNodeWidgetDataType__Icon = 2,
	EInventoryNodeWidgetDataType__Visibility = 3,
	EInventoryNodeWidgetDataType__EInventoryNodeWidgetDataType_MAX = 4,

};

// Enum ConZ.EItemActionKeyInput
enum class ConZ_EItemActionKeyInput : uint8_t
{
	EItemActionKeyInput__ToggleLight = 0,
	EItemActionKeyInput__IncrementScopeDisplayBrightnessMultiplier = 1,
	EItemActionKeyInput__DecrementScopeDisplayBrightnessMultiplier = 2,
	EItemActionKeyInput__ReloadWeapon = 3,
	EItemActionKeyInput__CheckStatus = 4,
	EItemActionKeyInput__EItemActionKeyInput_MAX = 5,

};

// Enum ConZ.ERPCType
enum class ConZ_ERPCType : uint8_t
{
	ERPCType__None                 = 0,
	ERPCType__Client               = 1,
	ERPCType__Server               = 2,
	ERPCType__NetMulticast         = 3,
	ERPCType__ERPCType_MAX         = 4,

};

// Enum ConZ.ETooltipPanelType
enum class ConZ_ETooltipPanelType : uint8_t
{
	ETooltipPanelType__Overview    = 0,
	ETooltipPanelType__Additional  = 1,
	ETooltipPanelType__ETooltipPanelType_MAX = 2,

};

// Enum ConZ.ELockPickingDifficulty
enum class ConZ_ELockPickingDifficulty : uint8_t
{
	ELockPickingDifficulty__Normal = 0,
	ELockPickingDifficulty__Medium = 1,
	ELockPickingDifficulty__Hard   = 2,
	ELockPickingDifficulty__ELockPickingDifficulty_MAX = 3,

};

// Enum ConZ.EAccessLevel
enum class ConZ_EAccessLevel : uint8_t
{
	EAccessLevel__Public           = 0,
	EAccessLevel__Private          = 1,
	EAccessLevel__Rank1            = 2,
	EAccessLevel__Rank2            = 3,
	EAccessLevel__Rank3            = 4,
	EAccessLevel__Rank4            = 5,
	EAccessLevel__Num              = 6,
	EAccessLevel__EAccessLevel_MAX = 7,

};

// Enum ConZ.EMedicalDiagnosisType
enum class ConZ_EMedicalDiagnosisType : uint8_t
{
	EMedicalDiagnosisType__CheckPulse = 0,
	EMedicalDiagnosisType__FullDiagnosis = 1,
	EMedicalDiagnosisType__EMedicalDiagnosisType_MAX = 2,

};

// Enum ConZ.EDiagnosisLevel
enum class ConZ_EDiagnosisLevel : uint8_t
{
	EDiagnosisLevel__TempOnly      = 0,
	EDiagnosisLevel__Physical      = 1,
	EDiagnosisLevel__PhysicalSeverity = 2,
	EDiagnosisLevel__Everything    = 3,
	EDiagnosisLevel__EDiagnosisLevel_MAX = 4,

};

// Enum ConZ.EMedicationRepeatedAbuseReaction
enum class ConZ_EMedicationRepeatedAbuseReaction : uint8_t
{
	EMedicationRepeatedAbuseReaction__None = 0,
	EMedicationRepeatedAbuseReaction__Vomiting = 1,
	EMedicationRepeatedAbuseReaction__Diarrhea = 2,
	EMedicationRepeatedAbuseReaction__EMedicationRepeatedAbuseReaction_MAX = 3,

};

// Enum ConZ.EMedicationType
enum class ConZ_EMedicationType : uint8_t
{
	EMedicationType__Painkillers   = 0,
	EMedicationType__Sedatives     = 1,
	EMedicationType__Antibiotics   = 2,
	EMedicationType__Antiparasitics = 3,
	EMedicationType__Stimulants    = 4,
	EMedicationType__EMedicationType_MAX = 5,

};

// Enum ConZ.EMedicationUsage
enum class ConZ_EMedicationUsage : uint8_t
{
	EMedicationUsage__Pills        = 0,
	EMedicationUsage__Injections   = 1,
	EMedicationUsage__Infusions    = 2,
	EMedicationUsage__EMedicationUsage_MAX = 3,

};

// Enum ConZ.EMeleeActionType
enum class ConZ_EMeleeActionType : uint8_t
{
	EMeleeActionType__None         = 0,
	EMeleeActionType__Attack       = 1,
	EMeleeActionType__PrepareForBlockOrDodge = 2,
	EMeleeActionType__Block        = 3,
	EMeleeActionType__Dodge        = 4,
	EMeleeActionType__EMeleeActionType_MAX = 5,

};

// Enum ConZ.EMeleeState
enum class ConZ_EMeleeState : uint8_t
{
	EMeleeState__Idle              = 0,
	EMeleeState__Attacking         = 1,
	EMeleeState__PreparedForBlockOrDodge = 2,
	EMeleeState__Block             = 3,
	EMeleeState__Dodge             = 4,
	EMeleeState__HitReact          = 5,
	EMeleeState__EMeleeState_MAX   = 6,

};

// Enum ConZ.ECharacterKnockoutRestistance
enum class ConZ_ECharacterKnockoutRestistance : uint8_t
{
	ECharacterKnockoutRestistance__Weak = 0,
	ECharacterKnockoutRestistance__Medium = 1,
	ECharacterKnockoutRestistance__Strong = 2,
	ECharacterKnockoutRestistance__ECharacterKnockoutRestistance_MAX = 3,

};

// Enum ConZ.EKnockoutAttackType
enum class ConZ_EKnockoutAttackType : uint8_t
{
	EKnockoutAttackType__Weak      = 0,
	EKnockoutAttackType__Strong    = 1,
	EKnockoutAttackType__EKnockoutAttackType_MAX = 2,

};

// Enum ConZ.EHitDirectionType
enum class ConZ_EHitDirectionType : uint8_t
{
	EHitDirectionType__Front       = 0,
	EHitDirectionType__Left        = 1,
	EHitDirectionType__Back        = 2,
	EHitDirectionType__Right       = 3,
	EHitDirectionType__EHitDirectionType_MAX = 4,

};

// Enum ConZ.EAttackCollisionType
enum class ConZ_EAttackCollisionType : uint8_t
{
	EAttackCollisionType__None     = 0,
	EAttackCollisionType__WeaponLeftHand = 1,
	EAttackCollisionType__WeaponRightHand = 2,
	EAttackCollisionType__Head     = 3,
	EAttackCollisionType__LeftHand = 4,
	EAttackCollisionType__RightHand = 5,
	EAttackCollisionType__LeftLeg  = 6,
	EAttackCollisionType__RightLeg = 7,
	EAttackCollisionType__EAttackCollisionType_MAX = 8,

};

// Enum ConZ.EMinigameState
enum class ConZ_EMinigameState : uint8_t
{
	EMinigameState__None           = 0,
	EMinigameState__Intro          = 1,
	EMinigameState__WaitingForPlayer = 2,
	EMinigameState__Game           = 3,
	EMinigameState__Outro          = 4,
	EMinigameState__EMinigameState_MAX = 5,

};

// Enum ConZ.EEndMinigameReason
enum class ConZ_EEndMinigameReason : uint8_t
{
	EEndMinigameReason__Succees    = 0,
	EEndMinigameReason__Fail       = 1,
	EEndMinigameReason__Cancel     = 2,
	EEndMinigameReason__EEndMinigameReason_MAX = 3,

};

// Enum ConZ.EObjectiveAnimationState
enum class ConZ_EObjectiveAnimationState : uint8_t
{
	EObjectiveAnimationState__None = 0,
	EObjectiveAnimationState__Start = 1,
	EObjectiveAnimationState__Complete = 2,
	EObjectiveAnimationState__EObjectiveAnimationState_MAX = 3,

};

// Enum ConZ.EMissionManagerState
enum class ConZ_EMissionManagerState : uint8_t
{
	EMissionManagerState__None     = 0,
	EMissionManagerState__MainStorySuccess = 1,
	EMissionManagerState__SideStorySuccess = 2,
	EMissionManagerState__TutorialSuccess = 3,
	EMissionManagerState__MainStoryFailed = 4,
	EMissionManagerState__SideStoryFailed = 5,
	EMissionManagerState__TutorialFailed = 6,
	EMissionManagerState__EMissionManagerState_MAX = 7,

};

// Enum ConZ.EDialogType
enum class ConZ_EDialogType : uint8_t
{
	EDialogType__Subtitle          = 0,
	EDialogType__Action            = 1,
	EDialogType__Wait              = 2,
	EDialogType__EDialogType_MAX   = 3,

};

// Enum ConZ.EDialogEvent
enum class ConZ_EDialogEvent : uint8_t
{
	EDialogEvent__Intro            = 0,
	EDialogEvent__OpenInteface     = 1,
	EDialogEvent__OpenCraftingInterface = 2,
	EDialogEvent__ChooseKnife      = 3,
	EDialogEvent__OpenCraftingInterface_Bag = 4,
	EDialogEvent__EDialogEvent_MAX = 5,

};

// Enum ConZ.EFaction
enum class ConZ_EFaction : uint8_t
{
	EFaction__None                 = 0,
	EFaction__Rebel                = 1,
	EFaction__TEC                  = 2,
	EFaction__EFaction_MAX         = 3,

};

// Enum ConZ.EObjectiveState
enum class ConZ_EObjectiveState : uint8_t
{
	EObjectiveState__None          = 0,
	EObjectiveState__Initialized   = 1,
	EObjectiveState__Started       = 2,
	EObjectiveState__Completed     = 3,
	EObjectiveState__Failed        = 4,
	EObjectiveState__Belated       = 5,
	EObjectiveState__EObjectiveState_MAX = 6,

};

// Enum ConZ.EMissionType
enum class ConZ_EMissionType : uint8_t
{
	EMissionType__None             = 0,
	EMissionType__MainStory        = 1,
	EMissionType__SideStory        = 2,
	EMissionType__Tutorial         = 3,
	EMissionType__EMissionType_MAX = 4,

};

// Enum ConZ.EMissionState
enum class ConZ_EMissionState : uint8_t
{
	EMissionState__Available       = 0,
	EMissionState__Unavailable     = 1,
	EMissionState__Started         = 2,
	EMissionState__Completed       = 3,
	EMissionState__Failed          = 4,
	EMissionState__Belated         = 5,
	EMissionState__EMissionState_MAX = 6,

};

// Enum ConZ.ENotificationTarget
enum class ConZ_ENotificationTarget : uint8_t
{
	ENotificationTarget__Everybody = 0,
	ENotificationTarget__SingleClient = 1,
	ENotificationTarget__ENotificationTarget_MAX = 2,

};

// Enum ConZ.EMouseSensitivityMode
enum class ConZ_EMouseSensitivityMode : uint8_t
{
	EMouseSensitivityMode__None    = 0,
	EMouseSensitivityMode__ThirdPerson = 1,
	EMouseSensitivityMode__FirstPerson = 2,
	EMouseSensitivityMode__DownTheSight = 3,
	EMouseSensitivityMode__Scope   = 4,
	EMouseSensitivityMode__Drone   = 5,
	EMouseSensitivityMode__Lockpicking = 6,
	EMouseSensitivityMode__EMouseSensitivityMode_MAX = 7,

};

// Enum ConZ.EAnesthesiaType
enum class ConZ_EAnesthesiaType : uint8_t
{
	EAnesthesiaType__Local         = 0,
	EAnesthesiaType__General       = 1,
	EAnesthesiaType__EAnesthesiaType_MAX = 2,

};

// Enum ConZ.EPickupItemOperation
enum class ConZ_EPickupItemOperation : uint8_t
{
	EPickupItemOperation__PickupOnly = 0,
	EPickupItemOperation__PickupAndEat = 1,
	EPickupItemOperation__PickupAndEatAll = 2,
	EPickupItemOperation__EPickupItemOperation_MAX = 3,

};

// Enum ConZ.EStateFlags
enum class ConZ_EStateFlags : uint8_t
{
	EStateFlags__None              = 0,
	EStateFlags__Flipped           = 1,
	EStateFlags__EStateFlags_MAX   = 2,

};

// Enum ConZ.EPlacementBaseBuildingState
enum class ConZ_EPlacementBaseBuildingState : uint8_t
{
	EPlacementBaseBuildingState__Placing = 0,
	EPlacementBaseBuildingState__PlacingSecondPoint = 1,
	EPlacementBaseBuildingState__Placed = 2,
	EPlacementBaseBuildingState__EPlacementBaseBuildingState_MAX = 3,

};

// Enum ConZ.EPlacementTraceHitActor
enum class ConZ_EPlacementTraceHitActor : uint8_t
{
	EPlacementTraceHitActor__None  = 0,
	EPlacementTraceHitActor__Item  = 1,
	EPlacementTraceHitActor__BaseElement = 2,
	EPlacementTraceHitActor__All   = 3,
	EPlacementTraceHitActor__EPlacementTraceHitActor_MAX = 4,

};

// Enum ConZ.EPlaceableIngredientType
enum class ConZ_EPlaceableIngredientType : uint8_t
{
	EPlaceableIngredientType__Mandatory = 0,
	EPlaceableIngredientType__Tool = 1,
	EPlaceableIngredientType__EPlaceableIngredientType_MAX = 2,

};

// Enum ConZ.EPlacementAllowedStatus
enum class ConZ_EPlacementAllowedStatus : uint8_t
{
	EPlacementAllowedStatus__None  = 0,
	EPlacementAllowedStatus__Allowed = 1,
	EPlacementAllowedStatus__NotAllowedGeneric = 2,
	EPlacementAllowedStatus__NotAllowedPlacementLineTraceFailed = 3,
	EPlacementAllowedStatus__NotAllowedNormalTestFailed = 4,
	EPlacementAllowedStatus__NotAllowedInteractionDistance = 5,
	EPlacementAllowedStatus__NotAllowedReachability = 6,
	EPlacementAllowedStatus__NotAllowedWater = 7,
	EPlacementAllowedStatus__NotAllowedAngle = 8,
	EPlacementAllowedStatus__NotAllowedMeshOverlap = 9,
	EPlacementAllowedStatus__NotAllowedTopOverlap = 10,
	EPlacementAllowedStatus__NotAllowedTopOverlapSimple = 11,
	EPlacementAllowedStatus__NotAllowedBottomOverlap = 12,
	EPlacementAllowedStatus__NotAllowedFullBoxOverlap = 13,
	EPlacementAllowedStatus__NotAllowedExtendedOverlap = 14,
	EPlacementAllowedStatus__NotAllowedFloating = 15,
	EPlacementAllowedStatus__NotAllowedTeleportSpot = 16,
	EPlacementAllowedStatus__NotAllowedHitCharacter = 17,
	EPlacementAllowedStatus__NotAllowedHitItem = 18,
	EPlacementAllowedStatus__NotAllowedHitVehicle = 19,
	EPlacementAllowedStatus__NotAllowedNotSnapping = 20,
	EPlacementAllowedStatus__NotAllowedCantPlaceAtLocation = 21,
	EPlacementAllowedStatus__NotAllowedLocationMask = 22,
	EPlacementAllowedStatus__NotAllowedLocationDupFlag = 23,
	EPlacementAllowedStatus__NotAllowedLocationEnemyFlag = 24,
	EPlacementAllowedStatus__NotAllowedLocationFoundation = 25,
	EPlacementAllowedStatus__NotAllowedLocationOtherElement = 26,
	EPlacementAllowedStatus__NotAllowedLocationNoBase = 27,
	EPlacementAllowedStatus__NotAllowedLocationNoFlag = 28,
	EPlacementAllowedStatus__NotAllowedLocationMaxInstances = 29,
	EPlacementAllowedStatus__NotAllowedEnemyFlag = 30,
	EPlacementAllowedStatus__NotAllowedBaseBuildingMask = 31,
	EPlacementAllowedStatus__NotAllowedInBuilding = 32,
	EPlacementAllowedStatus__NotAllowedPointsTooClose = 33,
	EPlacementAllowedStatus__NotAllowedTwoPointsConstaints = 34,
	EPlacementAllowedStatus__NotAllowedHeightDifference = 35,
	EPlacementAllowedStatus__NotAllowedTopSweep = 36,
	EPlacementAllowedStatus__NotAllowedMidSweep = 37,
	EPlacementAllowedStatus__NotAllowedTilesNotGrounded = 38,
	EPlacementAllowedStatus__NotAllowedPlacedDistance = 39,
	EPlacementAllowedStatus__NotAllowedUnknown = 40,
	EPlacementAllowedStatus__EPlacementAllowedStatus_MAX = 41,

};

// Enum ConZ.EPlacementAlgorithm
enum class ConZ_EPlacementAlgorithm : uint8_t
{
	EPlacementAlgorithm__Classic   = 0,
	EPlacementAlgorithm__New       = 1,
	EPlacementAlgorithm__EPlacementAlgorithm_MAX = 2,

};

// Enum ConZ.EPlacementBaseState
enum class ConZ_EPlacementBaseState : uint8_t
{
	EPlacementBaseState__None      = 0,
	EPlacementBaseState__Placing   = 1,
	EPlacementBaseState__Placed    = 2,
	EPlacementBaseState__HeightAdjustment = 3,
	EPlacementBaseState__EPlacementBaseState_MAX = 4,

};

// Enum ConZ.EPlayableInstrumentView
enum class ConZ_EPlayableInstrumentView : uint8_t
{
	EPlayableInstrumentView__FirstPerson = 0,
	EPlayableInstrumentView__ThirdPerson = 1,
	EPlayableInstrumentView__EPlayableInstrumentView_MAX = 2,

};

// Enum ConZ.EPlayableInstrumentChord
enum class ConZ_EPlayableInstrumentChord : uint8_t
{
	EPlayableInstrumentChord__Count = 0,
	EPlayableInstrumentChord__EPlayableInstrumentChord_MAX = 1,

};

// Enum ConZ.EInstrumentEventType
enum class ConZ_EInstrumentEventType : uint8_t
{
	EInstrumentEventType__PlayTone = 0,
	EInstrumentEventType__StopTone = 1,
	EInstrumentEventType__EInstrumentEventType_MAX = 2,

};

// Enum ConZ.EStanceChangeFlag
enum class ConZ_EStanceChangeFlag : uint8_t
{
	EStanceChangeFlag__Exact       = 0,
	EStanceChangeFlag__Min         = 1,
	EStanceChangeFlag__Max         = 2,

};

// Enum ConZ.ESwapItemsType
enum class ConZ_ESwapItemsType : uint8_t
{
	ESwapItemsType__None           = 0,
	ESwapItemsType__NotWeaponToNotWeapon = 1,
	ESwapItemsType__WeaponToWeapon = 2,
	ESwapItemsType__NotWeaponToWeapon = 3,
	ESwapItemsType__WeaponToNotWeapon = 4,
	ESwapItemsType__WeaponToThrowingItem = 5,
	ESwapItemsType__ThrowingItemToWeapon = 6,
	ESwapItemsType__ESwapItemsType_MAX = 7,

};

// Enum ConZ.EPrisonerAnimationCurve
enum class ConZ_EPrisonerAnimationCurve : uint8_t
{
	EPrisonerAnimationCurve__LegsPose = 0,
	EPrisonerAnimationCurve__CanStartGoToLoop = 1,
	EPrisonerAnimationCurve__CanStartGoToStopLU = 2,
	EPrisonerAnimationCurve__CanStartGoToStopRU = 3,
	EPrisonerAnimationCurve__DistanceToPivot = 4,
	EPrisonerAnimationCurve__DistanceToApex = 5,
	EPrisonerAnimationCurve__CanLandGoToLoop = 6,
	EPrisonerAnimationCurve__CanFireWeapon = 7,
	EPrisonerAnimationCurve__LeftHandIK = 8,
	EPrisonerAnimationCurve__MoveInputScale = 9,
	EPrisonerAnimationCurve__MoveInputModifierScale = 10,
	EPrisonerAnimationCurve__MoveInputModifierCourseAngle = 11,
	EPrisonerAnimationCurve__IgnoreMoveInput = 12,
	EPrisonerAnimationCurve__IgnoreTurnInput = 13,
	EPrisonerAnimationCurve__IsStanceTransitionActive = 14,
	EPrisonerAnimationCurve__MeshOffsetWhenInWater = 15,
	EPrisonerAnimationCurve__ViewRoll = 16,
	EPrisonerAnimationCurve__ViewPitch = 17,
	EPrisonerAnimationCurve__ViewYaw = 18,
	EPrisonerAnimationCurve__IgnoreAimOffset = 19,
	EPrisonerAnimationCurve__IgnoreFistCorrections = 20,
	EPrisonerAnimationCurve__IgnoreRotation = 21,
	EPrisonerAnimationCurve__IgnoreFPBoneRotation = 22,
	EPrisonerAnimationCurve__Count = 23,
	EPrisonerAnimationCurve__EPrisonerAnimationCurve_MAX = 24,

};

// Enum ConZ.EPrisonerAnimationMountType
enum class ConZ_EPrisonerAnimationMountType : uint8_t
{
	EPrisonerAnimationMountType__None = 0,
	EPrisonerAnimationMountType__Car = 1,
	EPrisonerAnimationMountType__Sledge = 2,
	EPrisonerAnimationMountType__WheelBarrow = 3,
	EPrisonerAnimationMountType__Count = 4,
	EPrisonerAnimationMountType__EPrisonerAnimationMountType_MAX = 5,

};

// Enum ConZ.EPrisonerAnimationState
enum class ConZ_EPrisonerAnimationState : uint8_t
{
	EPrisonerAnimationState__Unknown = 0,
	EPrisonerAnimationState__Entry = 1,
	EPrisonerAnimationState__StandIdle = 2,
	EPrisonerAnimationState__StandIdleToCrouchIdle = 3,
	EPrisonerAnimationState__StandIdleToProneIdle = 4,
	EPrisonerAnimationState__StandWalkStart = 5,
	EPrisonerAnimationState__StandWalkLoop = 6,
	EPrisonerAnimationState__StandWalkStop = 7,
	EPrisonerAnimationState__StandJogStart = 8,
	EPrisonerAnimationState__StandJogLoop = 9,
	EPrisonerAnimationState__StandJogStop = 10,
	EPrisonerAnimationState__StandRunStart = 11,
	EPrisonerAnimationState__StandRunLoop = 12,
	EPrisonerAnimationState__StandRunStop = 13,
	EPrisonerAnimationState__CrouchIdle = 14,
	EPrisonerAnimationState__CrouchIdleToStandIdle = 15,
	EPrisonerAnimationState__CrouchIdleToProneIdle = 16,
	EPrisonerAnimationState__CrouchWalkStart = 17,
	EPrisonerAnimationState__CrouchWalkLoop = 18,
	EPrisonerAnimationState__CrouchWalkStop = 19,
	EPrisonerAnimationState__ProneIdle = 20,
	EPrisonerAnimationState__ProneIdleToStandIdle = 21,
	EPrisonerAnimationState__ProneIdleToCrouchIdle = 22,
	EPrisonerAnimationState__ProneWalkLoop = 23,
	EPrisonerAnimationState__Count = 24,
	EPrisonerAnimationState__EPrisonerAnimationState_MAX = 25,

};

// Enum ConZ.EPrisonerBodyOrganGroup
enum class ConZ_EPrisonerBodyOrganGroup : uint8_t
{
	EPrisonerBodyOrganGroup__SpinalCoord = 0,
	EPrisonerBodyOrganGroup__Lungs = 1,
	EPrisonerBodyOrganGroup__RespiratorySystem = 2,
	EPrisonerBodyOrganGroup__CirculatorySystem = 3,
	EPrisonerBodyOrganGroup__Colon = 4,
	EPrisonerBodyOrganGroup__Intestine = 5,
	EPrisonerBodyOrganGroup__Bladder = 6,
	EPrisonerBodyOrganGroup__Liver = 7,
	EPrisonerBodyOrganGroup__Kidneys = 8,
	EPrisonerBodyOrganGroup__AdrenalGlands = 9,
	EPrisonerBodyOrganGroup__Gallbladder = 10,
	EPrisonerBodyOrganGroup__Pancreas = 11,
	EPrisonerBodyOrganGroup__Stomach = 12,
	EPrisonerBodyOrganGroup__Heart = 13,
	EPrisonerBodyOrganGroup__Spleen = 14,
	EPrisonerBodyOrganGroup__Brain = 15,
	EPrisonerBodyOrganGroup__Reproductive = 16,
	EPrisonerBodyOrganGroup__Count = 17,
	EPrisonerBodyOrganGroup__EPrisonerBodyOrganGroup_MAX = 18,

};

// Enum ConZ.EPrisonerBodyMuscleGroup
enum class ConZ_EPrisonerBodyMuscleGroup : uint8_t
{
	EPrisonerBodyMuscleGroup__Head = 0,
	EPrisonerBodyMuscleGroup__Neck = 1,
	EPrisonerBodyMuscleGroup__Trapezius = 2,
	EPrisonerBodyMuscleGroup__Chest = 3,
	EPrisonerBodyMuscleGroup__UpperAdbomen = 4,
	EPrisonerBodyMuscleGroup__LowerAbdomen = 5,
	EPrisonerBodyMuscleGroup__LeftEar = 6,
	EPrisonerBodyMuscleGroup__RightEar = 7,
	EPrisonerBodyMuscleGroup__LeftThigh = 8,
	EPrisonerBodyMuscleGroup__RightThigh = 9,
	EPrisonerBodyMuscleGroup__LeftLeg = 10,
	EPrisonerBodyMuscleGroup__RightLeg = 11,
	EPrisonerBodyMuscleGroup__LeftFoot = 12,
	EPrisonerBodyMuscleGroup__RightFoot = 13,
	EPrisonerBodyMuscleGroup__LeftShoulder = 14,
	EPrisonerBodyMuscleGroup__RightShoulder = 15,
	EPrisonerBodyMuscleGroup__LeftArm = 16,
	EPrisonerBodyMuscleGroup__RightArm = 17,
	EPrisonerBodyMuscleGroup__LeftForearm = 18,
	EPrisonerBodyMuscleGroup__RightForearm = 19,
	EPrisonerBodyMuscleGroup__LeftHand = 20,
	EPrisonerBodyMuscleGroup__RightHand = 21,
	EPrisonerBodyMuscleGroup__LeftKneecap = 22,
	EPrisonerBodyMuscleGroup__RightKneecap = 23,
	EPrisonerBodyMuscleGroup__Count = 24,
	EPrisonerBodyMuscleGroup__EPrisonerBodyMuscleGroup_MAX = 25,

};

// Enum ConZ.EPrisonerBodyBoneGroup
enum class ConZ_EPrisonerBodyBoneGroup : uint8_t
{
	EPrisonerBodyBoneGroup__Ribcage = 0,
	EPrisonerBodyBoneGroup__Spine  = 1,
	EPrisonerBodyBoneGroup__Skull  = 2,
	EPrisonerBodyBoneGroup__Pelvis = 3,
	EPrisonerBodyBoneGroup__LeftThigh = 4,
	EPrisonerBodyBoneGroup__RightThigh = 5,
	EPrisonerBodyBoneGroup__LeftLeg = 6,
	EPrisonerBodyBoneGroup__RightLeg = 7,
	EPrisonerBodyBoneGroup__LeftFoot = 8,
	EPrisonerBodyBoneGroup__RightFoot = 9,
	EPrisonerBodyBoneGroup__LeftShoulder = 10,
	EPrisonerBodyBoneGroup__RightShoulder = 11,
	EPrisonerBodyBoneGroup__LeftArm = 12,
	EPrisonerBodyBoneGroup__RightArm = 13,
	EPrisonerBodyBoneGroup__LeftForearm = 14,
	EPrisonerBodyBoneGroup__RightForearm = 15,
	EPrisonerBodyBoneGroup__LeftHand = 16,
	EPrisonerBodyBoneGroup__RightHand = 17,
	EPrisonerBodyBoneGroup__Count  = 18,
	EPrisonerBodyBoneGroup__EPrisonerBodyBoneGroup_MAX = 19,

};

// Enum ConZ.EPrisonerBodyHeatGroup
enum class ConZ_EPrisonerBodyHeatGroup : uint8_t
{
	EPrisonerBodyHeatGroup__Head   = 0,
	EPrisonerBodyHeatGroup__Torso  = 1,
	EPrisonerBodyHeatGroup__Arms   = 2,
	EPrisonerBodyHeatGroup__Hands  = 3,
	EPrisonerBodyHeatGroup__Legs   = 4,
	EPrisonerBodyHeatGroup__Feet   = 5,
	EPrisonerBodyHeatGroup__Count  = 6,
	EPrisonerBodyHeatGroup__EPrisonerBodyHeatGroup_MAX = 7,

};

// Enum ConZ.EPrisonerBodyState
enum class ConZ_EPrisonerBodyState : uint8_t
{
	EPrisonerBodyState__UnableToMove = 0,
	EPrisonerBodyState__Unconsciousness = 1,
	EPrisonerBodyState__Coma       = 2,
	EPrisonerBodyState__Death      = 3,
	EPrisonerBodyState__Count      = 4,
	EPrisonerBodyState__EPrisonerBodyState_MAX = 5,

};

// Enum ConZ.EBuryState
enum class ConZ_EBuryState : uint8_t
{
	EBuryState__None               = 0,
	EBuryState__Bury               = 1,
	EBuryState__ResumeBury         = 2,
	EBuryState__Rest               = 3,
	EBuryState__Finish             = 4,
	EBuryState__EBuryState_MAX     = 5,

};

// Enum ConZ.EPrisonerFacialExpression
enum class ConZ_EPrisonerFacialExpression : uint8_t
{
	EPrisonerFacialExpression__None = 0,
	EPrisonerFacialExpression__Angry1 = 1,
	EPrisonerFacialExpression__Angry2 = 2,
	EPrisonerFacialExpression__Hit = 3,
	EPrisonerFacialExpression__Punching = 4,
	EPrisonerFacialExpression__Fear1 = 5,
	EPrisonerFacialExpression__Fear2 = 6,
	EPrisonerFacialExpression__Fear3 = 7,
	EPrisonerFacialExpression__WhatTheHell1 = 8,
	EPrisonerFacialExpression__WhatTheHell2 = 9,
	EPrisonerFacialExpression__Whistling1 = 10,
	EPrisonerFacialExpression__Whistling2 = 11,
	EPrisonerFacialExpression__Ouch1 = 12,
	EPrisonerFacialExpression__Ouch2 = 13,
	EPrisonerFacialExpression__Count = 14,
	EPrisonerFacialExpression__EPrisonerFacialExpression_MAX = 15,

};

// Enum ConZ.EPrisonerFirstPersonSubview
enum class ConZ_EPrisonerFirstPersonSubview : uint8_t
{
	EPrisonerFirstPersonSubview__Standing = 0,
	EPrisonerFirstPersonSubview__Crouching = 1,
	EPrisonerFirstPersonSubview__Prone = 2,
	EPrisonerFirstPersonSubview__StandingMelee = 3,
	EPrisonerFirstPersonSubview__StandingAiming = 4,
	EPrisonerFirstPersonSubview__CrouchingAiming = 5,
	EPrisonerFirstPersonSubview__ProneAiming = 6,
	EPrisonerFirstPersonSubview__StandingAimingDownTheSights = 7,
	EPrisonerFirstPersonSubview__CrouchingAimingDownTheSights = 8,
	EPrisonerFirstPersonSubview__ProneAimingDownTheSights = 9,
	EPrisonerFirstPersonSubview__ClimbingWindow = 10,
	EPrisonerFirstPersonSubview__Mounted = 11,
	EPrisonerFirstPersonSubview__Lying = 12,
	EPrisonerFirstPersonSubview__MountedDefaultStanceAiming = 13,
	EPrisonerFirstPersonSubview__MountedLeaningStanceAiming = 14,
	EPrisonerFirstPersonSubview__MountedDefaultStanceAimingDownTheSights = 15,
	EPrisonerFirstPersonSubview__MountedLeaningStanceAimingDownTheSights = 16,
	EPrisonerFirstPersonSubview__Count = 17,
	EPrisonerFirstPersonSubview__EPrisonerFirstPersonSubview_MAX = 18,

};

// Enum ConZ.EPrisonerInventoryItemSets
enum class ConZ_EPrisonerInventoryItemSets : uint8_t
{
	EPrisonerInventoryItemSets__None = 0,
	EPrisonerInventoryItemSets__EquippedClothes = 1,
	EPrisonerInventoryItemSets__ContainedItems = 2,
	EPrisonerInventoryItemSets__All = 3,
	EPrisonerInventoryItemSets__EPrisonerInventoryItemSets_MAX = 4,

};

// Enum ConZ.EPrisonerDivingState
enum class ConZ_EPrisonerDivingState : uint8_t
{
	EPrisonerDivingState__None     = 0,
	EPrisonerDivingState__WantsToDive = 1,
	EPrisonerDivingState__Diving   = 2,
	EPrisonerDivingState__EPrisonerDivingState_MAX = 3,

};

// Enum ConZ.EPrisonerMovementMode
enum class ConZ_EPrisonerMovementMode : uint8_t
{
	EPrisonerMovementMode__None    = 0,
	EPrisonerMovementMode__Climbing_Anchoring = 1,
	EPrisonerMovementMode__Climbing_PlayingMontage = 2,
	EPrisonerMovementMode__ClimbingLadder = 3,
	EPrisonerMovementMode__ClimbingWindow_Anchoring = 4,
	EPrisonerMovementMode__ClimbingWindow_PlayingMontage = 5,
	EPrisonerMovementMode__Anchoring = 6,
	EPrisonerMovementMode__RootMotionOnly = 7,
	EPrisonerMovementMode__EPrisonerMovementMode_MAX = 8,

};

// Enum ConZ.EPrisonerResponseIdle
enum class ConZ_EPrisonerResponseIdle : uint8_t
{
	EPrisonerResponseIdle__None    = 0,
	EPrisonerResponseIdle__Winded  = 1,
	EPrisonerResponseIdle__Exhausted = 2,
	EPrisonerResponseIdle__Cold    = 3,
	EPrisonerResponseIdle__Dirty   = 4,
	EPrisonerResponseIdle__NeedsToUrinate = 5,
	EPrisonerResponseIdle__NeedsToDefecate = 6,
	EPrisonerResponseIdle__Dizzy   = 7,
	EPrisonerResponseIdle__Drunk   = 8,
	EPrisonerResponseIdle__Num     = 9,
	EPrisonerResponseIdle__EPrisonerResponseIdle_MAX = 10,

};

// Enum ConZ.EPrisonerRestingMode
enum class ConZ_EPrisonerRestingMode : uint8_t
{
	EPrisonerRestingMode__None     = 0,
	EPrisonerRestingMode__Sitting  = 1,
	EPrisonerRestingMode__Lying    = 2,
	EPrisonerRestingMode__Count    = 3,
	EPrisonerRestingMode__EPrisonerRestingMode_MAX = 4,

};

// Enum ConZ.EThrowingType
enum class ConZ_EThrowingType : uint8_t
{
	EThrowingType__None            = 0,
	EThrowingType__Near            = 1,
	EThrowingType__Far             = 2,
	EThrowingType__Aim             = 3,
	EThrowingType__Throwback       = 4,
	EThrowingType__EThrowingType_MAX = 5,

};

// Enum ConZ.EPrisonerVisibilityFlag
enum class ConZ_EPrisonerVisibilityFlag : uint8_t
{
	EPrisonerVisibilityFlag__None  = 0,
	EPrisonerVisibilityFlag__Default = 1,
	EPrisonerVisibilityFlag__View  = 2,
	EPrisonerVisibilityFlag__Awareness = 3,
	EPrisonerVisibilityFlag__All   = 4,
	EPrisonerVisibilityFlag__EPrisonerVisibilityFlag_MAX = 5,

};

// Enum ConZ.EPrisonerAimOffsetType
enum class ConZ_EPrisonerAimOffsetType : uint8_t
{
	EPrisonerAimOffsetType__Standing = 0,
	EPrisonerAimOffsetType__Crouching = 1,
	EPrisonerAimOffsetType__Prone  = 2,
	EPrisonerAimOffsetType__ProneMoving = 3,
	EPrisonerAimOffsetType__FirstPersonView = 4,
	EPrisonerAimOffsetType__FirstPersonViewProne = 5,
	EPrisonerAimOffsetType__AimingDownTheSights = 6,
	EPrisonerAimOffsetType__Count  = 7,
	EPrisonerAimOffsetType__EPrisonerAimOffsetType_MAX = 8,

};

// Enum ConZ.EPrisonerMontageBlendType
enum class ConZ_EPrisonerMontageBlendType : uint8_t
{
	EPrisonerMontageBlendType__All = 0,
	EPrisonerMontageBlendType__LeftHand = 1,
	EPrisonerMontageBlendType__RightHand = 2,
	EPrisonerMontageBlendType__EPrisonerMontageBlendType_MAX = 3,

};

// Enum ConZ.EPrisonerPostTeleportBehavior
enum class ConZ_EPrisonerPostTeleportBehavior : uint8_t
{
	EPrisonerPostTeleportBehavior__None = 0,
	EPrisonerPostTeleportBehavior__ReviveIfDead = 1,
	EPrisonerPostTeleportBehavior__GameEventLoadout = 2,
	EPrisonerPostTeleportBehavior__EPrisonerPostTeleportBehavior_MAX = 3,

};

// Enum ConZ.EWeaponAnimationPose
enum class ConZ_EWeaponAnimationPose : uint8_t
{
	EWeaponAnimationPose__None     = 0,
	EWeaponAnimationPose__Relaxed  = 1,
	EWeaponAnimationPose__AimingHip = 2,
	EWeaponAnimationPose__AimingDownTheSights = 3,
	EWeaponAnimationPose__AimingDownTheSightsStill = 4,
	EWeaponAnimationPose__AimingDownTheSightsWalking = 5,
	EWeaponAnimationPose__AimingDownTheSightsLimpingWalking = 6,
	EWeaponAnimationPose__Count    = 7,
	EWeaponAnimationPose__EWeaponAnimationPose_MAX = 8,

};

// Enum ConZ.EPrisonerReplicatedComponent
enum class ConZ_EPrisonerReplicatedComponent : uint8_t
{
	EPrisonerReplicatedComponent__LifeComponent = 0,
	EPrisonerReplicatedComponent__SkillComponent = 1,
	EPrisonerReplicatedComponent__InventoryComponent = 2,
	EPrisonerReplicatedComponent__HitReactComponent = 3,
	EPrisonerReplicatedComponent__InteractionComponent = 4,
	EPrisonerReplicatedComponent__BodySimulationComponent = 5,
	EPrisonerReplicatedComponent__Count = 6,
	EPrisonerReplicatedComponent__EPrisonerReplicatedComponent_MAX = 7,

};

// Enum ConZ.EPrisonerThirdPersonSubview
enum class ConZ_EPrisonerThirdPersonSubview : uint8_t
{
	EPrisonerThirdPersonSubview__Standing = 0,
	EPrisonerThirdPersonSubview__Crouching = 1,
	EPrisonerThirdPersonSubview__Prone = 2,
	EPrisonerThirdPersonSubview__StandingMelee = 3,
	EPrisonerThirdPersonSubview__StandingAiming = 4,
	EPrisonerThirdPersonSubview__CrouchingAiming = 5,
	EPrisonerThirdPersonSubview__ProneAiming = 6,
	EPrisonerThirdPersonSubview__Ragdoll = 7,
	EPrisonerThirdPersonSubview__NarrowLadder = 8,
	EPrisonerThirdPersonSubview__Swimming = 9,
	EPrisonerThirdPersonSubview__Diving = 10,
	EPrisonerThirdPersonSubview__ClimbingWindow = 11,
	EPrisonerThirdPersonSubview__Defecating = 12,
	EPrisonerThirdPersonSubview__Throwing = 13,
	EPrisonerThirdPersonSubview__Count = 14,
	EPrisonerThirdPersonSubview__EPrisonerThirdPersonSubview_MAX = 15,

};

// Enum ConZ.EPlayerSideView
enum class ConZ_EPlayerSideView : uint8_t
{
	EPlayerSideView__Left          = 0,
	EPlayerSideView__Right         = 1,
	EPlayerSideView__Count         = 2,
	EPlayerSideView__EPlayerSideView_MAX = 3,

};

// Enum ConZ.EThrowingState
enum class ConZ_EThrowingState : uint8_t
{
	EThrowingState__None           = 0,
	EThrowingState__Cancelled      = 1,
	EThrowingState__Aiming         = 2,
	EThrowingState__ThrowFromAim   = 3,
	EThrowingState__Throwing       = 4,
	EThrowingState__Lobbing        = 5,
	EThrowingState__Throwback      = 6,
	EThrowingState__Finish         = 7,
	EThrowingState__EThrowingState_MAX = 8,

};

// Enum ConZ.EPrisonerUIAffectsSectionName
enum class ConZ_EPrisonerUIAffectsSectionName : uint8_t
{
	EPrisonerUIAffectsSectionName__None = 0,
	EPrisonerUIAffectsSectionName__Affects = 1,
	EPrisonerUIAffectsSectionName__AffectedBy = 2,
	EPrisonerUIAffectsSectionName__CausedBy = 3,
	EPrisonerUIAffectsSectionName__Count = 4,
	EPrisonerUIAffectsSectionName__EPrisonerUIAffectsSectionName_MAX = 5,

};

// Enum ConZ.EPrisonerUIAttribute
enum class ConZ_EPrisonerUIAttribute : uint8_t
{
	EPrisonerUIAttribute__CA_Strength = 0,
	EPrisonerUIAttribute__CA_Constitution = 1,
	EPrisonerUIAttribute__CA_Dexterity = 2,
	EPrisonerUIAttribute__CA_Intelligence = 3,
	EPrisonerUIAttribute__BI_Age   = 4,
	EPrisonerUIAttribute__BI_LifeTime = 5,
	EPrisonerUIAttribute__BI_Weight = 6,
	EPrisonerUIAttribute__BI_Health = 7,
	EPrisonerUIAttribute__BI_Teeth = 8,
	EPrisonerUIAttribute__BI_BloodType = 9,
	EPrisonerUIAttribute__BI_BloodVolume = 10,
	EPrisonerUIAttribute__BI_Temperature = 11,
	EPrisonerUIAttribute__BMD_Bones = 12,
	EPrisonerUIAttribute__BMD_Blood = 13,
	EPrisonerUIAttribute__BMD_Intestines = 14,
	EPrisonerUIAttribute__BMD_Skin = 15,
	EPrisonerUIAttribute__BMD_Organs = 16,
	EPrisonerUIAttribute__BMD_Fat  = 17,
	EPrisonerUIAttribute__BMD_Muscle = 18,
	EPrisonerUIAttribute__BS_Unconsciousness = 19,
	EPrisonerUIAttribute__BS_Coma  = 20,
	EPrisonerUIAttribute__BS_Death = 21,
	EPrisonerUIAttribute__Count    = 22,
	EPrisonerUIAttribute__EPrisonerUIAttribute_MAX = 23,

};

// Enum ConZ.EPenetrationType
enum class ConZ_EPenetrationType : uint8_t
{
	EPenetrationType__None         = 0,
	EPenetrationType__Entry        = 1,
	EPenetrationType__Exit         = 2,
	EPenetrationType__Both         = 3,
	EPenetrationType__EPenetrationType_MAX = 4,

};

// Enum ConZ.EBallisticDragModel
enum class ConZ_EBallisticDragModel : uint8_t
{
	EBallisticDragModel__G1        = 0,
	EBallisticDragModel__G2        = 1,
	EBallisticDragModel__G5        = 2,
	EBallisticDragModel__G6        = 3,
	EBallisticDragModel__G7        = 4,
	EBallisticDragModel__G8        = 5,
	EBallisticDragModel__EBallisticDragModel_MAX = 6,

};

// Enum ConZ.EQuiverActiveMesh
enum class ConZ_EQuiverActiveMesh : uint8_t
{
	EQuiverActiveMesh__Static      = 0,
	EQuiverActiveMesh__Skeletal    = 1,
	EQuiverActiveMesh__SkeletalAlternative = 2,
	EQuiverActiveMesh__EQuiverActiveMesh_MAX = 3,

};

// Enum ConZ.ERepairType
enum class ConZ_ERepairType : uint8_t
{
	ERepairType__None              = 0,
	ERepairType__RepairHealth      = 1,
	ERepairType__ERepairType_MAX   = 2,

};

// Enum ConZ.EEngineeringEventType
enum class ConZ_EEngineeringEventType : uint8_t
{
	EEngineeringEventType__Build   = 0,
	EEngineeringEventType__Repair  = 1,
	EEngineeringEventType__FillContainer = 2,
	EEngineeringEventType__FillVehicle = 3,
	EEngineeringEventType__DrainVehicle = 4,
	EEngineeringEventType__FillItem = 5,
	EEngineeringEventType__EEngineeringEventType_MAX = 6,

};

// Enum ConZ.ESafeZoneDamageChannel
enum class ConZ_ESafeZoneDamageChannel : uint8_t
{
	ESafeZoneDamageChannel__UncategorizedDamage = 0,
	ESafeZoneDamageChannel__FallDamage = 1,
	ESafeZoneDamageChannel__PuppetDamage = 2,
	ESafeZoneDamageChannel__SentryDamage = 3,
	ESafeZoneDamageChannel__AnimalDamage = 4,
	ESafeZoneDamageChannel__VehicleDamage = 5,
	ESafeZoneDamageChannel__BoxingDamage = 6,
	ESafeZoneDamageChannel__MeleeWeaponDamage = 7,
	ESafeZoneDamageChannel__ThrowingDamage = 8,
	ESafeZoneDamageChannel__ProjectileDamage = 9,
	ESafeZoneDamageChannel__ExplosiveDamage = 10,
	ESafeZoneDamageChannel__DamageToBases = 11,
	ESafeZoneDamageChannel__DamageToVehicles = 12,
	ESafeZoneDamageChannel__Count  = 13,
	ESafeZoneDamageChannel__ESafeZoneDamageChannel_MAX = 14,

};

// Enum ConZ.ESafeZoneDamageHandlingMethod
enum class ConZ_ESafeZoneDamageHandlingMethod : uint8_t
{
	ESafeZoneDamageHandlingMethod__Skip = 0,
	ESafeZoneDamageHandlingMethod__Allow = 1,
	ESafeZoneDamageHandlingMethod__Block = 2,
	ESafeZoneDamageHandlingMethod__ESafeZoneDamageHandlingMethod_MAX = 3,

};

// Enum ConZ.EScopingView
enum class ConZ_EScopingView : uint8_t
{
	EScopingView__FirstPerson      = 0,
	EScopingView__ThirdPerson      = 1,
	EScopingView__EScopingView_MAX = 2,

};

// Enum ConZ.EScopingStance
enum class ConZ_EScopingStance : uint8_t
{
	EScopingStance__Standing       = 0,
	EScopingStance__Crouching      = 1,
	EScopingStance__Prone          = 2,
	EScopingStance__EScopingStance_MAX = 3,

};

// Enum ConZ.ESentryAttackMode
enum class ConZ_ESentryAttackMode : uint8_t
{
	ESentryAttackMode__None        = 0,
	ESentryAttackMode__Melee       = 1,
	ESentryAttackMode__MediumRange = 2,
	ESentryAttackMode__LongRange   = 3,
	ESentryAttackMode__ESentryAttackMode_MAX = 4,

};

// Enum ConZ.ESentryStance
enum class ConZ_ESentryStance : uint8_t
{
	ESentryStance__None            = 0,
	ESentryStance__Relaxed         = 1,
	ESentryStance__Alerted         = 2,
	ESentryStance__Combat          = 3,
	ESentryStance__Offline         = 4,
	ESentryStance__ESentryStance_MAX = 5,

};

// Enum ConZ.ESentryMovementPace2
enum class ConZ_ESentryMovementPace2 : uint8_t
{
	ESentryMovementPace2__Walking  = 0,
	ESentryMovementPace2__Running  = 1,
	ESentryMovementPace2__Count    = 2,
	ESentryMovementPace2__ESentryMovementPace2_MAX = 3,

};

// Enum ConZ.ESentryState2
enum class ConZ_ESentryState2 : uint8_t
{
	ESentryState2__None            = 0,
	ESentryState2__Initial         = 1,
	ESentryState2__Patrolling_Walking = 2,
	ESentryState2__Patrolling_CheckSurroundings = 3,
	ESentryState2__InvestigatingLocation = 4,
	ESentryState2__InvestigatingBuilding = 5,
	ESentryState2__GuardLocation   = 6,
	ESentryState2__EnemySpotted    = 7,
	ESentryState2__Alerted         = 8,
	ESentryState2__ObserveEnemyMovement = 9,
	ESentryState2__Combat          = 10,
	ESentryState2__Combat_LostSight = 11,
	ESentryState2__DestroyingVehicle = 12,
	ESentryState2__Count           = 13,
	ESentryState2__ESentryState2_MAX = 14,

};

// Enum ConZ.ESentryThirdPersonSubview
enum class ConZ_ESentryThirdPersonSubview : uint8_t
{
	ESentryThirdPersonSubview__Standing = 0,
	ESentryThirdPersonSubview__StandingAiming = 1,
	ESentryThirdPersonSubview__Count = 2,
	ESentryThirdPersonSubview__ESentryThirdPersonSubview_MAX = 3,

};

// Enum ConZ.ESortType
enum class ConZ_ESortType : uint8_t
{
	ESortType__None                = 0,
	ESortType__Host                = 1,
	ESortType__Password            = 2,
	ESortType__Mode                = 3,
	ESortType__Version             = 4,
	ESortType__Time                = 5,
	ESortType__Friends             = 6,
	ESortType__Players             = 7,
	ESortType__Ping                = 8,
	ESortType__ESortType_MAX       = 9,

};

// Enum ConZ.EServerBrowserTab
enum class ConZ_EServerBrowserTab : uint8_t
{
	EServerBrowserTab__Internet    = 0,
	EServerBrowserTab__Favorites   = 1,
	EServerBrowserTab__LastPlayed  = 2,
	EServerBrowserTab__EServerBrowserTab_MAX = 3,

};

// Enum ConZ.ESicknessState
enum class ConZ_ESicknessState : uint8_t
{
	ESicknessState__Sick           = 0,
	ESicknessState__Cured          = 1,
	ESicknessState__Treated        = 2,
	ESicknessState__Untreated      = 3,
	ESicknessState__Done           = 4,
	ESicknessState__ESicknessState_MAX = 5,

};

// Enum ConZ.ESimpleAnimalMode
enum class ConZ_ESimpleAnimalMode : uint8_t
{
	ESimpleAnimalMode__Wander      = 0,
	ESimpleAnimalMode__Flee        = 1,
	ESimpleAnimalMode__ESimpleAnimalMode_MAX = 2,

};

// Enum ConZ.ESkillReplicationID
enum class ConZ_ESkillReplicationID : uint8_t
{
	ESkillReplicationID__None      = 0,
	ESkillReplicationID__EnduranceSkill = 1,
	ESkillReplicationID__ResistanceSkill = 2,
	ESkillReplicationID__RunningSkill = 3,
	ESkillReplicationID__SwimmingSkill = 4,
	ESkillReplicationID__MedicalSkill = 5,
	ESkillReplicationID__AwarenessSkill = 6,
	ESkillReplicationID__StealthSkill = 7,
	ESkillReplicationID__AnimalHandlingSkill = 8,
	ESkillReplicationID__CookingSkill = 9,
	ESkillReplicationID__SurvivalSkill = 10,
	ESkillReplicationID__BioChemSkill = 11,
	ESkillReplicationID__BoxingSkill = 12,
	ESkillReplicationID__MeleeWeaponsSkill = 13,
	ESkillReplicationID__RiflesSkill = 14,
	ESkillReplicationID__HandgunSkill = 15,
	ESkillReplicationID__SnipingSkill = 16,
	ESkillReplicationID__CamouflageSkill = 17,
	ESkillReplicationID__TacticsSkill = 18,
	ESkillReplicationID__ThrowingSkill = 19,
	ESkillReplicationID__ArcherySkill = 20,
	ESkillReplicationID__ThieverySkill = 21,
	ESkillReplicationID__DrivingSkill = 22,
	ESkillReplicationID__EngineeringSkill = 23,
	ESkillReplicationID__DemolitionSkill = 24,
	ESkillReplicationID__ESkillReplicationID_MAX = 25,

};

// Enum ConZ.ESurvivalStatsSubcategory
enum class ConZ_ESurvivalStatsSubcategory : uint8_t
{
	ESurvivalStatsSubcategory__General = 0,
	ESurvivalStatsSubcategory__Food = 1,
	ESurvivalStatsSubcategory__Hunting = 2,
	ESurvivalStatsSubcategory__Travel = 3,
	ESurvivalStatsSubcategory__Metabolism = 4,
	ESurvivalStatsSubcategory__Crafting = 5,
	ESurvivalStatsSubcategory__Combat = 6,
	ESurvivalStatsSubcategory__Events = 7,
	ESurvivalStatsSubcategory__ESurvivalStatsSubcategory_MAX = 8,

};

// Enum ConZ.ESurvivalStatsCategory
enum class ConZ_ESurvivalStatsCategory : uint8_t
{
	ESurvivalStatsCategory__Survival = 0,
	ESurvivalStatsCategory__Weapons = 1,
	ESurvivalStatsCategory__Combat = 2,
	ESurvivalStatsCategory__ESurvivalStatsCategory_MAX = 3,

};

// Enum ConZ.EItemThrowingBehavior
enum class ConZ_EItemThrowingBehavior : uint8_t
{
	EItemThrowingBehavior__None    = 0,
	EItemThrowingBehavior__Default = 1,
	EItemThrowingBehavior__Piercing = 2,
	EItemThrowingBehavior__Fragile = 3,
	EItemThrowingBehavior__Sticky  = 4,
	EItemThrowingBehavior__EItemThrowingBehavior_MAX = 5,

};

// Enum ConZ.EBleedingSeverity
enum class ConZ_EBleedingSeverity : uint8_t
{
	EBleedingSeverity__NoBleeding  = 0,
	EBleedingSeverity__VeryLight   = 1,
	EBleedingSeverity__Light       = 2,
	EBleedingSeverity__Moderate    = 3,
	EBleedingSeverity__Heavy       = 4,
	EBleedingSeverity__Severe      = 5,
	EBleedingSeverity__EBleedingSeverity_MAX = 6,

};

// Enum ConZ.ETrapTriggerType
enum class ConZ_ETrapTriggerType : uint8_t
{
	ETrapTriggerType__None         = 0,
	ETrapTriggerType__ProximityTrigger = 1,
	ETrapTriggerType__LaserTrigger = 2,
	ETrapTriggerType__TripwireTrigger = 3,
	ETrapTriggerType__TimedTrigger = 4,
	ETrapTriggerType__ETrapTriggerType_MAX = 5,

};

// Enum ConZ.EWidgetType
enum class ConZ_EWidgetType : uint8_t
{
	EWidgetType__InteractionWidgetClass = 0,
	EWidgetType__InteractionGroupWidgetClass = 1,
	EWidgetType__InteractionContainerWidgetClass = 2,
	EWidgetType__ItemWidgetClass   = 3,
	EWidgetType__InventoryWidgetClass = 4,
	EWidgetType__InventorySlotWidgetClass = 5,
	EWidgetType__WarningWidgetClass = 6,
	EWidgetType__HudWidgetClass    = 7,
	EWidgetType__LoadingWidgetClass = 8,
	EWidgetType__LoadingIconWidgetClass = 9,
	EWidgetType__SpawnScreenWidgetClass = 10,
	EWidgetType__WaypointScreenWidgetClass = 11,
	EWidgetType__HoverPanelWidgetClass = 12,
	EWidgetType__ActionProgressWidgetClass = 13,
	EWidgetType__ItemSelectionWidgetClass = 14,
	EWidgetType__ExamineWidgetClass = 15,
	EWidgetType__HandsInventoryWidgetClass = 16,
	EWidgetType__GenericItemInventoryWidgetClass = 17,
	EWidgetType__InventoryContainersWidgetClass = 18,
	EWidgetType__CombinedInventoryWidgetClass = 19,
	EWidgetType__TeamInvitationWidgetClass = 20,
	EWidgetType__CraftingInfoWidgetClass = 21,
	EWidgetType__CraftingComponentWidgetClass = 22,
	EWidgetType__CraftingRecipeWidgetClass = 23,
	EWidgetType__EmptySlotWidgetClass = 24,
	EWidgetType__TeamInfoWidgetClass = 25,
	EWidgetType__TeammateNameWidgetClass = 26,
	EWidgetType__PreviousNextSwitchWidgetClass = 27,
	EWidgetType__VicinityItemContainerWidgetClass = 28,
	EWidgetType__QuickAccessItemWidget = 29,
	EWidgetType__GameEventPanelWidgetClass = 30,
	EWidgetType__GameEventCardWidgetClass = 31,
	EWidgetType__GameEventScoreboardWidgetClass = 32,
	EWidgetType__GameEventMiniScoreboardWidgetClass = 33,
	EWidgetType__TournamentScoreboardWidgetClass = 34,
	EWidgetType__CircularMenuWidgetClass = 35,
	EWidgetType__CircularMenuSegmentWidgetClass = 36,
	EWidgetType__LockpickingWidgetClass = 37,
	EWidgetType__DoorUpgradeWidgetClass = 38,
	EWidgetType__UpgradeWidgetClass = 39,
	EWidgetType__ObjectivesWidget  = 40,
	EWidgetType__MissionPrompt     = 41,
	EWidgetType__MissionResult     = 42,
	EWidgetType__MissionItem       = 43,
	EWidgetType__ObjectiveItem     = 44,
	EWidgetType__MissionReward     = 45,
	EWidgetType__InventoryContainerWidget2Test = 46,
	EWidgetType__InventoryItemWidget2Test = 47,
	EWidgetType__ItemInventoryWidget2 = 48,
	EWidgetType__InventoryPanelSideLayerWidget = 49,
	EWidgetType__ItemWidget2       = 50,
	EWidgetType__ItemWidget2VicinityContainer = 51,
	EWidgetType__ItemTooltipWidget = 52,
	EWidgetType__TooltipPanelFoodOverview = 53,
	EWidgetType__TooltipPanelFoodNutritionsSingle = 54,
	EWidgetType__TooltipPanelFoodNutritionsFull = 55,
	EWidgetType__TooltipPanelFoodGraphs = 56,
	EWidgetType__TooltipPanelWeaponAbsolute = 57,
	EWidgetType__TooltipPanelWeaponRelative = 58,
	EWidgetType__StatisticsListRow = 59,
	EWidgetType__RewardItemWidget  = 60,
	EWidgetType__ThrowingQuickAccessMenu = 61,
	EWidgetType__EWidgetType_MAX   = 62,

};

// Enum ConZ.EUnarmedCombatInput
enum class ConZ_EUnarmedCombatInput : uint8_t
{
	EUnarmedCombatInput__WalkForward = 0,
	EUnarmedCombatInput__WalkBackward = 1,
	EUnarmedCombatInput__WalkRight = 2,
	EUnarmedCombatInput__WalkLeft  = 3,
	EUnarmedCombatInput__Punch     = 4,
	EUnarmedCombatInput__Kick      = 5,
	EUnarmedCombatInput__BlockPressed = 6,
	EUnarmedCombatInput__BlockReleased = 7,
	EUnarmedCombatInput__PreviousTarget = 8,
	EUnarmedCombatInput__NextTarget = 9,
	EUnarmedCombatInput__ReleaseCursor = 10,
	EUnarmedCombatInput__EUnarmedCombatInput_MAX = 11,

};

// Enum ConZ.EUserProfileType
enum class ConZ_EUserProfileType : uint8_t
{
	EUserProfileType__Singleplayer = 0,
	EUserProfileType__MultiplayerAuthority = 1,
	EUserProfileType__MultiplayerCache = 2,
	EUserProfileType__EUserProfileType_MAX = 3,

};

// Enum ConZ.EVehicleEngineState
enum class ConZ_EVehicleEngineState : uint8_t
{
	EVehicleEngineState__Unavailable = 0,
	EVehicleEngineState__TurnedOff = 1,
	EVehicleEngineState__StartingViaIgnition = 2,
	EVehicleEngineState__StartingViaMotion = 3,
	EVehicleEngineState__ReadyDelay = 4,
	EVehicleEngineState__Ready     = 5,
	EVehicleEngineState__FailedToStartDelay = 6,
	EVehicleEngineState__FailedToStart = 7,
	EVehicleEngineState__FailedToStartNoFuelDelay = 8,
	EVehicleEngineState__FailedToStartNoFuel = 9,
	EVehicleEngineState__FailedToStartNoBatteryDelay = 10,
	EVehicleEngineState__FailedToStartNoBattery = 11,
	EVehicleEngineState__StalledDelay = 12,
	EVehicleEngineState__Stalled   = 13,
	EVehicleEngineState__Broken    = 14,
	EVehicleEngineState__EVehicleEngineState_MAX = 15,

};

// Enum ConZ.EVehicleSeatType
enum class ConZ_EVehicleSeatType : uint8_t
{
	EVehicleSeatType__Driver       = 0,
	EVehicleSeatType__Passenger    = 1,
	EVehicleSeatType__EVehicleSeatType_MAX = 2,

};

// Enum ConZ.EWaypointTraverseType
enum class ConZ_EWaypointTraverseType : uint8_t
{
	EWaypointTraverseType__Clockwise = 0,
	EWaypointTraverseType__CounterClockwise = 1,
	EWaypointTraverseType__Random  = 2,
	EWaypointTraverseType__EWaypointTraverseType_MAX = 3,

};

// Enum ConZ.EAnimalWaypointType
enum class ConZ_EAnimalWaypointType : uint8_t
{
	EAnimalWaypointType__PassThrough = 0,
	EAnimalWaypointType__Wait      = 1,
	EAnimalWaypointType__Rest      = 2,
	EAnimalWaypointType__Eat       = 3,
	EAnimalWaypointType__All       = 4,
	EAnimalWaypointType__EAnimalWaypointType_MAX = 5,

};

// Enum ConZ.EWeaponAnimationCurve
enum class ConZ_EWeaponAnimationCurve : uint8_t
{
	EWeaponAnimationCurve__DrawAmount = 0,
	EWeaponAnimationCurve__StrengthAmount = 1,
	EWeaponAnimationCurve__Count   = 2,
	EWeaponAnimationCurve__EWeaponAnimationCurve_MAX = 3,

};

// Enum ConZ.EBowAimingTestType
enum class ConZ_EBowAimingTestType : uint8_t
{
	EBowAimingTestType__DotOnly    = 0,
	EBowAimingTestType__ViewOnly   = 1,
	EBowAimingTestType__DotAndView = 2,
	EBowAimingTestType__EBowAimingTestType_MAX = 3,

};

// Enum ConZ.EBowDrawPercentage
enum class ConZ_EBowDrawPercentage : uint8_t
{
	EBowDrawPercentage__Draw50percent = 0,
	EBowDrawPercentage__Draw75percent = 1,
	EBowDrawPercentage__Draw100percent = 2,
	EBowDrawPercentage__Count      = 3,
	EBowDrawPercentage__EBowDrawPercentage_MAX = 4,

};

// Enum ConZ.EWeaponBowState
enum class ConZ_EWeaponBowState : uint8_t
{
	EWeaponBowState__None          = 0,
	EWeaponBowState__InsertArrow   = 1,
	EWeaponBowState__RemoveArrow   = 2,
	EWeaponBowState__Draw          = 3,
	EWeaponBowState__CancelFiring  = 4,
	EWeaponBowState__FireDummy     = 5,
	EWeaponBowState__Fire          = 6,
	EWeaponBowState__FireAndInsertArrow = 7,
	EWeaponBowState__Active        = 8,
	EWeaponBowState__EWeaponBowState_MAX = 9,

};

// Enum ConZ.EWeaponCrossbowDrawCategory
enum class ConZ_EWeaponCrossbowDrawCategory : uint8_t
{
	EWeaponCrossbowDrawCategory__UnableToDraw = 0,
	EWeaponCrossbowDrawCategory__Slow = 1,
	EWeaponCrossbowDrawCategory__Normal = 2,
	EWeaponCrossbowDrawCategory__Count = 3,
	EWeaponCrossbowDrawCategory__EWeaponCrossbowDrawCategory_MAX = 4,

};

// Enum ConZ.EWeaponEjectFromChamberType
enum class ConZ_EWeaponEjectFromChamberType : uint8_t
{
	EWeaponEjectFromChamberType__Casing = 0,
	EWeaponEjectFromChamberType__LiveRound = 1,
	EWeaponEjectFromChamberType__EWeaponEjectFromChamberType_MAX = 2,

};

// Enum ConZ.EReloadWeaponSequence
enum class ConZ_EReloadWeaponSequence : uint8_t
{
	EReloadWeaponSequence__None    = 0,
	EReloadWeaponSequence__InsertMagazine = 1,
	EReloadWeaponSequence__RemoveMagazineInstertMagazine = 2,
	EReloadWeaponSequence__InstertCartridge = 3,
	EReloadWeaponSequence__RemoveMagazineInstertCartridge = 4,
	EReloadWeaponSequence__EReloadWeaponSequence_MAX = 5,

};

// Enum ConZ.EWeaponCombatModeType
enum class ConZ_EWeaponCombatModeType : uint8_t
{
	EWeaponCombatModeType__Relaxed = 0,
	EWeaponCombatModeType__Aiming  = 1,
	EWeaponCombatModeType__Count   = 2,
	EWeaponCombatModeType__EWeaponCombatModeType_MAX = 3,

};

// Enum ConZ.EWeaponAttachmentActionType
enum class ConZ_EWeaponAttachmentActionType : uint8_t
{
	EWeaponAttachmentActionType__Add = 0,
	EWeaponAttachmentActionType__Remove = 1,
	EWeaponAttachmentActionType__Swap = 2,
	EWeaponAttachmentActionType__Count = 3,
	EWeaponAttachmentActionType__EWeaponAttachmentActionType_MAX = 4,

};

// Enum ConZ.EDayPeriod
enum class ConZ_EDayPeriod : uint8_t
{
	EDayPeriod__Nighttime          = 0,
	EDayPeriod__Dawn               = 1,
	EDayPeriod__Daytime            = 2,
	EDayPeriod__Dusk               = 3,
	EDayPeriod__EDayPeriod_MAX     = 4,

};

// Enum ConZ.ECraftingMarkerMode
enum class ConZ_ECraftingMarkerMode : uint8_t
{
	ECraftingMarkerMode__Marker    = 0,
	ECraftingMarkerMode__FullInfo  = 1,
	ECraftingMarkerMode__ECraftingMarkerMode_MAX = 2,

};

// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class ConZ_EZombieRagdollAutoRecoveryType : uint8_t
{
	EZombieRagdollAutoRecoveryType__None = 0,
	EZombieRagdollAutoRecoveryType__WhenAtRest = 1,
	EZombieRagdollAutoRecoveryType__AfterTimeSpan = 2,
	EZombieRagdollAutoRecoveryType__WhenAtRestAfterTimeSpan = 3,
	EZombieRagdollAutoRecoveryType__EZombieRagdollAutoRecoveryType_MAX = 4,

};

// Enum ConZ.EZombieTurnMontage
enum class ConZ_EZombieTurnMontage : uint8_t
{
	EZombieTurnMontage__RelaxedIdle = 0,
	EZombieTurnMontage__AlertedIdle = 1,
	EZombieTurnMontage__CombatIdle = 2,
	EZombieTurnMontage__RelaxedIdleToAlertedIdle = 3,
	EZombieTurnMontage__Count      = 4,
	EZombieTurnMontage__EZombieTurnMontage_MAX = 5,

};

// Enum ConZ.EZombieStance
enum class ConZ_EZombieStance : uint8_t
{
	EZombieStance__Relaxed         = 0,
	EZombieStance__Lying           = 1,
	EZombieStance__Alerted         = 2,
	EZombieStance__Combat          = 3,
	EZombieStance__EZombieStance_MAX = 4,

};

// Enum ConZ.EPrisonerCommonSpawnLocation
enum class ConZ_EPrisonerCommonSpawnLocation : uint8_t
{
	EPrisonerCommonSpawnLocation__None = 0,
	EPrisonerCommonSpawnLocation__Random = 1,
	EPrisonerCommonSpawnLocation__Sector = 2,
	EPrisonerCommonSpawnLocation__Home = 3,
	EPrisonerCommonSpawnLocation__Squad = 4,
	EPrisonerCommonSpawnLocation__Event = 5,
	EPrisonerCommonSpawnLocation__EPrisonerCommonSpawnLocation_MAX = 6,

};

// Enum ConZ.ETabMode
enum class ConZ_ETabMode : uint8_t
{
	ETabMode__None                 = 0,
	ETabMode__Inventory            = 1,
	ETabMode__BCU                  = 2,
	ETabMode__Crafting             = 3,
	ETabMode__Journal              = 4,
	ETabMode__Squad                = 5,
	ETabMode__Events               = 6,
	ETabMode__Last                 = 7,
	ETabMode__ETabMode_MAX         = 8,

};

// Enum ConZ.EPrisonerCombatMode
enum class ConZ_EPrisonerCombatMode : uint8_t
{
	EPrisonerCombatMode__None      = 0,
	EPrisonerCombatMode__MeleeUnarmed = 1,
	EPrisonerCombatMode__MeleeWeapon = 2,
	EPrisonerCombatMode__Firearm   = 3,
	EPrisonerCombatMode__EPrisonerCombatMode_MAX = 4,

};

// Enum ConZ.EHoldBreathState
enum class ConZ_EHoldBreathState : uint8_t
{
	EHoldBreathState__None         = 0,
	EHoldBreathState__BreathIn     = 1,
	EHoldBreathState__HoldBreath   = 2,
	EHoldBreathState__BreathOut    = 3,
	EHoldBreathState__Breathless   = 4,
	EHoldBreathState__BreathInRecovery = 5,
	EHoldBreathState__Count        = 6,
	EHoldBreathState__EHoldBreathState_MAX = 7,

};

// Enum ConZ.EPrisonerWettablePart
enum class ConZ_EPrisonerWettablePart : uint8_t
{
	EPrisonerWettablePart__Head    = 0,
	EPrisonerWettablePart__UpperBody = 1,
	EPrisonerWettablePart__LowerBody = 2,
	EPrisonerWettablePart__Feet    = 3,
	EPrisonerWettablePart__Count   = 4,
	EPrisonerWettablePart__EPrisonerWettablePart_MAX = 5,

};

// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class ConZ_EPrisonerMeleeTargetSelectionMode : uint8_t
{
	EPrisonerMeleeTargetSelectionMode__Manual = 0,
	EPrisonerMeleeTargetSelectionMode__SemiAutomatic = 1,
	EPrisonerMeleeTargetSelectionMode__Automatic = 2,
	EPrisonerMeleeTargetSelectionMode__EPrisonerMeleeTargetSelectionMode_MAX = 3,

};

// Enum ConZ.EMotionIntensity
enum class ConZ_EMotionIntensity : uint8_t
{
	EMotionIntensity__None         = 0,
	EMotionIntensity__Light        = 1,
	EMotionIntensity__Medium       = 2,
	EMotionIntensity__Heavy        = 3,
	EMotionIntensity__EMotionIntensity_MAX = 4,

};

// Enum ConZ.EPrisonerStance
enum class ConZ_EPrisonerStance : uint8_t
{
	EPrisonerStance__Standing      = 0,
	EPrisonerStance__Crouching     = 1,
	EPrisonerStance__Prone         = 2,
	EPrisonerStance__Swimming      = 3,
	EPrisonerStance__Count         = 4,
	EPrisonerStance__EPrisonerStance_MAX = 5,

};

// Enum ConZ.EVehicleWeaponAimingStance
enum class ConZ_EVehicleWeaponAimingStance : uint8_t
{
	EVehicleWeaponAimingStance__Default = 0,
	EVehicleWeaponAimingStance__Leaning = 1,
	EVehicleWeaponAimingStance__Count = 2,
	EVehicleWeaponAimingStance__EVehicleWeaponAimingStance_MAX = 3,

};

// Enum ConZ.ESkillAttribute
enum class ConZ_ESkillAttribute : uint8_t
{
	ESkillAttribute__Constitution  = 0,
	ESkillAttribute__Dexterity     = 1,
	ESkillAttribute__Intelligence  = 2,
	ESkillAttribute__Strength      = 3,
	ESkillAttribute__ESkillAttribute_MAX = 4,

};

// Enum ConZ.EBodyState
enum class ConZ_EBodyState : uint8_t
{
	EBodyState__FullyFed           = 0,
	EBodyState__Hungry             = 1,
	EBodyState__Starving           = 2,
	EBodyState__WellHydrated       = 3,
	EBodyState__Hydrated           = 4,
	EBodyState__Thirsty            = 5,
	EBodyState__VeryThirsty        = 6,
	EBodyState__Dehydrated         = 7,
	EBodyState__UrinationNeeded    = 8,
	EBodyState__ForcedUrination    = 9,
	EBodyState__DefecationNeeded   = 10,
	EBodyState__ForcedDefecation   = 11,
	EBodyState__Choking            = 12,
	EBodyState__Unconsciousness    = 13,
	EBodyState__Coma               = 14,
	EBodyState__Death              = 15,
	EBodyState__Headless           = 16,
	EBodyState__LowBloodSugar      = 17,
	EBodyState__NoseBleeding       = 18,
	EBodyState__FeelingCold        = 19,
	EBodyState__Fatigue            = 20,
	EBodyState__HeartPalpitations  = 21,
	EBodyState__RespiratoryProblems = 22,
	EBodyState__RespiratoryFailure = 23,
	EBodyState__Confusion          = 24,
	EBodyState__Nausea             = 25,
	EBodyState__BlurredVision      = 26,
	EBodyState__NightBlindness     = 27,
	EBodyState__Pellagra           = 28,
	EBodyState__PainfulJoints      = 29,
	EBodyState__SkinProblems       = 30,
	EBodyState__MuscleWeakness     = 31,
	EBodyState__ItchingFeet        = 32,
	EBodyState__Headache           = 33,
	EBodyState__LightChestPain     = 34,
	EBodyState__SeriousChestPain   = 35,
	EBodyState__CardiacArrest      = 36,
	EBodyState__GrayHair           = 37,
	EBodyState__HairLoss           = 38,
	EBodyState__ColdHands          = 39,
	EBodyState__Fever              = 40,
	EBodyState__ApetiteLoss        = 41,
	EBodyState__MemoryLoss         = 42,
	EBodyState__Anemia             = 43,
	EBodyState__Cramps             = 44,
	EBodyState__Numbness           = 45,
	EBodyState__Farts              = 46,
	EBodyState__Constipation       = 47,
	EBodyState__AbdominalPain      = 48,
	EBodyState__StomachPain        = 49,
	EBodyState__Seizures           = 50,
	EBodyState__Burping            = 51,
	EBodyState__Vomiting           = 52,
	EBodyState__StomachRupture     = 53,
	EBodyState__LiverFailure       = 54,
	EBodyState__Diarrhea           = 55,
	EBodyState__Dizziness          = 56,
	EBodyState__Depression         = 57,
	EBodyState__Lethargy           = 58,
	EBodyState__Hallucinations     = 59,
	EBodyState__Delirium           = 60,
	EBodyState__DecreasedConsciousness = 61,
	EBodyState__DifficultySleeping = 62,
	EBodyState__Overdose           = 63,
	EBodyState__Tiring             = 64,
	EBodyState__Fainting           = 65,
	EBodyState__Count              = 66,
	EBodyState__EBodyState_MAX     = 67,

};

// Enum ConZ.ECharacterActionEndState
enum class ConZ_ECharacterActionEndState : uint8_t
{
	ECharacterActionEndState__None = 0,
	ECharacterActionEndState__Regular = 1,
	ECharacterActionEndState__ConditionNotMet = 2,
	ECharacterActionEndState__Canceled = 3,
	ECharacterActionEndState__Failed = 4,
	ECharacterActionEndState__Terminated = 5,
	ECharacterActionEndState__ECharacterActionEndState_MAX = 6,

};

// Enum ConZ.ECharacterActionAckType
enum class ConZ_ECharacterActionAckType : uint8_t
{
	ECharacterActionAckType__None  = 0,
	ECharacterActionAckType__Begin = 1,
	ECharacterActionAckType__End   = 2,
	ECharacterActionAckType__ECharacterActionAckType_MAX = 3,

};

// Enum ConZ.EPlayableInstrumentTone
enum class ConZ_EPlayableInstrumentTone : uint8_t
{
	EPlayableInstrumentTone__C     = 0,
	EPlayableInstrumentTone__Db    = 1,
	EPlayableInstrumentTone__D     = 2,
	EPlayableInstrumentTone__Eb    = 3,
	EPlayableInstrumentTone__E     = 4,
	EPlayableInstrumentTone__F     = 5,
	EPlayableInstrumentTone__Gb    = 6,
	EPlayableInstrumentTone__G     = 7,
	EPlayableInstrumentTone__Ab    = 8,
	EPlayableInstrumentTone__A     = 9,
	EPlayableInstrumentTone__Bb    = 10,
	EPlayableInstrumentTone__B     = 11,
	EPlayableInstrumentTone__C2    = 12,
	EPlayableInstrumentTone__Count = 13,
	EPlayableInstrumentTone__EPlayableInstrumentTone_MAX = 14,

};

// Enum ConZ.EWindSpeedCategory
enum class ConZ_EWindSpeedCategory : uint8_t
{
	EWindSpeedCategory__Zero       = 0,
	EWindSpeedCategory__Low        = 1,
	EWindSpeedCategory__Medium     = 2,
	EWindSpeedCategory__High       = 3,
	EWindSpeedCategory__EWindSpeedCategory_MAX = 4,

};

// Enum ConZ.EHandsHolstersType
enum class ConZ_EHandsHolstersType : uint8_t
{
	EHandsHolstersType__Hands      = 0,
	EHandsHolstersType__HolsterLeft = 1,
	EHandsHolstersType__HolsterRight = 2,
	EHandsHolstersType__EHandsHolstersType_MAX = 3,

};

// Enum ConZ.ECarryingItemState
enum class ConZ_ECarryingItemState : uint8_t
{
	ECarryingItemState__None       = 0,
	ECarryingItemState__Idle       = 1,
	ECarryingItemState__ECarryingItemState_MAX = 2,

};

// Enum ConZ.EPlayingInstrumentState
enum class ConZ_EPlayingInstrumentState : uint8_t
{
	EPlayingInstrumentState__None  = 0,
	EPlayingInstrumentState__Exiting = 1,
	EPlayingInstrumentState__Idle  = 2,
	EPlayingInstrumentState__Playing = 3,
	EPlayingInstrumentState__EPlayingInstrumentState_MAX = 4,

};

// Enum ConZ.EScopingWithItemInHandsState
enum class ConZ_EScopingWithItemInHandsState : uint8_t
{
	EScopingWithItemInHandsState__None = 0,
	EScopingWithItemInHandsState__Starting = 1,
	EScopingWithItemInHandsState__Scoping = 2,
	EScopingWithItemInHandsState__StoppingWithEffect = 3,
	EScopingWithItemInHandsState__StoppingNoEffect = 4,
	EScopingWithItemInHandsState__EScopingWithItemInHandsState_MAX = 5,

};

// Enum ConZ.EWeaponAimingType
enum class ConZ_EWeaponAimingType : uint8_t
{
	EWeaponAimingType__None        = 0,
	EWeaponAimingType__Hip         = 1,
	EWeaponAimingType__DownTheSights = 2,
	EWeaponAimingType__EWeaponAimingType_MAX = 3,

};

// Enum ConZ.EDodgeDirectionType
enum class ConZ_EDodgeDirectionType : uint8_t
{
	EDodgeDirectionType__Front     = 0,
	EDodgeDirectionType__Back      = 1,
	EDodgeDirectionType__Left      = 2,
	EDodgeDirectionType__Right     = 3,
	EDodgeDirectionType__EDodgeDirectionType_MAX = 4,

};

// Enum ConZ.EPrisonerMountFlags
enum class ConZ_EPrisonerMountFlags : uint8_t
{
	EPrisonerMountFlags__None      = 0,
	EPrisonerMountFlags__HasMountedSlot = 1,
	EPrisonerMountFlags__UnmountWithAnimation = 2,
	EPrisonerMountFlags__ShouldHideAttachedItems = 3,
	EPrisonerMountFlags__EPrisonerMountFlags_MAX = 4,

};

// Enum ConZ.EClothesType
enum class ConZ_EClothesType : uint8_t
{
	EClothesType__None             = 0,
	EClothesType__Back             = 1,
	EClothesType__HeadUpper        = 2,
	EClothesType__HeadLower        = 3,
	EClothesType__Eyes             = 4,
	EClothesType__HeadUpperSkeletal = 5,
	EClothesType__Head             = 6,
	EClothesType__Neck             = 7,
	EClothesType__Body_Armor       = 8,
	EClothesType__Body_LongSleeves = 9,
	EClothesType__Body_ShortSleeves = 10,
	EClothesType__Waist            = 11,
	EClothesType__Hands            = 12,
	EClothesType__Legs             = 13,
	EClothesType__Feet             = 14,
	EClothesType__Underwear        = 15,
	EClothesType__PenisWarmer      = 16,
	EClothesType__Suit             = 17,
	EClothesType__Count            = 18,
	EClothesType__EClothesType_MAX = 19,

};

// Enum ConZ.EConfigFile
enum class ConZ_EConfigFile : uint8_t
{
	EConfigFile__None              = 0,
	EConfigFile__Engine            = 1,
	EConfigFile__GameUserSettings  = 2,
	EConfigFile__ServerSettings    = 3,
	EConfigFile__EConfigFile_MAX   = 4,

};

// Enum ConZ.EPrisonerHUDMode
enum class ConZ_EPrisonerHUDMode : uint8_t
{
	EPrisonerHUDMode__Normal       = 0,
	EPrisonerHUDMode__DebugMain    = 1,
	EPrisonerHUDMode__DebugSkills  = 2,
	EPrisonerHUDMode__DebugMovement = 3,
	EPrisonerHUDMode__DebugMeleeSkill = 4,
	EPrisonerHUDMode__Target       = 5,
	EPrisonerHUDMode__Map          = 6,
	EPrisonerHUDMode__DroneNormal  = 7,
	EPrisonerHUDMode__DroneMap     = 8,
	EPrisonerHUDMode__EPrisonerHUDMode_MAX = 9,

};

// Enum ConZ.EBodySlot
enum class ConZ_EBodySlot : uint8_t
{
	EBodySlot__Head                = 0,
	EBodySlot__Chest               = 1,
	EBodySlot__Legs                = 2,
	EBodySlot__Feet                = 3,
	EBodySlot__Count               = 4,
	EBodySlot__EBodySlot_MAX       = 5,

};

// Enum ConZ.EClothesPart
enum class ConZ_EClothesPart : uint8_t
{
	EClothesPart__None             = 0,
	EClothesPart__BodyUpper        = 1,
	EClothesPart__BodyLower        = 2,
	EClothesPart__Head             = 3,
	EClothesPart__Eyes             = 4,
	EClothesPart__Neck             = 5,
	EClothesPart__Hands            = 6,
	EClothesPart__ArmUpper         = 7,
	EClothesPart__ArmLower         = 8,
	EClothesPart__Legs             = 9,
	EClothesPart__Feet             = 10,
	EClothesPart__EClothesPart_MAX = 11,

};

// Enum ConZ.EDiagnosedResult
enum class ConZ_EDiagnosedResult : uint8_t
{
	EDiagnosedResult__None         = 0,
	EDiagnosedResult__DeathDetected = 1,
	EDiagnosedResult__UnconsciousnessDetected = 2,
	EDiagnosedResult__NotBreathingDetected = 3,
	EDiagnosedResult__IncreasedBodyTempDetected = 4,
	EDiagnosedResult__DiarrheaDetected = 5,
	EDiagnosedResult__VomitingDetected = 6,
	EDiagnosedResult__PhysicalInjuryDetected = 7,
	EDiagnosedResult__BrokenLimbsInjuryDetected = 8,
	EDiagnosedResult__ChokingSicknessDetected = 9,
	EDiagnosedResult__OverdoseSicknessDetected = 10,
	EDiagnosedResult__OvereatingSicknessDetected = 11,
	EDiagnosedResult__DehydrationSicknessDetected = 12,
	EDiagnosedResult__StarvationSicknessDetected = 13,
	EDiagnosedResult__CarbonMonoxidePoisoningDetected = 14,
	EDiagnosedResult__DysenteryDiseaseDetected = 15,
	EDiagnosedResult__HypothermiaDiseaseDetected = 16,
	EDiagnosedResult__HyperthermiaDiseaseDetected = 17,
	EDiagnosedResult__HookwormsDiseaseDetected = 18,
	EDiagnosedResult__HepatitisADiseaseDetected = 19,
	EDiagnosedResult__HeatstrokeDiseaseDetected = 20,
	EDiagnosedResult__HeartAttackDetected = 21,
	EDiagnosedResult__LeptospirosisDiseaseDetected = 22,
	EDiagnosedResult__MalariaDiseaseDetected = 23,
	EDiagnosedResult__MeningitisDiseaseDetected = 24,
	EDiagnosedResult__RadiationSicknessDetected = 25,
	EDiagnosedResult__SalmonellaDiseaseDetected = 26,
	EDiagnosedResult__SunburnSicknessDetected = 27,
	EDiagnosedResult__ToothacheSicknessDetected = 28,
	EDiagnosedResult__TrenchFootDiseaseDetected = 29,
	EDiagnosedResult__CystitisDiseaseDetected = 30,
	EDiagnosedResult__CalciumDeficiencyDetected = 31,
	EDiagnosedResult__CopperDeficiencyDetected = 32,
	EDiagnosedResult__EnergyDeficiencyDetected = 33,
	EDiagnosedResult__FatDeficiencyDetected = 34,
	EDiagnosedResult__FiberDeficiencyDetected = 35,
	EDiagnosedResult__IronDeficiencyDetected = 36,
	EDiagnosedResult__MagnesiumDeficiencyDetected = 37,
	EDiagnosedResult__ManganeseDeficiencyDetected = 38,
	EDiagnosedResult__PhosphorusDeficiencyDetected = 39,
	EDiagnosedResult__PotassiumDeficiencyDetected = 40,
	EDiagnosedResult__ProteinDeficiencyDetected = 41,
	EDiagnosedResult__SeleniumDeficiencyDetected = 42,
	EDiagnosedResult__SodiumDeficiencyDetected = 43,
	EDiagnosedResult__ZincDeficiencyDetected = 44,
	EDiagnosedResult__VitaminADeficiencyDetected = 45,
	EDiagnosedResult__VitaminB1DeficiencyDetected = 46,
	EDiagnosedResult__VitaminB2DeficiencyDetected = 47,
	EDiagnosedResult__VitaminB3DeficiencyDetected = 48,
	EDiagnosedResult__VitaminB4DeficiencyDetected = 49,
	EDiagnosedResult__VitaminB5DeficiencyDetected = 50,
	EDiagnosedResult__VitaminB6DeficiencyDetected = 51,
	EDiagnosedResult__VitaminB9DeficiencyDetected = 52,
	EDiagnosedResult__VitaminB12DeficiencyDetected = 53,
	EDiagnosedResult__VitaminCDeficiencyDetected = 54,
	EDiagnosedResult__VitaminDDeficiencyDetected = 55,
	EDiagnosedResult__VitaminEDeficiencyDetected = 56,
	EDiagnosedResult__VitaminKDeficiencyDetected = 57,
	EDiagnosedResult__BacillusCereusPoisoningDetected = 58,
	EDiagnosedResult__BotulismPoisoningDetected = 59,
	EDiagnosedResult__CampylobacteriosisPoisoningDetected = 60,
	EDiagnosedResult__CyclosporiasisPoisoningDetected = 61,
	EDiagnosedResult__IntestinalCryptosporidiosisPoisoningDetected = 62,
	EDiagnosedResult__StaphylococcalPoisoningDetected = 63,
	EDiagnosedResult__VibrioVulnificusInfectionDetected = 64,
	EDiagnosedResult__AmanitaVirosaPoisoningDetected = 65,
	EDiagnosedResult__PsilocybeCyanescensPoisoningDetected = 66,
	EDiagnosedResult__AmanitaPhalloidesPoisoningDetected = 67,
	EDiagnosedResult__AmanitaPantheriaPoisoningDetected = 68,
	EDiagnosedResult__AmanitaMuscariaPoisoningDetected = 69,
	EDiagnosedResult__InocybePatouillardiiPoisoningDetected = 70,
	EDiagnosedResult__FoxglovePoisoningDetected = 71,
	EDiagnosedResult__HemlockPoisoningDetected = 72,
	EDiagnosedResult__BaneberryPoisoningDetected = 73,
	EDiagnosedResult__DeadlyNightshadePoisoningDetected = 74,
	EDiagnosedResult__GasPoisoningDetected = 75,
	EDiagnosedResult__DrunkennessSicknessDetected = 76,
	EDiagnosedResult__AlcoholismAddictionDetected = 77,
	EDiagnosedResult__Count        = 78,
	EDiagnosedResult__EDiagnosedResult_MAX = 79,

};

// Enum ConZ.EBleedingType
enum class ConZ_EBleedingType : uint8_t
{
	EBleedingType__None            = 0,
	EBleedingType__Scratch         = 1,
	EBleedingType__Small           = 2,
	EBleedingType__Large           = 3,
	EBleedingType__EBleedingType_MAX = 4,

};

// Enum ConZ.EPrisonerMontage
enum class ConZ_EPrisonerMontage : uint8_t
{
	EPrisonerMontage__None         = 0,
	EPrisonerMontage__WeaponEquipRifle = 1,
	EPrisonerMontage__WeaponUnequipRifle = 2,
	EPrisonerMontage__WeaponEquipHandgun = 3,
	EPrisonerMontage__WeaponUnequipHandgun = 4,
	EPrisonerMontage__Urinate      = 5,
	EPrisonerMontage__UrinateForced = 6,
	EPrisonerMontage__Defecate     = 7,
	EPrisonerMontage__DefecateForced = 8,
	EPrisonerMontage__Vomit        = 9,
	EPrisonerMontage__VomitForced  = 10,
	EPrisonerMontage__SearchObject = 11,
	EPrisonerMontage__SearchPrisoner = 12,
	EPrisonerMontage__SearchZombie = 13,
	EPrisonerMontage__PatchWounds  = 14,
	EPrisonerMontage__PatchWoundsEnd = 15,
	EPrisonerMontage__DrinkInteraction = 16,
	EPrisonerMontage__Eat          = 17,
	EPrisonerMontage__EatCan       = 18,
	EPrisonerMontage__Drink        = 19,
	EPrisonerMontage__Throw        = 20,
	EPrisonerMontage__LongThrow    = 21,
	EPrisonerMontage__LongThrowLoop = 22,
	EPrisonerMontage__ShortThrow   = 23,
	EPrisonerMontage__ThrowbackGrenade = 24,
	EPrisonerMontage__SwapWeapons  = 25,
	EPrisonerMontage__ChopTree     = 26,
	EPrisonerMontage__ChopTreeEnd  = 27,
	EPrisonerMontage__ChopLog      = 28,
	EPrisonerMontage__ChopLogEnd   = 29,
	EPrisonerMontage__SwapItemsNotWeaponToNotWeapon = 30,
	EPrisonerMontage__SwapItemsWeaponToWeapon = 31,
	EPrisonerMontage__SwapItemsNotWeaponToWeapon = 32,
	EPrisonerMontage__SwapItemsWeaponToNotWeapon = 33,
	EPrisonerMontage__SwapItemsThrowingItemToWeapon = 34,
	EPrisonerMontage__SwapItemsWeaponToThrowingItem = 35,
	EPrisonerMontage__Craft        = 36,
	EPrisonerMontage__Uncraft      = 37,
	EPrisonerMontage__CheckTime    = 38,
	EPrisonerMontage__CheckTimeWhileItemInHands = 39,
	EPrisonerMontage__CheckTimeWhileWeaponInHands = 40,
	EPrisonerMontage__GestureShowFinger = 41,
	EPrisonerMontage__GestureStandSurrender = 42,
	EPrisonerMontage__GestureWaveHi = 43,
	EPrisonerMontage__GestureYouAreDead = 44,
	EPrisonerMontage__GestureFY    = 45,
	EPrisonerMontage__GesturePoint = 46,
	EPrisonerMontage__GestureHeart = 47,
	EPrisonerMontage__GestureBallpalm = 48,
	EPrisonerMontage__GestureFacepalm = 49,
	EPrisonerMontage__GestureFingerGun = 50,
	EPrisonerMontage__GestureLaughing = 51,
	EPrisonerMontage__GestureSmellWave = 52,
	EPrisonerMontage__GestureSquat = 53,
	EPrisonerMontage__GestureCharge = 54,
	EPrisonerMontage__GestureFreeze = 55,
	EPrisonerMontage__GestureGetDown = 56,
	EPrisonerMontage__GestureGetUp = 57,
	EPrisonerMontage__GestureHalt  = 58,
	EPrisonerMontage__GestureHurryUp = 59,
	EPrisonerMontage__GesturePointMe = 60,
	EPrisonerMontage__GesturePointYou = 61,
	EPrisonerMontage__GestureRally = 62,
	EPrisonerMontage__GestureThumbsUp = 63,
	EPrisonerMontage__GestureThumbsDown = 64,
	EPrisonerMontage__GestureUnderstandNot = 65,
	EPrisonerMontage__GestureUnderstandYes = 66,
	EPrisonerMontage__CommitSuicide = 67,
	EPrisonerMontage__CommitSuicideRare = 68,
	EPrisonerMontage__CommitSuicideCaptured = 69,
	EPrisonerMontage__LockpickRegular = 70,
	EPrisonerMontage__Whistle      = 71,
	EPrisonerMontage__TuneBow      = 72,
	EPrisonerMontage__RepairVehicle = 73,
	EPrisonerMontage__WashCloth    = 74,
	EPrisonerMontage__Bury         = 75,
	EPrisonerMontage__BuryRest     = 76,
	EPrisonerMontage__ResumeBury   = 77,
	EPrisonerMontage__SitOnGroundStart = 78,
	EPrisonerMontage__SitOnGroundEnd = 79,
	EPrisonerMontage__LayOnGroundStart = 80,
	EPrisonerMontage__LayOnGroundEnd = 81,
	EPrisonerMontage__IgniteFlare  = 82,
	EPrisonerMontage__ArmTrap      = 83,
	EPrisonerMontage__ForceUnlockStanding = 84,
	EPrisonerMontage__ForceUnlockStandingEnd = 85,
	EPrisonerMontage__ForceUnlockStandingStop = 86,
	EPrisonerMontage__Spill        = 87,
	EPrisonerMontage__Count        = 88,
	EPrisonerMontage__EPrisonerMontage_MAX = 89,

};

// Enum ConZ.EPrisonerAnimationSet
enum class ConZ_EPrisonerAnimationSet : uint8_t
{
	EPrisonerAnimationSet__Base    = 0,
	EPrisonerAnimationSet__Rifle   = 1,
	EPrisonerAnimationSet__RifleRelaxed = 2,
	EPrisonerAnimationSet__UnarmedCombat = 3,
	EPrisonerAnimationSet__Handgun = 4,
	EPrisonerAnimationSet__BowRelaxed = 5,
	EPrisonerAnimationSet__Bow     = 6,
	EPrisonerAnimationSet__CarryingItem = 7,
	EPrisonerAnimationSet__HandsBound = 8,
	EPrisonerAnimationSet__BaseLimping = 9,
	EPrisonerAnimationSet__RifleLimping = 10,
	EPrisonerAnimationSet__RifleRelaxedLimping = 11,
	EPrisonerAnimationSet__UnarmedCombatLimping = 12,
	EPrisonerAnimationSet__HandgunLimping = 13,
	EPrisonerAnimationSet__BowRelaxedLimping = 14,
	EPrisonerAnimationSet__BowLimping = 15,
	EPrisonerAnimationSet__CarryingItemLimping = 16,
	EPrisonerAnimationSet__HandsBoundLimping = 17,
	EPrisonerAnimationSet__ChainsawRelaxed = 18,
	EPrisonerAnimationSet__ChainsawRelaxedLimping = 19,
	EPrisonerAnimationSet__Chainsaw = 20,
	EPrisonerAnimationSet__ChainsawLimping = 21,
	EPrisonerAnimationSet__Count   = 22,
	EPrisonerAnimationSet__EPrisonerAnimationSet_MAX = 23,

};

// Enum ConZ.EWidgetDisplayInfoType
enum class ConZ_EWidgetDisplayInfoType : uint8_t
{
	EWidgetDisplayInfoType__None   = 0,
	EWidgetDisplayInfoType__FirstOverSecond = 1,
	EWidgetDisplayInfoType__Single = 2,
	EWidgetDisplayInfoType__EWidgetDisplayInfoType_MAX = 3,

};

// Enum ConZ.ENoiseLevel
enum class ConZ_ENoiseLevel : uint8_t
{
	ENoiseLevel__Mute              = 0,
	ENoiseLevel__VerySilent        = 1,
	ENoiseLevel__Silent            = 2,
	ENoiseLevel__Moderate          = 3,
	ENoiseLevel__Loud              = 4,
	ENoiseLevel__VeryLoud          = 5,
	ENoiseLevel__Count             = 6,
	ENoiseLevel__ENoiseLevel_MAX   = 7,

};

// Enum ConZ.EInteractionType
enum class ConZ_EInteractionType : uint8_t
{
	EInteractionType__None         = 0,
	EInteractionType__Select       = 1,
	EInteractionType__UnSelectAll  = 2,
	EInteractionType__Search       = 3,
	EInteractionType__Examine      = 4,
	EInteractionType__PickUp       = 5,
	EInteractionType__PickUpAllExamined = 6,
	EInteractionType__PickUpAllSelected = 7,
	EInteractionType__Use          = 8,
	EInteractionType__Operate      = 9,
	EInteractionType__Drop         = 10,
	EInteractionType__DropAllSelected = 11,
	EInteractionType__Throw        = 12,
	EInteractionType__Open         = 13,
	EInteractionType__Close        = 14,
	EInteractionType__Lock         = 15,
	EInteractionType__Unlock       = 16,
	EInteractionType__Push         = 17,
	EInteractionType__GodModeFill  = 18,
	EInteractionType__Fill         = 19,
	EInteractionType__AdjustHeight = 20,
	EInteractionType__ConfirmHeight = 21,
	EInteractionType__Tank         = 22,
	EInteractionType__Craft        = 23,
	EInteractionType__Uncraft      = 24,
	EInteractionType__Create       = 25,
	EInteractionType__FixTire      = 26,
	EInteractionType__Fix          = 27,
	EInteractionType__Refuel       = 28,
	EInteractionType__Charge       = 29,
	EInteractionType__FillResourceContainer = 30,
	EInteractionType__Eat          = 31,
	EInteractionType__EatAll       = 32,
	EInteractionType__Drink        = 33,
	EInteractionType__DrinkAll     = 34,
	EInteractionType__CheckTaste   = 35,
	EInteractionType__Equip        = 36,
	EInteractionType__UnEquip      = 37,
	EInteractionType__Cut          = 38,
	EInteractionType__Collect      = 39,
	EInteractionType__FillItemWithReplenishableResource = 40,
	EInteractionType__LightFire    = 41,
	EInteractionType__AddFuel      = 42,
	EInteractionType__Extinguish   = 43,
	EInteractionType__Prepare      = 44,
	EInteractionType__Cook         = 45,
	EInteractionType__Chop         = 46,
	EInteractionType__SmokeFood    = 47,
	EInteractionType__Destroy      = 48,
	EInteractionType__Store        = 49,
	EInteractionType__TakeInHands  = 50,
	EInteractionType__WashCloth    = 51,
	EInteractionType__WashClothAll = 52,
	EInteractionType__RemoveFromHands = 53,
	EInteractionType__CarryItem    = 54,
	EInteractionType__AddToQuickAccess = 55,
	EInteractionType__AddToThrowAccess = 56,
	EInteractionType__RemoveFromQuickAccess = 57,
	EInteractionType__RemoveFromThrowAccess = 58,
	EInteractionType__ChamberBullet = 59,
	EInteractionType__LoadAmmo     = 60,
	EInteractionType__UnloadAmmo   = 61,
	EInteractionType__CheckAmmo    = 62,
	EInteractionType__Swap         = 63,
	EInteractionType__Tune         = 64,
	EInteractionType__Join         = 65,
	EInteractionType__Split        = 66,
	EInteractionType__Unpack       = 67,
	EInteractionType__CheckPulse   = 68,
	EInteractionType__Diagnose     = 69,
	EInteractionType__MakeConscious = 70,
	EInteractionType__ArtificalPerspiration = 71,
	EInteractionType__PullTooth    = 72,
	EInteractionType__PatchWounds  = 73,
	EInteractionType__ImmobilizeLimbs = 74,
	EInteractionType__MendBones    = 75,
	EInteractionType__TreatSickness = 76,
	EInteractionType__PerformLocalAnesthesia = 77,
	EInteractionType__PerformGeneralAnesthesia = 78,
	EInteractionType__PerformSurgery = 79,
	EInteractionType__RevivePatient = 80,
	EInteractionType__InviteToSquad = 81,
	EInteractionType__RemoveFromSquad = 82,
	EInteractionType__LeaveSquad   = 83,
	EInteractionType__Urinate      = 84,
	EInteractionType__Defecate     = 85,
	EInteractionType__Vomit        = 86,
	EInteractionType__CheckTime    = 87,
	EInteractionType__Resuscitate  = 88,
	EInteractionType__BindHands    = 89,
	EInteractionType__TightenBinds = 90,
	EInteractionType__RemoveBinds  = 91,
	EInteractionType__LoosenBinds  = 92,
	EInteractionType__BreakBinds   = 93,
	EInteractionType__Bury         = 94,
	EInteractionType__UnBury       = 95,
	EInteractionType__Rest         = 96,
	EInteractionType__SitOnGround  = 97,
	EInteractionType__LayOnGround  = 98,
	EInteractionType__ExamineInventory = 99,
	EInteractionType__Loot         = 100,
	EInteractionType__ClaimKill    = 101,
	EInteractionType__GestureShowFinger = 102,
	EInteractionType__GestureStandSurrender = 103,
	EInteractionType__GestureWaveHi = 104,
	EInteractionType__GestureYouAreDead = 105,
	EInteractionType__GestureFY    = 106,
	EInteractionType__GesturePoint = 107,
	EInteractionType__GestureHeart = 108,
	EInteractionType__GestureBallpalm = 109,
	EInteractionType__GestureFacepalm = 110,
	EInteractionType__GestureFingerGun = 111,
	EInteractionType__GestureLaughing = 112,
	EInteractionType__GestureSmellWave = 113,
	EInteractionType__GestureSquat = 114,
	EInteractionType__GestureCharge = 115,
	EInteractionType__GestureFreeze = 116,
	EInteractionType__GestureGetDown = 117,
	EInteractionType__GestureGetUp = 118,
	EInteractionType__GestureHalt  = 119,
	EInteractionType__GestureHurryUp = 120,
	EInteractionType__GesturePointMe = 121,
	EInteractionType__GesturePointYou = 122,
	EInteractionType__GestureRally = 123,
	EInteractionType__GestureThumbsUp = 124,
	EInteractionType__GestureThumbsDown = 125,
	EInteractionType__GestureUnderstandNot = 126,
	EInteractionType__GestureUnderstandYes = 127,
	EInteractionType__PlayInstrument = 128,
	EInteractionType__Whistle      = 129,
	EInteractionType__MakeUnconscious = 130,
	EInteractionType__CutHair      = 131,
	EInteractionType__CutFacialHair = 132,
	EInteractionType__PacifyAnimal = 133,
	EInteractionType__TameAnimal   = 134,
	EInteractionType__LearnAnimal  = 135,
	EInteractionType__CommandAnimal = 136,
	EInteractionType__FeedAnimal   = 137,
	EInteractionType__Buy          = 138,
	EInteractionType__Maintain     = 139,
	EInteractionType__Lockpick     = 140,
	EInteractionType__RemoveLocks  = 141,
	EInteractionType__ForceUnlock  = 142,
	EInteractionType__AddUpgrade   = 143,
	EInteractionType__RadioTurnOn  = 144,
	EInteractionType__RadioTurnOff = 145,
	EInteractionType__RadioIncreaseVolume = 146,
	EInteractionType__RadioDecreaseVolume = 147,
	EInteractionType__RadioChangeRadioStation = 148,
	EInteractionType__StackAdd     = 149,
	EInteractionType__StackSplit   = 150,
	EInteractionType__RepairBaseElement = 151,
	EInteractionType__RepairBaseElementArea = 152,
	EInteractionType__RepairBaseElementsUnder25Percent = 153,
	EInteractionType__RepairBaseElementsUnder50Percent = 154,
	EInteractionType__RepairBaseElementsUnder75Percent = 155,
	EInteractionType__ClaimBase    = 156,
	EInteractionType__ShowBaseFlagInfluence = 157,
	EInteractionType__HideBaseFlagInfluence = 158,
	EInteractionType__StartBaseFlagOvertake = 159,
	EInteractionType__StopBaseFlagOvertake = 160,
	EInteractionType__UpgradeBaseElement = 161,
	EInteractionType__FlipPlaceable = 162,
	EInteractionType__OpenContainer = 163,
	EInteractionType__ChangeItemText = 164,
	EInteractionType__CommitItemText = 165,
	EInteractionType__TurnOn       = 166,
	EInteractionType__TurnOff      = 167,
	EInteractionType__IncreaseAngle = 168,
	EInteractionType__DecreaseAngle = 169,
	EInteractionType__IncreaseLightIntensity = 170,
	EInteractionType__DecreaseLightIntensity = 171,
	EInteractionType__AddProximityTrigger = 172,
	EInteractionType__AddLaserTrigger = 173,
	EInteractionType__AddTripwireTrigger = 174,
	EInteractionType__AddTimedTrigger = 175,
	EInteractionType__RemoveTrigger = 176,
	EInteractionType__ShowTrigger  = 177,
	EInteractionType__ArmTrap      = 178,
	EInteractionType__DisarmTrap   = 179,
	EInteractionType__BuryTrap     = 180,
	EInteractionType__UnburyTrap   = 181,
	EInteractionType__RefuelTrap   = 182,
	EInteractionType__ActivateKillbox = 183,
	EInteractionType__DrinkFromReplenishableResource = 184,
	EInteractionType__WashClothWithReplenishableResource = 185,
	EInteractionType__WashClothAllWithReplenishableResource = 186,
	EInteractionType__Spill        = 187,
	EInteractionType__CheckResourceType = 188,
	EInteractionType__SetPrivateAccess = 189,
	EInteractionType__SetPublicAccess = 190,
	EInteractionType__SetRank1Access = 191,
	EInteractionType__SetRank2Access = 192,
	EInteractionType__SetRank3Access = 193,
	EInteractionType__SetRank4Access = 194,
	EInteractionType__EInteractionType_MAX = 195,

};

// Enum ConZ.EItemExhausted
enum class ConZ_EItemExhausted : uint8_t
{
	EItemExhausted__DoNothing      = 0,
	EItemExhausted__Destroy        = 1,
	EItemExhausted__Uncraft        = 2,
	EItemExhausted__EItemExhausted_MAX = 3,

};

// Enum ConZ.EItemRarity
enum class ConZ_EItemRarity : uint8_t
{
	EItemRarity__ExtremelyRare     = 0,
	EItemRarity__VeryRare          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__Uncommon          = 3,
	EItemRarity__Common            = 4,
	EItemRarity__Abundant          = 5,
	EItemRarity__Count             = 6,
	EItemRarity__EItemRarity_MAX   = 7,

};

// Enum ConZ.EDoorStateFlags
enum class ConZ_EDoorStateFlags : uint8_t
{
	EDoorStateFlags__None          = 0,
	EDoorStateFlags__Open          = 1,
	EDoorStateFlags__Locked        = 2,
	EDoorStateFlags__Empty         = 3,
	EDoorStateFlags__ChangeSide    = 4,
	EDoorStateFlags__HasLock       = 5,
	EDoorStateFlags__EDoorStateFlags_MAX = 6,

};

// Enum ConZ.ELockDifficulty
enum class ConZ_ELockDifficulty : uint8_t
{
	ELockDifficulty__VeryEasy      = 0,
	ELockDifficulty__Basic         = 1,
	ELockDifficulty__Medium        = 2,
	ELockDifficulty__Advanced      = 3,
	ELockDifficulty__Num           = 4,
	ELockDifficulty__ELockDifficulty_MAX = 5,

};

// Enum ConZ.ERawByteStreamType
enum class ConZ_ERawByteStreamType : uint8_t
{
	ERawByteStreamType__Generic    = 0,
	ERawByteStreamType__AdminCommandSquadInfoDump = 1,
	ERawByteStreamType__AdminCommandLootDump = 2,
	ERawByteStreamType__ERawByteStreamType_MAX = 3,

};

// Enum ConZ.ERespawnOption
enum class ConZ_ERespawnOption : uint8_t
{
	ERespawnOption__Random         = 0,
	ERespawnOption__Sector         = 1,
	ERespawnOption__Shelter        = 2,
	ERespawnOption__Squad          = 3,
	ERespawnOption__ERespawnOption_MAX = 4,

};

// Enum ConZ.EConZSquadMemberRank
enum class ConZ_EConZSquadMemberRank : uint8_t
{
	EConZSquadMemberRank__None     = 0,
	EConZSquadMemberRank__Member   = 1,
	EConZSquadMemberRank__Enforcer = 2,
	EConZSquadMemberRank__Underboss = 3,
	EConZSquadMemberRank__Boss     = 4,
	EConZSquadMemberRank__EConZSquadMemberRank_MAX = 5,

};

// Enum ConZ.EChatType
enum class ConZ_EChatType : uint8_t
{
	EChatType__Default             = 0,
	EChatType__Local               = 1,
	EChatType__Global              = 2,
	EChatType__Squad               = 3,
	EChatType__ServerMessage       = 4,
	EChatType__Error               = 5,
	EChatType__EChatType_MAX       = 6,

};

// Enum ConZ.ESortOrder
enum class ConZ_ESortOrder : uint8_t
{
	ESortOrder__Ascending          = 0,
	ESortOrder__Descending         = 1,
	ESortOrder__ESortOrder_MAX     = 2,

};

// Enum ConZ.EEventsRankingStatsOrderByField
enum class ConZ_EEventsRankingStatsOrderByField : uint8_t
{
	EEventsRankingStatsOrderByField__FamePoints = 0,
	EEventsRankingStatsOrderByField__EventScore = 1,
	EEventsRankingStatsOrderByField__EventKills = 2,
	EEventsRankingStatsOrderByField__EventDeaths = 3,
	EEventsRankingStatsOrderByField__EEventsRankingStatsOrderByField_MAX = 4,

};

// Enum ConZ.ESkillLevel
enum class ConZ_ESkillLevel : uint8_t
{
	ESkillLevel__NoSkill           = 0,
	ESkillLevel__Basic             = 1,
	ESkillLevel__Medium            = 2,
	ESkillLevel__Advanced          = 3,
	ESkillLevel__AboveAdvanced     = 4,
	ESkillLevel__ESkillLevel_MAX   = 5,

};

// Enum ConZ.EAnimalAction
enum class ConZ_EAnimalAction : uint8_t
{
	EAnimalAction__None            = 0,
	EAnimalAction__Eat             = 1,
	EAnimalAction__Rest            = 2,
	EAnimalAction__Attack          = 3,
	EAnimalAction__Sit             = 4,
	EAnimalAction__Wait            = 5,
	EAnimalAction__Intimidate      = 6,
	EAnimalAction__Alert           = 7,
	EAnimalAction__Turn            = 8,
	EAnimalAction__EAnimalAction_MAX = 9,

};

// Enum ConZ.EWeaponMalfunction
enum class ConZ_EWeaponMalfunction : uint8_t
{
	EWeaponMalfunction__None       = 0,
	EWeaponMalfunction__BadRound   = 1,
	EWeaponMalfunction__StovePipe  = 2,
	EWeaponMalfunction__RoundNotLoaded = 3,
	EWeaponMalfunction__DoubleFeed = 4,
	EWeaponMalfunction__StuckBullet = 5,
	EWeaponMalfunction__ClipPartiallyEjected = 6,
	EWeaponMalfunction__Count      = 7,
	EWeaponMalfunction__EWeaponMalfunction_MAX = 8,

};

// Enum ConZ.EWeaponFiringMode
enum class ConZ_EWeaponFiringMode : uint8_t
{
	EWeaponFiringMode__Automatic   = 0,
	EWeaponFiringMode__SingleShot  = 1,
	EWeaponFiringMode__Burst       = 2,
	EWeaponFiringMode__Count       = 3,
	EWeaponFiringMode__EWeaponFiringMode_MAX = 4,

};

// Enum ConZ.EWeaponMalfunctionEvent
enum class ConZ_EWeaponMalfunctionEvent : uint8_t
{
	EWeaponMalfunctionEvent__RoundAdded = 0,
	EWeaponMalfunctionEvent__ChamberOpened = 1,
	EWeaponMalfunctionEvent__ChamberOpenedCasingEjected = 2,
	EWeaponMalfunctionEvent__ChamberOpenedRoundEjected = 3,
	EWeaponMalfunctionEvent__ChamberClosed = 4,
	EWeaponMalfunctionEvent__ChamberClosedRoundLoaded = 5,
	EWeaponMalfunctionEvent__AttachmentAdded = 6,
	EWeaponMalfunctionEvent__EWeaponMalfunctionEvent_MAX = 7,

};

// Enum ConZ.EWeaponType
enum class ConZ_EWeaponType : uint8_t
{
	EWeaponType__Rifle             = 0,
	EWeaponType__Handgun           = 1,
	EWeaponType__Bow               = 2,
	EWeaponType__Count             = 3,
	EWeaponType__EWeaponType_MAX   = 4,

};

// Enum ConZ.EWeaponActionNotifyType
enum class ConZ_EWeaponActionNotifyType : uint8_t
{
	EWeaponActionNotifyType__None  = 0,
	EWeaponActionNotifyType__ChamberOpened = 1,
	EWeaponActionNotifyType__ChamberClosed = 2,
	EWeaponActionNotifyType__ChamberOpenedClosed = 3,
	EWeaponActionNotifyType__BowInsertArrow = 4,
	EWeaponActionNotifyType__BowRemoveArrow = 5,
	EWeaponActionNotifyType__CompoundBowTuneDrawWeight = 6,
	EWeaponActionNotifyType__StaminaDrained = 7,
	EWeaponActionNotifyType__DropMagazine = 8,
	EWeaponActionNotifyType__ClearMalfunction = 9,
	EWeaponActionNotifyType__ChamberOpenedSync = 10,
	EWeaponActionNotifyType__ChamberClosedSync = 11,
	EWeaponActionNotifyType__ChamberOpenedClosedSync = 12,
	EWeaponActionNotifyType__ClearMalfunctionRoundNotLoaded = 13,
	EWeaponActionNotifyType__ShowEjectCasing = 14,
	EWeaponActionNotifyType__ShowEjectLiveRound = 15,
	EWeaponActionNotifyType__CrossbowCock = 16,
	EWeaponActionNotifyType__EWeaponActionNotifyType_MAX = 17,

};

// Enum ConZ.EWeaponBehaviourMode
enum class ConZ_EWeaponBehaviourMode : uint8_t
{
	EWeaponBehaviourMode__Default  = 0,
	EWeaponBehaviourMode__Inspect  = 1,
	EWeaponBehaviourMode__EWeaponBehaviourMode_MAX = 2,

};

// Enum ConZ.EPrisonerTempCategory
enum class ConZ_EPrisonerTempCategory : uint8_t
{
	EPrisonerTempCategory__Idle    = 0,
	EPrisonerTempCategory__Low     = 1,
	EPrisonerTempCategory__Medium  = 2,
	EPrisonerTempCategory__High    = 3,
	EPrisonerTempCategory__EPrisonerTempCategory_MAX = 4,

};

// Enum ConZ.EWeaponCategory
enum class ConZ_EWeaponCategory : uint8_t
{
	EWeaponCategory__ThrowingWeapons = 0,
	EWeaponCategory__RangedWeapons = 1,
	EWeaponCategory__Handguns      = 2,
	EWeaponCategory__SubmachineGuns = 3,
	EWeaponCategory__Rifles        = 4,
	EWeaponCategory__Shotguns      = 5,
	EWeaponCategory__AutomaticRifles = 6,
	EWeaponCategory__SniperRifles  = 7,
	EWeaponCategory__Bow           = 8,
	EWeaponCategory__Count         = 9,
	EWeaponCategory__EWeaponCategory_MAX = 10,

};

// Enum ConZ.EWeaponFiringStateType
enum class ConZ_EWeaponFiringStateType : uint8_t
{
	EWeaponFiringStateType__Automatic = 0,
	EWeaponFiringStateType__SemiAutomatic = 1,
	EWeaponFiringStateType__Manual = 2,
	EWeaponFiringStateType__EWeaponFiringStateType_MAX = 3,

};

// Enum ConZ.EBodyPart
enum class ConZ_EBodyPart : uint8_t
{
	EBodyPart__Unknown             = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Chest               = 2,
	EBodyPart__Abdomen             = 3,
	EBodyPart__ArmLeftLower        = 4,
	EBodyPart__ArmLeftUpper        = 5,
	EBodyPart__ArmRightLower       = 6,
	EBodyPart__ArmRightUpper       = 7,
	EBodyPart__LegLeftLower        = 8,
	EBodyPart__LegLeftUpper        = 9,
	EBodyPart__LegRightLower       = 10,
	EBodyPart__LegRightUpper       = 11,
	EBodyPart__Num                 = 12,
	EBodyPart__EBodyPart_MAX       = 13,

};

// Enum ConZ.EEnvironmentClass
enum class ConZ_EEnvironmentClass : uint8_t
{
	EEnvironmentClass__Indoor_Small = 0,
	EEnvironmentClass__Indoor_Medium = 1,
	EEnvironmentClass__Indoor_Large = 2,
	EEnvironmentClass__Outdoor_Large = 3,
	EEnvironmentClass__Count       = 4,
	EEnvironmentClass__EEnvironmentClass_MAX = 5,

};

// Enum ConZ.EGender
enum class ConZ_EGender : uint8_t
{
	EGender__Unspecified           = 0,
	EGender__Female                = 1,
	EGender__Male                  = 2,
	EGender__EGender_MAX           = 3,

};

// Enum ConZ.EDetectHitCollisionType
enum class ConZ_EDetectHitCollisionType : uint8_t
{
	EDetectHitCollisionType__None  = 0,
	EDetectHitCollisionType__Head  = 1,
	EDetectHitCollisionType__Body  = 2,
	EDetectHitCollisionType__Legs  = 3,
	EDetectHitCollisionType__EDetectHitCollisionType_MAX = 4,

};

// Enum ConZ.EDamageMagnitudeType
enum class ConZ_EDamageMagnitudeType : uint8_t
{
	EDamageMagnitudeType__Small    = 0,
	EDamageMagnitudeType__Medium   = 1,
	EDamageMagnitudeType__Large    = 2,
	EDamageMagnitudeType__Knockout = 3,
	EDamageMagnitudeType__EDamageMagnitudeType_MAX = 4,

};

// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ConZ_ECharacterImpactSourceSoundCategory : uint8_t
{
	ECharacterImpactSourceSoundCategory__Any = 0,
	ECharacterImpactSourceSoundCategory__Head_Bare = 1,
	ECharacterImpactSourceSoundCategory__Hands_Bare = 2,
	ECharacterImpactSourceSoundCategory__Hands_Gloved = 3,
	ECharacterImpactSourceSoundCategory__Legs_Bare = 4,
	ECharacterImpactSourceSoundCategory__Claws = 5,
	ECharacterImpactSourceSoundCategory__Jaws = 6,
	ECharacterImpactSourceSoundCategory__Blunt_Wood = 7,
	ECharacterImpactSourceSoundCategory__Blunt_Metal = 8,
	ECharacterImpactSourceSoundCategory__Sharp_Metal = 9,
	ECharacterImpactSourceSoundCategory__ECharacterImpactSourceSoundCategory_MAX = 10,

};

// Enum ConZ.EMeleeWeaponKnockoutCategory
enum class ConZ_EMeleeWeaponKnockoutCategory : uint8_t
{
	EMeleeWeaponKnockoutCategory__ZeroKnockout = 0,
	EMeleeWeaponKnockoutCategory__Fists = 1,
	EMeleeWeaponKnockoutCategory__WeakBlunt = 2,
	EMeleeWeaponKnockoutCategory__StrongBlunt = 3,
	EMeleeWeaponKnockoutCategory__EMeleeWeaponKnockoutCategory_MAX = 4,

};

// Enum ConZ.EAITeam
enum class ConZ_EAITeam : uint8_t
{
	EAITeam__Prisoner              = 0,
	EAITeam__Zombie                = 1,
	EAITeam__Animal                = 2,
	EAITeam__Mechanoid             = 3,
	EAITeam__Vehicle               = 4,
	EAITeam__Neutral               = 5,
	EAITeam__None                  = 6,
	EAITeam__EAITeam_MAX           = 7,

};

// Enum ConZ.EConZPxDominanceGroup
enum class ConZ_EConZPxDominanceGroup : uint8_t
{
	EConZPxDominanceGroup__Default = 0,
	EConZPxDominanceGroup__MediumPawns = 1,
	EConZPxDominanceGroup__LargePawns = 2,
	EConZPxDominanceGroup__EConZPxDominanceGroup_MAX = 3,

};

// Enum ConZ.EPrisonerMovementPace
enum class ConZ_EPrisonerMovementPace : uint8_t
{
	EPrisonerMovementPace__NotMoving = 0,
	EPrisonerMovementPace__Slow    = 1,
	EPrisonerMovementPace__Medium  = 2,
	EPrisonerMovementPace__Fast    = 3,
	EPrisonerMovementPace__Count   = 4,
	EPrisonerMovementPace__First   = 5,
	EPrisonerMovementPace__Last    = 6,
	EPrisonerMovementPace__EPrisonerMovementPace_MAX = 7,

};

// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class ConZ_EPrisonerBorderCrossingPenalty : uint8_t
{
	EPrisonerBorderCrossingPenalty__None = 0,
	EPrisonerBorderCrossingPenalty__Penalty1 = 1,
	EPrisonerBorderCrossingPenalty__Penalty2 = 2,
	EPrisonerBorderCrossingPenalty__Penalty3 = 3,
	EPrisonerBorderCrossingPenalty__Penalty4 = 4,
	EPrisonerBorderCrossingPenalty__DeadPenalty = 5,
	EPrisonerBorderCrossingPenalty__EPrisonerBorderCrossingPenalty_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConZ.AdminCommandArgumentDescription
// 0x0020
struct FAdminCommandArgumentDescription
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowCompletionValuesInHelpText;                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IK2H[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Completion;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitEffects
// 0x0038
struct FHitEffects
{
	float                                              SpeedThreshold;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8S8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ParticlesScale;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2HZ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CameraShake;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraShakeScale;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUYC[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// 0x0080
struct FMeleeHitDetectionMarker
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BOP[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  RootMotion;                                                // 0x0040(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              damageMultiplier;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelectionWeight;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJ0C[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RangedWeaponSkillParametersPerSkillLevel
// 0x0004
struct FRangedWeaponSkillParametersPerSkillLevel
{
	float                                              CrosshairHidingDuration;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ElementSnapMarker
// 0x0060
struct FElementSnapMarker
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Slack;                                                     // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ElementTypesMustMatch;                                     // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncreaseLevelOnSnap;                                       // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxLevelToSnap;                                            // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N34E[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RequiredElementSize;                                       // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RequiredElementSizeTolerance;                              // 0x004C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DestroySnappedElementWhenDestroyed;                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0WF[0x1];                                     // 0x0059(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           OutSocketTypes;                                            // 0x005A(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           InSocketTypes;                                             // 0x005C(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HGQV[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseBuildingSizeVariation
// 0x0018
struct FBaseBuildingSizeVariation
{
	class UClass*                                      Component;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR9U[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RepairableParams
// 0x0038
struct FRepairableParams
{
	struct FGameplayTagContainer                       RepairableTypes;                                           // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              HealthRepairedPerUse;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceAwardedPerHealthRepaired;                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRepairDuration;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRepairDuration;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldRepairZeroHealth;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESkillLevel                                   MinSkillLevelRequired;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP7J[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseElementDamageZone
// 0x0028
struct FBaseElementDamageZone
{
	struct FVector                                     BoundsMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoundsMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamagePerSecond;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDamagePerSecond;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSpeedForDamage;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedForDamage;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseElementDestructionZone
// 0x002C
struct FBaseElementDestructionZone
{
	struct FBox                                        Bounds;                                                    // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DamageToItems;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FallDamagePerMeter;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFallDamage;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MustElementBeAboveZone;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreElementsThatCantBePlacedOnOtherElements;             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FWIJ[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ReplenishableResourceDescription
// 0x0070
struct FReplenishableResourceDescription
{
	unsigned char                                      UnknownData_BE8Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Type;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InSocketTypes;                                             // 0x0010(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       OutSocketTypes;                                            // 0x0030(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              InitialAmount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAmount;                                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReplenishInterval;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReplenishAmount;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQQ0[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BruisePatch
// 0x0038
struct FBruisePatch
{
	ConZ_EBruiseLayer                                  Layer;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T4O2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<ConZ_EBruiseZone>                           AllowedZones;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OK0M[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Texture;                                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mute;                                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHB3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WindowMarkerModifier
// 0x0008
struct FWindowMarkerModifier
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsVaultable;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFortifiable;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GCS[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BuildingsArray
// 0x0010
struct FBuildingsArray
{
	TArray<class ABuilding*>                           _buildings;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FortificationData
// 0x0020
struct FFortificationData
{
	int                                                MarkerIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QSO[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FortificationClass;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                OwnerUserProfileId;                                        // 0x0010(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              health;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LX9[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BuildingData
// 0x0028
struct FBuildingData
{
	bool                                               IsCleared;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQEP[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWindowMarkerModifier>               WindowMarkerModifiers;                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortificationData>                  Fortifications;                                            // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DoorRepData
// 0x0038
struct FDoorRepData
{
	ConZ_EDoorStateFlags                               StateFlags;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7JM1[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDbIntegerId                                OwningUserProfileId;                                       // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Locks;                                                     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        RemainingNeutralizationAttemptsPerLock;                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      DoorAccessLevel;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PTX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BuildingsReplicationHelper
// 0x00E0
struct FBuildingsReplicationHelper
{
	TMap<struct FString, struct FBuildingData>         BuildingsData;                                             // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y9MK[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FDoorRepData>          DoorRepData;                                               // 0x0070(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1F1[0x20];                                    // 0x00C0(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BuryMaterialData
// 0x0028
struct FBuryMaterialData
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BreachActionParticles;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               BreachActionSound;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DumpActionParticles;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               DumpActionSound;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CamouflageSkillExperienceAwards
// 0x0004
struct FCamouflageSkillExperienceAwards
{
	float                                              BonusExperience;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
// 0x0010
struct FCamouflageSkillParametersPerSkillLevel
{
	float                                              Modifier;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bonus;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageAIPerceptionOuterRadius;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageAIPerceptionInnerRadius;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CargoDropSpawnerPreset
// 0x0010
struct FCargoDropSpawnerPreset
{
	class UClass*                                      preset;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceMultiplier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0ZOU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnCharacterAroundInfo
// 0x0050
struct FSpawnCharacterAroundInfo
{
	TArray<class UClass*>                              AvailablePawns;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinSpawnRadius;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpawnRadius;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfCharactersToSpawn;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreLimit;                                               // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S00H[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterImpactSounds
// 0x0008
struct FCharacterImpactSounds
{
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// 0x0028
struct FCharacterHeadImpactSoundData
{
	TArray<ConZ_ECharacterImpactSourceSoundCategory>   ImpactSourceCategories;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<ConZ_ECharacterHeadImpactSoundCategory>     ImpactTargetCategories;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      Sounds;                                                    // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// 0x0018
struct FCharacterHeadImpactSoundsData
{
	TArray<struct FCharacterHeadImpactSoundData>       SoundsData;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      FallbackSounds;                                            // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// 0x0028
struct FCharacterTorsoImpactSoundData
{
	TArray<ConZ_ECharacterImpactSourceSoundCategory>   ImpactSourceCategories;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<ConZ_ECharacterTorsoImpactSoundCategory>    ImpactTargetCategories;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      Sounds;                                                    // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// 0x0018
struct FCharacterTorsoImpactSoundsData
{
	TArray<struct FCharacterTorsoImpactSoundData>      SoundsData;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      FallbackSounds;                                            // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// 0x0028
struct FCharacterArmsImpactSoundData
{
	TArray<ConZ_ECharacterImpactSourceSoundCategory>   ImpactSourceCategories;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<ConZ_ECharacterArmsImpactSoundCategory>     ImpactTargetCategories;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      Sounds;                                                    // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// 0x0018
struct FCharacterArmsImpactSoundsData
{
	TArray<struct FCharacterArmsImpactSoundData>       SoundsData;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      FallbackSounds;                                            // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// 0x0028
struct FCharacterLegsImpactSoundData
{
	TArray<ConZ_ECharacterImpactSourceSoundCategory>   ImpactSourceCategories;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<ConZ_ECharacterLegsImpactSoundCategory>     ImpactTargetCategories;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      Sounds;                                                    // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// 0x0018
struct FCharacterLegsImpactSoundsData
{
	TArray<struct FCharacterLegsImpactSoundData>       SoundsData;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterImpactSounds                      FallbackSounds;                                            // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterSpawnerData2
// 0x0030
struct FCharacterSpawnerData2
{
	class UClass*                                      Character;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<PhysicsCore_EPhysicalSurface>>  AllowedSurfaces;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CharactersPerCell;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalCharacters;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinElevation;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxElevation;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_793D[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
// 0x0020
struct FCharacterSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideCharacterClasses;                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LZ8[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              CharacterClasses;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterSpawnerMarker
// 0x0050
struct FCharacterSpawnerMarker
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterSpawnerDataBasedOnPreset          Spawner;                                                   // 0x0030(0x0020) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnedPawnInfo
// 0x0014
struct FSpawnedPawnInfo
{
	unsigned char                                      UnknownData_FRYY[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PawnCharacterInfo
// 0x00B8
struct FPawnCharacterInfo
{
	class UClass*                                      SpawnablePawn;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              CharacterPreset;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              PoiCharacterIdleThresholdTimeMP;                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorCharacterIdleThresholdTimeMP;                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorCharacterIdleThresholdTimeMP;                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoiCharacterIdleThresholdTimeSP;                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorCharacterIdleThresholdTimeSP;                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorCharacterIdleThresholdTimeSP;                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinShortRangeSpawnDistance;                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxShortRangeSpawnDistance;                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLongRangeSpawnDistance;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLongRangeSpawnDistance;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PawnCullDuration;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinWildCharactersPerPawnGroup;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxWildCharactersPerPawnGroup;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxExteriorCharactersPerPawnGroup;                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxInteriorCharactersPerPawnGroup;                         // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PawnFieldOfView;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawningFieldOfView;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAllowedPawns;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAllowedWildPawns;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EU5[0x8];                                     // 0x0064(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxAllowedExteriorPawns;                                   // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9VB[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxAllowedInteriorPawns;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BOZ[0x8];                                     // 0x007C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExteriorPawnAmountModifier;                                // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUPN[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteriorPawnAmountModifier;                                // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_234J[0x8];                                     // 0x0094(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WildPawnAmountModifier;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22AJ[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpawnedPawnInfo>                    SpawnedPawns;                                              // 0x00A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0010
struct FCharacterSpawnerData
{
	TArray<class UClass*>                              CharacterClasses;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ChoppingIngredient
// 0x0028
struct FChoppingIngredient
{
	class UClass*                                      Item;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinQuantity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxQuantity;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsQuantityAffectedByTool;                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AKWX[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialDamage;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeDamage;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideAutoDestructTime;                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NE7Q[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoDestructTime;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R0N[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ChoppingTool2
// 0x0030
struct FChoppingTool2
{
	TArray<class UBaseItemTag*>                        ItemTags;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      ItemTagClass;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideChoppingTime;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CP5[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChoppingTimeMultiplier;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideIngredientsQuantity;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ED95[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IngredientsQuantityBonus;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PossibleChoppingTools
// 0x0010
struct FPossibleChoppingTools
{
	TArray<struct FChoppingTool2>                      PossibleTools;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExperienceDependentFloat
// 0x0008
struct FExperienceDependentFloat
{
	float                                              ValueWhenExperienceIsMinimal;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueWhenExperienceIsMaximal;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// 0x000C
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   ChoppingTime;                                              // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                IngredientsQuantityBonus;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ChoppingRecipe
// 0x0098
struct FChoppingRecipe
{
	struct FText                                       InteractionCaption;                                        // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ChopAudioEvent;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ENoiseLevel                                   NoiseLevel;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EPrisonerMontage                              ChoppingMontage;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SWW[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChoppingIngredient>                 Ingredients;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPossibleChoppingTools                      ToolRequiredToBeInRightHand;                               // 0x0038(0x0010) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FPossibleChoppingTools>              AdditionalToolsRequired;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      Skill;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperiencePointsAwarded;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChoppingParametersPerSkillLevel            NoSkillLevelData;                                          // 0x0064(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChoppingParametersPerSkillLevel            BasicLevelData;                                            // 0x0070(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChoppingParametersPerSkillLevel            MediumLevelData;                                           // 0x007C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChoppingParametersPerSkillLevel            AdvancedLevelData;                                         // 0x0088(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CM04[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InteractionStruct
// 0x0078
struct FInteractionStruct
{
	ConZ_EInteractionType                              interactionType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZST[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InteractionCaption;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q36V[0x60];                                    // 0x0018(0x0060) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BodyWeaponAnimation
// 0x0010
struct FBodyWeaponAnimation
{
	class UAnimMontage*                                Body;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Weapon;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ClearMalfunctionData
// 0x0018
struct FClearMalfunctionData
{
	bool                                               ShouldClearMalfunction;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEUN[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyWeaponAnimation                        Animations;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0058
struct FItemSpawningSettings
{
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXEN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelevantSpawnerGroupsUpdateInterval;                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerGroupsCullDistance;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExamineSpawnerExpirationTimeInMinutes;                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerTasksProcessingInterval;                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;                // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A7C[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RarityRatio;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerProbabilityMultiplier;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExamineSpawnerProbabilityMultiplier;                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemHealthMultiplierWhenUnderwater;                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SaveFileName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableSerialization;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreSpawnerProbability;                                  // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreItemLimit;                                           // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreItemZone;                                            // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreItemRarity;                                          // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DebugDrawItemSpawnTransforms;                              // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HB2A[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugDrawItemSpawnTransformsDuration;                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WECK[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PossibleItemSickness
// 0x0010
struct FPossibleItemSickness
{
	class UClass*                                      Sickness;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageProbability;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0098
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideItemClasses;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideItemSpawnTypes;                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideProbability;                                       // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideUseItemZone;                                       // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideUseItemRarity;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideUseItemSpawnGroup;                                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideInitialDamage;                                     // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideRandomizeDamage;                                   // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideInitialUsage;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideRandomizeUsage;                                    // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideInitialDirtiness;                                  // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideRandomizeDirtiness;                                // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMinAmmoCount;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxAmmoCount;                                      // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverridePossibleSicknesses;                                // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnLocation;            // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnRotation;            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverridePostItemsSpawnedActions;                           // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQRH[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ItemClasses;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                            // 0x0030(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemZone;                                               // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemRarity;                                             // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemSpawnGroup;                                         // 0x0056(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNJK[0x1];                                     // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialDamage;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeDamage;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialUsage;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeUsage;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialDirtiness;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeDirtiness;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinAmmoCount;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmoCount;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                        // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                    // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                    // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSC6[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PostItemsSpawnedActions;                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemSpawnerMarker
// 0x00D0
struct FItemSpawnerMarker
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                   // 0x0030(0x0098) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NQ3[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemLocation
// 0x000E
struct FItemLocation
{
	bool                                               Coastal;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Continantal;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mountain;                                                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Urban;                                                     // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rural;                                                     // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Industrial;                                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Police;                                                    // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MilitaryBasic;                                             // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MilitaryMedium;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MilitaryAdvanced;                                          // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MilitaryWW2;                                               // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Sport;                                                     // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Market;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               GasStation;                                                // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemSpawnerData
// 0x0078
struct FItemSpawnerData
{
	TArray<class UClass*>                              ItemClasses;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                            // 0x0010(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemZone;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemRarity;                                             // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseItemSpawnGroup;                                         // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3K2A[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialDamage;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeDamage;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialUsage;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeUsage;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialDirtiness;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomizeDirtiness;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinAmmoCount;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmoCount;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                    // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQHY[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PostItemsSpawnedActions;                                   // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AttachmentSocketDataItem
// 0x0018
struct FAttachmentSocketDataItem
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MountType;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MountedItem;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AttachmentSocket
// 0x0010
struct FAttachmentSocket
{
	TArray<struct FAttachmentSocketDataItem>           Items;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AttachmentSocketOffset
// 0x0020
struct FAttachmentSocketOffset
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemMotionNoise
// 0x0008
struct FItemMotionNoise
{
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemInventoryHandlingSounds
// 0x0008
struct FItemInventoryHandlingSounds
{
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VisibilityReplication
// 0x0008
struct FVisibilityReplication
{
	bool                                               Value;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANKC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RepHelper;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryStackData
// 0x0080
struct FInventoryStackData
{
	class UClass*                                      _stackClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _approximateCount;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _approximateMaxCount;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SDIO[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              _data;                                                     // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JUEI[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingPart
// 0x0030
struct FCraftingPart
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PDU[0x28];                                    // 0x0008(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WindowMarker
// 0x0050
struct FWindowMarker
{
	bool                                               IsVaultable;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFortifiable;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C0NY[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWindowFortificationsType*                   WindowFortificationsType;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AdditionalMarkerIndicesToModify;                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               DidIFailToCorrectlyPlaceWindowMarkers;                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL6R[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Vertex1;                                                   // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vertex2;                                                   // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FortificationOffset;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionBoxVertBias;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionBoxHorzBias;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GH1[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DialogueInfo
// 0x0028
struct FDialogueInfo
{
	class UAkAudioEvent*                               VoiceOver;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EDialogType                                   DialogType;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSV0[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WireDescription
// 0x000C
struct FWireDescription
{
	unsigned char                                      UnknownData_8LIN[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SplineDescription
// 0x0030
struct FSplineDescription
{
	class USplineComponent*                            SplineComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                      // 0x0008(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SplineStartConnector;                                      // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SplineEndConnector;                                        // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FKQ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LockData
// 0x0088
struct FLockData
{
	class UClass*                                      LockMinigameClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FailurePenaltyClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AreFamePointsRequired;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ELockDifficulty                               LockDifficulty;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7QL[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExperienceOnSuccess;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceOnFailure;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2RJX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LockedMessage;                                             // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       LockpickMessage;                                           // 0x0038(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 LockMeshOuter;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 LockMeshInner;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotatingTresholdAngle;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleTolerance;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PickBreakingMultiplier;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PickBreakingAtNumberOfFailedPushAttempts;                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfNeutralizationAttempts;                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumRemainingNeutralizationAttempts;                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LockHP;                                                    // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlovePickBreakingModifier;                                 // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q06B[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZSquadEmblemElement
// 0x0004
struct FConZSquadEmblemElement
{
	unsigned char                                      ShapeIndex;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PrimaryColorIndex;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SecondaryColorIndex;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TertiaryColorIndex;                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZSquadEmblem
// 0x0008
struct FConZSquadEmblem
{
	struct FConZSquadEmblemElement                     Background;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FConZSquadEmblemElement                     Symbol;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData_IUYV[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PackedLocation
// 0x0008
struct FPackedLocation
{
	unsigned char                                      UnknownData_T1Y9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// 0x0050
struct FPrisonerNearbyFoliageInstanceInfo
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                    // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPackedLocation                             PackedLocation;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformZeroOrigin;                                       // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFoliageAssetData*                           FoliageAssetData;                                          // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TFUZ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// 0x0010
struct FPrisonerNearbyFoliageInfo
{
	TArray<struct FPrisonerNearbyFoliageInstanceInfo>  InstancesInfo;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerGroundMovementParameters
// 0x000C
struct FPrisonerGroundMovementParameters
{
	float                                              MaxSpeed;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Deceleration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerWaterMovementParameters
// 0x000C
struct FPrisonerWaterMovementParameters
{
	float                                              MaxSpeed;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Deceleration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillTemplate
// 0x0038
struct FSkillTemplate
{
	ConZ_ESkillAttribute                               Attribute;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVT5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     ClassName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESkillLevel                                   Level;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IBYS[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Experience;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterTemplate
// 0x0088
struct FCharacterTemplate
{
	float                                              Strength;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Constitution;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Dexterity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intelligence;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Age;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EGender                                       Gender;                                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BAI[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppearanceIndex;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TattooIndex;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BreastSize;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenisSize;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamIndex;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DH4[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BirthDate;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ArrestDate;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkillTemplate>                      Skills;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      Item0;                                                     // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Item1;                                                     // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Item2;                                                     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfoReplicated
// 0x0010
struct FPrisonerNearbyFoliageInstanceInfoReplicated
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPackedLocation                             PackedLocation;                                            // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterActionAck
// 0x000C
struct FCharacterActionAck
{
	int                                                ActionId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubactionIndex;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ECharacterActionAckType                       Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ECharacterActionEndState                      EndState;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QSLW[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	ConZ_EWeaponCategory                               WeaponCategory;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x0027 (0x0028 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData_VYX4[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Target;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyRatio;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHeadShot;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsKill;                                                    // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasSniping;                                                // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EPrisonerStance                               Stance;                                                    // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EWindSpeedCategory                            WindSpeedCategory;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5XOW[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExperienceMultiplier;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRQS[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ProjectilePointDamageEvent
// 0x0050 (0x0100 - 0x00B0)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                           // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanCauseHeadExplosion;                                     // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKZQ[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyLossPerClothesLayer[0x7];                            // 0x00B4(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      KillerLocation;                                            // 0x00D0(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      VictimLocation;                                            // 0x00DC(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      projectileClass;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WeaponClass;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFirstHit;                                                // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCWN[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	unsigned char                                      UnknownData_VLF7[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryPositionDataRepHelper
// 0x0018
struct FInventoryPositionDataRepHelper
{
	class UClass*                                      _dataClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInventoryPositionData*                      _positionData;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     _owner;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseElementIdentifier
// 0x0020
struct FConZBaseElementIdentifier
{
	int64_t                                            BaseId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ElementID;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ART[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ProjectileArrowData
// 0x0020
struct FProjectileArrowData
{
	class UClass*                                      AmmunitionArrowClass;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemsHealth;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessFactor;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlightRotationCorrectionSpeed;                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeviationDegrees;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPartOfEvent;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BARF[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMountReplication
// 0x0010
struct FPrisonerMountReplication
{
	class UObject*                                     MountedSlot;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EPrisonerMountFlags                           _mountFlags;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VIJM[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerTurnMontageDescription
// 0x0030
struct FPrisonerTurnMontageDescription
{
	class UAnimSequenceBase*                           AnimationL90;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AnimationR90;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TurnAngleCurveName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTriggerTime;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// 0x0088
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenNotMoving;                       // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenWalking;                         // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenJogging;                         // 0x0010(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenRunning;                         // 0x0018(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenFalling;                         // 0x0020(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenNotMoving;                     // 0x0028(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenWalking;                       // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenJogging;                       // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenRunning;                       // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenFalling;                       // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenNotMoving;                         // 0x0050(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenWalking;                           // 0x0058(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenJogging;                           // 0x0060(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenRunning;                           // 0x0068(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenFalling;                           // 0x0070(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                BashMeleeAttackType;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WeaponBayonetMeleeAttackType;                              // 0x0080(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.UnlockLocation
// 0x0030
struct FUnlockLocation
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TriggeredEventData
// 0x0010
struct FTriggeredEventData
{
	unsigned char                                      UnknownData_WRXS[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.QuickAccessData
// 0x0018
struct FQuickAccessData
{
	class AItem*                                       Item;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsThrowingMode;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L58G[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ClothesPartSet
// 0x0050
struct FClothesPartSet
{
	unsigned char                                      ClothesParts[0x50];                                        // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// 0x0028
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer                       ItemSpawnTypes;                                            // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                MaxNumberOfOccurrences;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4WK[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExamineItemSpawnerData
// 0x00C0
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxQuantity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowDuplicates;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2VW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                   // 0x0010(0x0098) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                               // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ExpirationTime;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUFR[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VirtualizedItemDescription
// 0x0008
struct FVirtualizedItemDescription
{
	TWeakObjectPtr<class AItem>                        Item;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RoomDefinition
// 0x0020
struct FRoomDefinition
{
	class ADoor*                                       RoomDoor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        Locker;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKillBoxC4SpawnPoint*                        C4;                                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSA4[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnerConfiguration
// 0x0010
struct FSpawnerConfiguration
{
	class UClass*                                      Spawner;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumItemsCount;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumItemsCount;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RoomDifficultyConfiguration
// 0x0038
struct FRoomDifficultyConfiguration
{
	TArray<class UClass*>                              Locks;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Zappers;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               IsC4Present;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6K8E[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpawnerConfiguration>               PossibleSpawners;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LadderMarker
// 0x00A0
struct FLadderMarker
{
	struct FTransform                                  FirstStep;                                                 // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LastStep;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ZF5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Edge;                                                      // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CapsuleBias;                                               // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepHeight;                                                // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepWidth;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDetectionExtraAboveLastStep;                            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDetectionExtraBelowFirstStep;                           // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDetectionExtraOnTheSides;                               // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasEdge;                                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNarrow;                                                  // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          PhysicalSurfaceForSounds;                                  // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2K2[0xD];                                     // 0x0093(0x000D) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LandingDamageEvent
// 0x0010 (0x00C0 - 0x00B0)
struct FLandingDamageEvent : public FPointDamageEvent
{
	struct FVector                                     ImpactVelocity;                                            // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GNSI[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// 0x0010
struct FLandingEffectDataPerSeverity
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpawnParticlesInDirectionOfVelocity;                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0O5Z[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// 0x0030
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity               Light;                                                     // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLandingEffectDataPerSeverity               Medium;                                                    // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLandingEffectDataPerSeverity               Heavy;                                                     // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MedicalRecord
// 0x0028
struct FMedicalRecord
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSCB[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APrisoner*                                   Patient;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CheckSuccessful;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5L3[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<uint32_t>                                   Diagnoses;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeAction
// 0x0020
struct FMeleeAction
{
	ConZ_EMeleeActionType                              ActionType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LWQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDelay;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockDuration;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrientToTargetSpeedFactor;                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationModifier;                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeDodge
// 0x0010
struct FMeleeDodge
{
	unsigned char                                      UnknownData_5WUJ[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeAttack
// 0x0020
struct FMeleeAttack
{
	unsigned char                                      UnknownData_L7YR[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0038
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageAbsorptionMultiplier;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sharpness;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PuppetDamageMultiplier;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockoutChance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EMeleeWeaponKnockoutCategory                  KnockoutCategory;                                          // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4T9[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DamageMagnitudeChange;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ECharacterImpactSourceSoundCategory           ImpactSoundCategory;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QA9Z[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProjectileImpactEffects*                    ImpactEffects;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                HitReact;                                                  // 0x0028(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageToStructuresMultiplier;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQDS[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleePointDamageEvent
// 0x0068 (0x0118 - 0x00B0)
struct FMeleePointDamageEvent : public FPointDamageEvent
{
	struct FMeleeWeaponDesc                            WeaponDesc;                                                // 0x00B0(0x0038) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                AttackCapsuleAttachment;                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EDetectHitCollisionType                       DetectHitCollisionType;                                    // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K6AK[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AttackMontage;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EDamageMagnitudeType                          DamageMagnitudeType;                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F1MI[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KnockoutChance;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EHitDirectionType                             HitDirectionType;                                          // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_26VM[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AItem*                                       Weapon;                                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// 0x00D0
struct FCheckMeleeAttackCapsuleCollisionData
{
	unsigned char                                      UnknownData_T7MT[0xD0];                                    // 0x0000(0x00D0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AttackedByMeleeData
// 0x0018
struct FAttackedByMeleeData
{
	TWeakObjectPtr<class AActor>                       attacker;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeSkillExperienceAwards
// 0x0010
struct FMeleeSkillExperienceAwards
{
	float                                              Hit;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Kill;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComboHitMultiplier;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkillLevelBonus;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// 0x0098
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StartDelay;                                                // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StartDelayPenaltyPerStrengthShortage;                      // 0x0008(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   AnimationPlayRateModifier;                                 // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   AnimationPlayRatePenaltyPerStrengthShortage;               // 0x0018(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   RegainControlDurationModifier;                             // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   DamageModifier;                                            // 0x0028(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   staminaDrain;                                              // 0x0030(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaDrainPenaltyPerStrengthShortage;                    // 0x0038(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   staminaRecoveryDelay;                                      // 0x0040(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaRecoveryDuration;                                   // 0x0048(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMin;                                 // 0x0050(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMax;                                 // 0x0058(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowLinearity;                           // 0x0060(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StartDelayWhenExhausted;                                   // 0x0068(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   AnimationPlayRateModifierWhenExhausted;                    // 0x0070(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   RegainControlDurationModifierWhenExhausted;                // 0x0078(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   DamageModifierWhenExhausted;                               // 0x0080(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaMultiplierPerExcessGearWeight;                      // 0x0088(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   ComboCooldownDuration;                                     // 0x0090(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeSkillAttack
// 0x0078
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                               // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IgnoreReason;                                              // 0x0020(0x0020) (Edit, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageFP;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              PitchRange;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinStamina;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrientToTargetSpeedFactor;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaDrainMultiplier;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBeUsedAsInitialAttack;                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                     // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Solo;                                                      // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mute;                                                      // 0x0073(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAlwaysCandidate;                                         // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQY6[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeSkillDodge
// 0x0018
struct FMeleeSkillDodge
{
	ConZ_EDodgeDirectionType                           DodgeDirectionType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L73C[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                Montage;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYHQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeSkillAnimations
// 0x0098
struct FMeleeSkillAnimations
{
	class UAnimSequenceBase*                           PrimaryIdleAnimationTP;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           PrimaryIdleAnimationFP;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           TiredIdleAnimationTP;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           TiredIdleAnimationFP;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           WalkingIdleAnimationTP;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           WalkingIdleAnimationFP;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           BlockIdleAnimationTP;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           BlockIdleAnimationFP;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 AimOffsetBlendSpaceTP;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 AimOffsetBlendSpaceFP;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                EnterCombatModeMontage;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LeaveCombatModeMontage;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequenceBase*>                   InactivityIdleAnimations;                                  // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              IdleToBlockBlendDuration;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockToIdleBlendDuration;                                  // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMeleeSkillAttack>                   Attacks;                                                   // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMeleeSkillDodge>                    Dodges;                                                    // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshHitZone
// 0x001C
struct FMeshHitZone
{
	unsigned char                                      UnknownData_D6AE[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshInstancesMap
// 0x0050
struct FMeshInstancesMap
{
	unsigned char                                      UnknownData_TJY1[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshInstances
// 0x0050
struct FMeshInstances
{
	unsigned char                                      UnknownData_Q8B5[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshInstance
// 0x0038
struct FMeshInstance
{
	unsigned char                                      UnknownData_WCOI[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshInstanceId
// 0x0008
struct FMeshInstanceId
{
	unsigned char                                      UnknownData_VXG2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshItemData
// 0x0058
struct FMeshItemData
{
	unsigned char                                      UnknownData_FQDD[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MissionItemInfo
// 0x0038
struct FMissionItemInfo
{
	unsigned char                                      ItemLocation[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      ItemClass;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldRemove;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BYW[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeToDestroy;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MissionLevelInfo
// 0x0010
struct FMissionLevelInfo
{
	unsigned char                                      UnknownData_VCBV[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ActiveManagers
// 0x0010
struct FActiveManagers
{
	TArray<class AMissionManager*>                     MissionManagers;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ObjectiveData
// 0x0030
struct FObjectiveData
{
	struct FString                                     ObjectiveAssetId;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EObjectiveState                               ObjectiveState;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WITP[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0018(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MissionReward
// 0x0018
struct FMissionReward
{
	TArray<class UClass*>                              RewardItems;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              RewardFamePoints;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RewardReceived;                                            // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DZR[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MissionData
// 0x00B8
struct FMissionData
{
	struct FText                                       MissionName;                                               // 0x0000(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	struct FText                                       MissionCategory;                                           // 0x0018(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	struct FText                                       MissionDescription;                                        // 0x0030(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	ConZ_EMissionType                                  MissionType;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZKB[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MissionOrdinalNumber;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EMissionState                                 MissionState;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EFaction                                      MissionFaction;                                            // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5BZ[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MissionStartingLocations[0x10];                            // 0x0052(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                IntendedNumberOfPlayers;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MissionCooldown;                                           // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_96XN[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MissionAssetId;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FObjectiveData>                      ObjectivesData;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FMissionReward                              MissionReward;                                             // 0x0098(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MissionBannerImage;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ObjectiveDataGroup
// 0x0018
struct FObjectiveDataGroup
{
	unsigned char                                      RewardItems[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	float                                              RewardFamePoints;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4ZF[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ModularTooltipSectionData
// 0x0028
struct FModularTooltipSectionData
{
	unsigned char                                      UnknownData_UOIM[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UModularTooltipElementData*>          Elements;                                                  // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MountSlotEntryPoint
// 0x0090
struct FMountSlotEntryPoint
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U1BJ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  EntryTransform;                                            // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TransformSnapRadius;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DoorIndex;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VehicleOpenDoorMontage;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VehicleCloseDoorMontage;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VehicleMountSlotMontage;                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VehicleUnmountSlotMontage;                                 // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrisonerOpenDoorMontage;                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrisonerCloseDoorMontage;                                  // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrisonerMountSlotMontage;                                  // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrisonerUnmountSlotMontage;                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPRZ[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.NotificationDescriptionReplicationHelper
// 0x0018
struct FNotificationDescriptionReplicationHelper
{
	unsigned char                                      UnknownData_I7MM[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ObjectiveTrackableData
// 0x0008
struct FObjectiveTrackableData
{
	unsigned char                                      UnknownData_Q07S[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData_7C5Z[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x0010
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LandingImpactVelocityModifier;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoiseLoudnessModifier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FootstepEnhancerChance;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
// 0x0020
struct FPhysicalSurfaceVehicleEffectsData
{
	class UParticleSystem*                             ParticleTrail;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleTrailSlipModifier;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleTrailDestructionDelay;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleWave;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleWaveSlipModifier;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleWaveDestructionDelay;                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PhysicalSurfaceEffectsData
// 0x0020
struct FPhysicalSurfaceEffectsData
{
	struct FPhysicalSurfaceVehicleEffectsData          Vehicle;                                                   // 0x0000(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ReplicatedState
// 0x0028
struct FReplicatedState
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlacedLocation;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsPlacementAllowed;                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PL2[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlaceableActorStateReplicationHelper
// 0x0008
struct FPlaceableActorStateReplicationHelper
{
	unsigned char                                      UnknownData_TI9Z[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TilesData
// 0x0018
struct FTilesData
{
	class UHierarchicalInstancedStaticMeshComponent*   HISMComponentMain;                                         // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHierarchicalInstancedStaticMeshComponent*   HISMComponentOutline;                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHierarchicalInstancedStaticMeshComponent*   HISMComponentDepth;                                        // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SizeVariatedTilesData
// 0x0028 (0x0040 - 0x0018)
struct FSizeVariatedTilesData : public FTilesData
{
	unsigned char                                      UnknownData_214E[0x28];                                    // 0x0018(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0050
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              SpecificItems;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<ConZ_ECraftingType>                         TagsCraftingTypes;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<ConZ_ECraftingType>                         SpecificItemsCraftingTypes;                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ConZ_EPlaceableIngredientType                      Type;                                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OEAB[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Required;                                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Satisfied;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8FZ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlayerRpcChannelServerDataResponseNetSerializer
// 0x0008
struct FPlayerRpcChannelServerDataResponseNetSerializer
{
	unsigned char                                      UnknownData_QGKF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlayerRpcChannelServerDataRequestNetSerializer
// 0x0008
struct FPlayerRpcChannelServerDataRequestNetSerializer
{
	unsigned char                                      UnknownData_FGJM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerFPWeaponFOVSettings
// 0x0010
struct FPrisonerFPWeaponFOVSettings
{
	unsigned char                                      UnknownData_M4R7[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InstrumentEvent
// 0x0010
struct FInstrumentEvent
{
	unsigned char                                      UnknownData_XRC2[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerAppearanceData
// 0x0014
struct FPrisonerAppearanceData
{
	ConZ_EHumanRace                                    Race;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X14K[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                MeshSet;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MaterialSet;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerTattooMaterialSet
// 0x0020
struct FPrisonerTattooMaterialSet
{
	bool                                               DeluxeOnly;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EI7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  HeadTattoo;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  TorsoTattoo;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  LimbTattoo;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerAppearanceMaterialSet
// 0x0048
struct FPrisonerAppearanceMaterialSet
{
	class UMaterialInstance*                           HairMaterial;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           FacialHairMaterial;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           HeadMaterial;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           TorsoMaterial;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           ArmsMaterial;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           HandsMaterial;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           LegsMaterial;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           FeetMaterial;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           PenisMaterial;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerAppearanceMeshSet
// 0x0048
struct FPrisonerAppearanceMeshSet
{
	class USkeletalMesh*                               HairMesh;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               FacialHairMesh;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               HeadMesh;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               TorsoMesh;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               ArmsMesh;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               HandsMesh;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               LegsMesh;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               FeetMesh;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               PenisMesh;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// 0x0048
struct FWindowClimbingAnimationInfo
{
	struct FVector                                     AnchorOffset;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIYS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           AnchoringAnimation;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchoringAnimationTime;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchoringDuration;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ClimbingMontage;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinWindowWidth;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinWindowHeight;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSpacingToLeftWindowEdge;                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSpacingToRightWindowEdge;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinWindowDistanceToFloor;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxWindowDistanceToFloor;                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              staminaDrain;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LP0[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WindowInfo
// 0x00D0
struct FWindowInfo
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformInverse;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Anchor;                                                    // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZ18[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWindowClimbingAnimationInfo                AnimationInfo;                                             // 0x0078(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AnimationIndex;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5QZI[0xC];                                     // 0x00C4(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WindowDetectionParams
// 0x0038
struct FWindowDetectionParams
{
	struct FVector                                     CharacterHeadLocation;                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CharacterFeetLocation;                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CharacterForwardVector;                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHorzDistanceToWindow;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCharacterToWindowAngle;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorzHitDetectionBias;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDetectionBiasBelowWindow;                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitDetectionBiasAboveWindow;                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LadderInfoRepData
// 0x0050
struct FLadderInfoRepData
{
	struct FTransform                                  LadderTransform;                                           // 0x0000(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CapsuleBias;                                               // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RootBoneOffset;                                            // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepHeight;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          PhysicalSurfaceForSounds;                                  // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NumberOfSteps;                                             // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZW0[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LadderInfo
// 0x00B0
struct FLadderInfo
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformInverse;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Edge;                                                      // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CapsuleBias;                                               // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepHeight;                                                // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepWidth;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasEdge;                                                   // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNarrow;                                                  // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          PhysicalSurfaceForSounds;                                  // 0x00A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFCE[0x1];                                     // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfSteps;                                             // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitStepIndex;                                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LadderDetectionParams
// 0x0020
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RayDirection;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHorzDistanceToLadder;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRayToLadderAngle;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// 0x0040
struct FPrisonerClimbAnimationInfo
{
	float                                              MinEdgeHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxEdgeHeight;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultDistance;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxVaultLandHeightError;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AnchorOffset;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_52JM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           AnchoringAnimation;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchoringAnimationTime;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchoringDuration;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ClimbingMontage;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              staminaDrain;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresEmptyLHand;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresEmptyRHand;                                        // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FPG[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ClimbableObstacleInfo
// 0x0080
struct FClimbableObstacleInfo
{
	struct FVector                                     EdgeLocation;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgeHeight;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HWallNormal;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VWallNormal;                                               // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CapsuleLocationAtAnchor;                                   // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CapsuleRotationAtAnchor;                                   // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerClimbAnimationInfo                 AnimationInfo;                                             // 0x0040(0x0040) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// 0x0010
struct FPrisonerInitialSkillInfo
{
	class USkill*                                      Skill;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESkillLevel                                   InitialLevel;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3Z8[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialExperiencePoints;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// 0x0054
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                      // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerWaterMovementParameters            Medium;                                                    // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerWaterMovementParameters            Fast;                                                      // 0x0018(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerWaterMovementParameters            DivingSlow;                                                // 0x0024(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerWaterMovementParameters            DivingMedium;                                              // 0x0030(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// 0x000C
struct FPrisonerMovementSettings_Air
{
	float                                              JumpZVelocity;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMinimal;             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMaximal;             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// 0x0030
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                   // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                               // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                              // 0x0018(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                 // 0x0024(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// 0x0024
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters           Default;                                                   // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                               // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                              // 0x0018(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// 0x000C
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters           Default;                                                   // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// 0x00B4
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                   // 0x0000(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping;                                               // 0x0030(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                   // 0x0060(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping;                                                // 0x0084(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                   // 0x00A8(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                   // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                              // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                 // 0x0018(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// 0x006C
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                   // 0x0000(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                             // 0x0024(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping;                                               // 0x0048(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                   // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                              // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                 // 0x0018(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;                                                   // 0x0000(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// 0x016C
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                  // 0x0000(0x00B4) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                 // 0x00B4(0x006C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                     // 0x0120(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                  // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                  // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;              // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;              // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;              // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;              // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;          // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;          // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationMultiplierWhenImmersedInWater;                 // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecelerationMultiplierWhenImmersedInWater;                 // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerResponseIdleCompatibleAnimationSets
// 0x0005
struct FPrisonerResponseIdleCompatibleAnimationSets
{
	bool                                               Base;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rifle;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RifleRelaxed;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UnarmedCombat;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Handgun;                                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerResponseIdleDescription
// 0x0028
struct FPrisonerResponseIdleDescription
{
	TArray<class UAnimMontage*>                        Montages;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              PreMontageDelay;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostMontageDelay;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBeUsedWhenItemIsInHands;                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrisonerResponseIdleCompatibleAnimationSets CombatibleAnimationsSets;                                  // 0x001D(0x0005) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EYY[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// 0x001C
struct FPrisonerRestingDataAutonomous
{
	bool                                               HasDisabledMovement;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCX5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         Location;                                                  // 0x0004(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         EulerRotation;                                             // 0x0010(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerRestingData
// 0x0010
struct FPrisonerRestingData
{
	ConZ_EPrisonerRestingMode                          Mode;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRestingOnGround;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasChangedTransform;                                       // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDisabledCapsuleCollision;                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimSequenceBase>            RestingAnimation;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeetIKOffset;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerRestingParameters
// 0x0060
struct FPrisonerRestingParameters
{
	unsigned char                                      UnknownData_JK47[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ThrowingItemData
// 0x0010
struct FThrowingItemData
{
	unsigned char                                      UnknownData_ZB7Q[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// 0x0018
struct FPrisonerDistanceTravelledContext
{
	unsigned char                                      UnknownData_B4LO[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData_SQ15[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillExperienceChange
// 0x0008
struct FSkillExperienceChange
{
	float                                              ExperienceChange;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// 0x0020
struct FActiveMovingThroughFoliageSounds
{
	unsigned char                                      UnknownData_XLQN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               StartAudioEvent;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopAudioEvent;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QIKR[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.LocalOffsetCurves
// 0x0020
struct FLocalOffsetCurves
{
	class UCurveLinearColor*                           YawIdle;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           YawMoving;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           PitchIdle;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           PitchMoving;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerViewInfo
// 0x0020 (0x0600 - 0x05E0)
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float                                              WeaponFOV;                                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WeaponFoveationOffset;                                     // 0x05E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinViewYaw;                                                // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxViewYaw;                                                // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinViewPitch;                                              // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxViewPitch;                                              // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ProjectileData
// 0x0058
struct FProjectileData
{
	struct FText                                       Caption;                                                   // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              Caliber;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MuzzleVelocity;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BallisticCoefficient;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EBallisticDragModel                           BallisticDragModel;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4WS[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialDamage;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenetrationFactor;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlancingAngle;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowGlanceOrForceBounce;                                  // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2THR[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BounceAngle;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorPiercingFactor;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorDamageMultiplier;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanCauseHeadExplosion;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SF4O[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ProjectileRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FProjectileRadialDamageEvent : public FRadialDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                             // 0x0040(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVS7[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   Decal;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FiredShotDescriptionRep
// 0x0004
struct FFiredShotDescriptionRep
{
	uint32_t                                           PackedData;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RadioProgramData
// 0x0018
struct FRadioProgramData
{
	class UClass*                                      ProgramClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioProgram*                               Program;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chance;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQU7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EngineeringEventData
// 0x0008
struct FEngineeringEventData
{
	unsigned char                                      UnknownData_WP9K[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RepairToolItemParams
// 0x0040
struct FRepairToolItemParams
{
	struct FGameplayTagContainer                       RepairableItemTypes;                                       // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StartRepairSound;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopRepairSound;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                StartRepairMontage;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                StopRepairMontage;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ReplenishableResource
// 0x0088
struct FReplenishableResource
{
	unsigned char                                      UnknownData_PCGX[0x88];                                    // 0x0000(0x0088) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ReplenishableResourceSlotDescription
// 0x001C
struct FReplenishableResourceSlotDescription
{
	unsigned char                                      UnknownData_JWGJ[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RequestSpamFilter
// 0x0014
struct FRequestSpamFilter
{
	unsigned char                                      UnknownData_T0EW[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ResourceNetworkGUID
// 0x0004
struct FResourceNetworkGUID
{
	unsigned char                                      UnknownData_7CDC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AreaResourceLockNetwork
// 0x0020
struct FAreaResourceLockNetwork
{
	struct FResourceNetworkGUID                        LockOwnerGUID;                                             // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        Area;                                                      // 0x0004(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ActorResourceLockNetwork
// 0x000C
struct FActorResourceLockNetwork
{
	struct FResourceNetworkGUID                        LockOwnerGUID;                                             // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceNetworkGUID                        ResourceGUID;                                              // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResourceId;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshInstancesRestoreOptions
// 0x0004
struct FMeshInstancesRestoreOptions
{
	float                                              RestoreInterval;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RestorableMeshInstanceId
// 0x0018
struct FRestorableMeshInstanceId
{
	unsigned char                                      UnknownData_MO5N[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                        // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                              // 0x0008(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SafeZoneConfigParams
// 0x0028
struct FSafeZoneConfigParams
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 BoxingDamageHandlingMethod;                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 MeleeWeaponDamageHandlingMethod;                           // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 ThrowingDamageHandlingMethod;                              // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 ProjectileDamageHandlingMethod;                            // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 ExplosiveDamageHandlingMethod;                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 DamageToBasesHandlingMethod;                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 DamageToVehiclesHandlingMethod;                            // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 PuppetDamageHandlingMethod;                                // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 VehicleDamageHandlingMethod;                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 PlayerLockpickingHandlingMethod;                           // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 WorldLockpickingHandlingMethod;                            // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L717[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SafeZoneParameters
// 0x0030
struct FSafeZoneParameters
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Location;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadiusSquared;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Group;                                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 DamageHandlingMethod[0xD];                                 // 0x0020(0x000D) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 PlayerLockpickingHandlingMethod;                           // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESafeZoneDamageHandlingMethod                 WorldLockpickingHandlingMethod;                            // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AOAW[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SearchPerItemData
// 0x0028
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>                   NeededMaterials;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinQuantity;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxQuantity;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KB39[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BodyPartData
// 0x0014
struct FBodyPartData
{
	float                                              ProjectileDamageMultiplierPerBodyPart;                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplosionDamageMultiplierPerBodyPart;                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BodyPartMaxHealth;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8Q9[0x8];                                     // 0x000C(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SentryPatrolPoint
// 0x0020
struct FSentryPatrolPoint
{
	struct FVector                                     LocationRelativeToSentry;                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HCQV[0x14];                                    // 0x000C(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ServerUsedItem
// 0x0018
struct FServerUsedItem
{
	class AItem*                                       Item;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                quantity;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                usage;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              usageWeight;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ECraftingType                                 CraftingType;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpawnHere;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GI4B[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ServerCraftableItem
// 0x0088
struct FServerCraftableItem
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LAFV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerUsedItem>                     MandatoryItems;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FServerUsedItem>                     MandatoryParts;                                            // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FServerUsedItem>                     OptionalItems;                                             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FServerUsedItem>                     OptionalParts;                                             // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FServerUsedItem>                     ToolsNeeded;                                               // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CustomCraftingMontage;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StartCraftingAudioEvent;                                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopCraftingAudioEvent;                                    // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9V1G[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ServerInfo
// 0x0050
struct FServerInfo
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PVX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PlayerCount;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxPlayerCount;                                            // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PasswordProtected;                                         // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7ZL[0x1];                                     // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ping;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InGameTime;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JX4D[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Version;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsComplete;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MX7U[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MultiplierByClass
// 0x0010
struct FMultiplierByClass
{
	class UClass*                                      ObjectClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EDJN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DamageMultipliers
// 0x0018
struct FDamageMultipliers
{
	class UClass*                                      DamageCauserClass;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMultiplierByClass>                  DamageMultipliers;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E16L[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventWeaponClearedMalfunction
// 0x0001 (0x0002 - 0x0001)
struct FSkillEventWeaponClearedMalfunction : public FSkillEventWeapon
{
	ConZ_EWeaponMalfunction                            malfunction;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// 0x0008
struct FSkillEventThrownItemHitTarget
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventItemThrown
// 0x0001
struct FSkillEventItemThrown
{
	unsigned char                                      UnknownData_2C4E[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventWeaponReload
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponReload : public FSkillEventWeapon
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SkillRecord
// 0x000C
struct FSkillRecord
{
	ConZ_ESkillReplicationID                           ID;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99W8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExperiencePoints;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESkillLevel                                   Level;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             counter;                                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BCS0[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ParticleCollisionDecalData
// 0x0018
struct FParticleCollisionDecalData
{
	class UMaterialInterface*                          Decal;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSize;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSize;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLifetime;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLifetime;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// 0x0001
struct FCompassSkillParametersPerSkillLevel
{
	unsigned char                                      CompassSkillLevel;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0040
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           RightFist;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightHandToIdleBlendAlpha;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WCH1[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           LeftHand;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           LeftFist;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           LeftFistInCombatMode;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftHandToIdleBlendAlpha;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HF2V[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ObjectiveItem
// 0x0010
struct FObjectiveItem
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_35Q4[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TeamDeathmatchParameters
// 0x0014
struct FTeamDeathmatchParameters
{
	int                                                RoundScoreLimit;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionInterval;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionDuration;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionStep;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BarrierHeatUpDuration;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TeleportUserDataReplicator
// 0x0008
struct FTeleportUserDataReplicator
{
	class UTeleportUserData*                           UserData;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TeleportRepData
// 0x0030
struct FTeleportRepData
{
	unsigned char                                      RequestID;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInProgress;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2F0H[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       Subject;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FB3W[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTeleportUserDataReplicator                 UserDataReplicator;                                        // 0x0028(0x0008) (NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ThrowingPointDamageEvent
// 0x0020 (0x00D0 - 0x00B0)
struct FThrowingPointDamageEvent : public FPointDamageEvent
{
	TWeakObjectPtr<class AActor>                       ThrownActor;                                               // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitVelocity;                                               // 0x00B8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHeadUpperShot;                                           // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DidPierce;                                                 // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8LJ[0x2];                                     // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageToStructuresMultiplier;                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OJEA[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TireSurfaceAudioEntry
// 0x0018
struct FTireSurfaceAudioEntry
{
	class UAkAudioEvent*                               SoundGroup;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<PhysicsCore_EPhysicalSurface>>  RelatedPhysicalSurfaces;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TournamentStats
// 0x0030
struct FTournamentStats
{
	struct FDbIntegerId                                UserProfileId;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               online;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Alive;                                                     // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEPI[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FamePoints;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastDeathTime;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TournamentParameters
// 0x0010
struct FTournamentParameters
{
	unsigned char                                      UnknownData_P0H0[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.Tractor4WAnimWheelData
// 0x0008
struct FTractor4WAnimWheelData
{
	float                                              RollAngle;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteerAngle;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TrapTriggerParams
// 0x0010
struct FTrapTriggerParams
{
	class AActor*                                      TriggeredActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_93FP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.UsableObjectiveItem
// 0x0010
struct FUsableObjectiveItem
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1URD[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.UserProfileAuthorityInfo
// 0x0040
struct FUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ip;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResponsePort;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                gameplayPort;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                UserProfileId;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     authToken;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.UserServerHistoryItem
// 0x0028
struct FUserServerHistoryItem
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HZ6H[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HeatSourceParameters
// 0x0020
struct FHeatSourceParameters
{
	float                                              Temperature;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BH66[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 TemperatureCurve;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BurningSpeed;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceScale;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// 0x0070
struct FVehicleCorpseBurningParticles
{
	class UParticleSystem*                             Particles;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8EUP[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ParticlesTransform;                                        // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FHeatSourceParameters                       HeatSourceParameters;                                      // 0x0040(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                HeatSourceId;                                              // 0x0060(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YZG[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleHitZoneData
// 0x0030
struct FVehicleHitZoneData
{
	class UStaticMesh*                                 HitMesh;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GDTV[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          HitZoneMaterial;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DeactivatedHitZoneMaterial;                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5HT[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsHitMeshAttached;                                         // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4URJ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehiclePartDescription
// 0x000C
struct FVehiclePartDescription
{
	struct FGameplayTag                                PartType;                                                  // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              health;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleTireEffectProperties
// 0x0014
struct FVehicleTireEffectProperties
{
	struct FVector                                     TireLocalOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IARN[0x8];                                     // 0x000C(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleMaterialParameterDescription
// 0x0010
struct FVehicleMaterialParameterDescription
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleEngineStallingParameters
// 0x0058
struct FVehicleEngineStallingParameters
{
	float                                              MinDuration;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDuration;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopEngineChance;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldStallingStopOnThrottleOrBreakRelease;                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldEngineStopOnThrottleOrBreakRelease;                  // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZM1[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 ThrottleCurve;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleCurveFrequencyMultiplier;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHO7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 BrakeCurve;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeCurveFrequencyMultiplier;                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceMagnitudeScale;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceMagnitudeScaleCurveFrequencyMultiplier;               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceDirectionRandomizationAngle;                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      AudioEventTriggerTimeRatios;                               // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleImpactEffects
// 0x0038
struct FVehicleImpactEffects
{
	float                                              HitImpulseThreshold;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDG9[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ParticlesScale;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQ1Q[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CameraShake;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraShakeScale;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZ80[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleExhaustParticles
// 0x0018
struct FVehicleExhaustParticles
{
	struct FName                                       AttachSocketName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YYVR[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleExhaustEffects
// 0x0048
struct FVehicleExhaustEffects
{
	TArray<struct FVehicleExhaustParticles>            Particles;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseMinValue;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseMaxValue;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseSpeedTermMaxValue;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseAttackDuration;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseSustainDuration;                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleImpulseReleaseDuration;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticlesDestructionDelay;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTFO[0x1C];                                    // 0x002C(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// 0x0070
struct FVehicleExhaustEffectsParameters
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EngineStartedParticleSystem;                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EngineIdleParticleSystem;                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ThrottlePressedParticleSystem;                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThrottlePressedAudioEvent;                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDurationBetweenThrottlePressedEffects;                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeactivationDelay;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OO5U[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// 0x0060
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange                                 HealthRatioRange;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StartAudioEvent;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopAudioEvent;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeactivationDelay;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PNB[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleSpawnerInfo
// 0x0070
struct FVehicleSpawnerInfo
{
	struct FDbIntegerId                                DatabaseId;                                                // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                             VehicleAssetId;                                            // 0x0008(0x0010) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VehicleAlias;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QXDO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  VehicleTransform;                                          // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int64_t                                            VehicleLastAccessTime;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       VehicleActor;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minor;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Build;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revision;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponBowDrawData
// 0x000C
struct FWeaponBowDrawData
{
	unsigned char                                      UnknownData_EXHJ[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponMalfunctionProbabilityCurves
// 0x03B8
struct FWeaponMalfunctionProbabilityCurves
{
	struct FRuntimeFloatCurve                          ProbabilityCurve[0x7];                                     // 0x0000(0x03B8) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponTypeAimOffset
// 0x0018
struct FWeaponTypeAimOffset
{
	ConZ_EWeaponType                                   WeaponType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_800I[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpace*                                 AimOffset[0x2];                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponCheckAmmoData
// 0x0008
struct FWeaponCheckAmmoData
{
	class UClass*                                      ActionSequenceClass;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponUnloadAmmoData
// 0x0010
struct FWeaponUnloadAmmoData
{
	class UClass*                                      ActionSequenceClass;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTSK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AmmunitionData
// 0x0018
struct FAmmunitionData
{
	class UClass*                                      AmmunitionItemClass;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              health;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxHealth;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxHealth;                                          // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQEG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponSyncData
// 0x0030
struct FWeaponSyncData
{
	TArray<struct FAmmunitionData>                     LoadedAmmoData;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAmmunitionData>                     InternalMagazineAmmoData;                                  // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedProjectileClass;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsChamberOpened;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCF8[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0050
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData_O97Q[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// 0x0008
struct FZombieRagdollAutoRecovery
{
	ConZ_EZombieRagdollAutoRecoveryType                Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TD64[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Timespan;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SicknessRecord
// 0x0004
struct FSicknessRecord
{
	ConZ_EDiagnosedResult                              Diagnose;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAUP[0x1];                                     // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           Phase;                                                     // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DigestionItemRecord
// 0x0038
struct FDigestionItemRecord
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZJD[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Caption;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           RemainingWeight;                                           // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7RDZ[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingVolume;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Water;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsWaterFromWorld;                                          // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YC52[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HealingItemRecord
// 0x0020
struct FHealingItemRecord
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVYJ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Caption;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           quantity;                                                  // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJ3M[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PrisonerBCUMonitorData
// 0x0128
struct FPrisonerBCUMonitorData
{
	unsigned char                                      Age;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MAN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LifeTime;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeethNumber;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Strength;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Constitution;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Dexterity;                                                 // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Intelligence;                                              // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StrengthGain;                                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConstitutionGain;                                          // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DexterityGain;                                             // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StrengthRate;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConstitutionRate;                                          // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DexterityRate;                                             // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KJ3[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           Weight;                                                    // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           InitialWeight;                                             // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           StorageFat;                                                // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BFP;                                                       // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HWD[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           MuscleMass;                                                // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WLTModifier;                                               // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3T4W[0x1];                                     // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           FoodWeight;                                                // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           MaxFoodWeight;                                             // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StomachVolumeOccupied;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StomachVolumeMax;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StomachWater;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntestineVolumeOccupied;                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntestineVolumeMax;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntestineWater;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColonVolumeOccupied;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColonVolumeMax;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BladderVolumeOccupied;                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BladderVolumeMax;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           weightLoad;                                                // 0x004C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WLT;                                                       // 0x004E(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WLTEasy;                                                   // 0x0050(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WLTDemanding;                                              // 0x0052(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WLTVeryDemanding;                                          // 0x0054(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             BodyTempCategory;                                          // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             BodyTempIncrease;                                          // 0x0057(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Blood;                                                     // 0x0058(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           MinBlood;                                                  // 0x005A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Calories;                                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           DailyCaloriesIntake;                                       // 0x0060(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CaloriesUsageSpeed;                                        // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZHE[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           CaloriesIdle;                                              // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CaloriesWalking;                                           // 0x0066(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CaloriesJogging;                                           // 0x0068(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CaloriesRunning;                                           // 0x006A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyIntake;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyUsage;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MetabolicCalories;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Water;                                                     // 0x0078(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GHM[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaterIntake;                                               // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaterUsage;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           DailyWaterIntake;                                          // 0x0084(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeFat;                                                 // 0x0086(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeSaturatedFat;                                        // 0x0088(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeSugar;                                               // 0x008A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeSodium;                                              // 0x008C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeCarbs;                                               // 0x008E(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeFiber;                                               // 0x0090(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeProteins;                                            // 0x0092(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            IntakeAlcohol;                                             // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YXI[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DailyFatCalories;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DailySugarCalories;                                        // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DailyCarbsCalories;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DailyProteinsCalories;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DailyAlcoholCalories;                                      // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0W0P[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int16_t>                                    IntakeVitamins;                                            // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int16_t>                                    IntakeMinerals;                                            // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      MSR;                                                       // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0IVF[0x1];                                     // 0x00D1(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int16_t                                            CurrentStaminaChange;                                      // 0x00D2(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            SCRIdle;                                                   // 0x00D4(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            SCRWalking;                                                // 0x00D6(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CurrentWaterConsumption;                                   // 0x00D8(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WCRIdle;                                                   // 0x00DA(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WCRWalking;                                                // 0x00DC(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WCRJogging;                                                // 0x00DE(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WCRRunning;                                                // 0x00E0(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CurrentCaloriesConsumption;                                // 0x00E2(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HealingSpeed;                                              // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ViewRange;                                                 // 0x00E5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PerformanceFailure;                                        // 0x00E6(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpeedModifier;                                             // 0x00E7(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StaminaRecoveryModifier;                                   // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StaminaConsumptionModifier;                                // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WCRModifier;                                               // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CaloriesBurntModifier;                                     // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HoldingBreathModifier;                                     // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HealingSpeedModifier;                                      // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HealthPointsModifier;                                      // 0x00EE(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ResistPoisonsModifier;                                     // 0x00EF(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSicknessRecord>                     Sicknesses;                                                // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDigestionItemRecord>                DigestionItems;                                            // 0x0100(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHealingItemRecord>                  HealingItems;                                              // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	uint16_t                                           AirTemp;                                                   // 0x0120(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           WindSpeed;                                                 // 0x0122(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BCUDataInitializedOnServer;                                // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GEW[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AchievementStats
// 0x0001
struct FAchievementStats
{
	unsigned char                                      UnknownData_5PEH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.Achievements
// 0x0001
struct FAchievements
{
	unsigned char                                      UnknownData_QUWK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DetectionDelayTimerData
// 0x0010
struct FDetectionDelayTimerData
{
	float                                              MinDetectionDelayBasedOnDistance;                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDetectionDelayBasedOnDistance;                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDetectionDelayBasedOnVisibility;                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDetectionDelayBasedOnVisibility;                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalData
// 0x0028
struct FAnimalData
{
	class UClass*                                      AnimalClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAnimal2*>                            AliveAnimals;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class ACorpse*>                             DeadAnimals;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseInteractionEvent
// 0x0008
struct FBaseInteractionEvent
{
	unsigned char                                      UnknownData_I8DP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseDamageInteractionEvent
// 0x0090 (0x0098 - 0x0008)
struct FBaseDamageInteractionEvent : public FBaseInteractionEvent
{
	unsigned char                                      UnknownData_F59P[0x90];                                    // 0x0008(0x0090) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterActionAnimationDescription
// 0x0020
struct FCharacterActionAnimationDescription
{
	unsigned char                                      UnknownData_3BE5[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// 0x0010
struct FHitByMeleeImpactSoundsInfo
{
	ConZ_ECharacterImpactSourceSoundCategory           ImpactSourceSoundCategory;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EDamageMagnitudeType                          DamageMagnitudeType;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EDetectHitCollisionType                       ImpactBodyPart;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20RO[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ImpactPoint;                                               // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterSpawneeInfo
// 0x0010
struct FCharacterSpawneeInfo
{
	unsigned char                                      UnknownData_IV08[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnCharacterGroupInfo
// 0x0050
struct FSpawnCharacterGroupInfo
{
	TArray<class UClass*>                              AvailablePawns;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumOfCharactersToSpawn;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreLimit;                                               // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NIM[0xB];                                     // 0x0045(0x000B) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterStats
// 0x0030
struct FCharacterStats
{
	unsigned char                                      UnknownData_OUAB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FamePoints;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FameLevel;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EventScore;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventKills;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventTeamKills;                                            // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventDeaths;                                               // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventSuicides;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventAssists;                                              // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventHeadshots;                                            // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBanned;                                                  // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4X9Q[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0048
struct FCharacterStatsItem
{
	int                                                Rank;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZOLH[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterStats                             CharacterStats;                                            // 0x0018(0x0030) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChoppingTool2                              Tool;                                                      // 0x0008(0x0030) (NativeAccessSpecifierPublic)
	bool                                               IsRequiredToBeInHands;                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YR4Q[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CircularSegmentContainer
// 0x0018
struct FCircularSegmentContainer
{
	TArray<class UCircularMenuSegmentWidget*>          SegmentWidgets;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                SegmentCountOverride;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CircularLayerData
// 0x0008
struct FCircularLayerData
{
	float                                              CenterCutoffPercentage;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RepActionData
// 0x0003
struct FRepActionData
{
	ConZ_EAnimalAction                                 Action;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IndexParameter;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// 0x003C
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator                                    RunRotationRate;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    TrotRotationRate;                                          // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    WalkRotationRate;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    SneakRotationRate;                                         // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    StandRotationRate;                                         // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalPaceSettings
// 0x0010
struct FAnimalPaceSettings
{
	float                                              RunSpeed;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrotSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SneakSpeed;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TurnMontages
// 0x0010
struct FTurnMontages
{
	class UAnimMontage*                                TurnInPlaceLeft;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                TurnInPlaceRight;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalActionMontageData
// 0x0018
struct FAnimalActionMontageData
{
	class UAnimMontage*                                SleepMontage;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                EatMontage;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                IntimidateMontage;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CloseRangeAttackData
// 0x0018
struct FCloseRangeAttackData
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationModifier;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Range;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalHalfAngleRange;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ChargeAttackData
// 0x0020
struct FChargeAttackData
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationModifier;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Range;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              lengthOverride;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3U0[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ContainerItemDescriptorData
// 0x0050
struct FContainerItemDescriptorData
{
	unsigned char                                      UnknownData_60R0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              health;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxHealth;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                quantity;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                usage;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalWeight;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayUpperLeft;                                          // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayAmountLeft;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayAmountRight;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDisplayText;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83VW[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       UniqueItemId;                                              // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                      // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FilePath;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseElementSpawnParams
// 0x0020
struct FBaseElementSpawnParams
{
	float                                              Quality;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z36P[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DoorUpgrades;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                ShelterId;                                                 // 0x0018(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BaseInteractionVisitor
// 0x0020
struct FBaseInteractionVisitor
{
	unsigned char                                      UnknownData_U92T[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// 0x0008
struct FConZBaseRepairAreaDuration
{
	int                                                NumberOfBaseElementsTreshold;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RepairDuration;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZOnDemandElementData
// 0x0030
struct FConZOnDemandElementData
{
	struct FConZBaseElementIdentifier                  ElementIdentifier;                                         // 0x0000(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     OwnerName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZPlacementQueryParams
// 0x0018
struct FConZPlacementQueryParams
{
	bool                                               IsSnapping;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MustBePlacedOnFoundations;                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanEverBePlacedOnFoundations;                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBePlacedOnOtherBaseElements;                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKS1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APrisoner*                                   User;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxInstancesPerFlagArea;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MT0F[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseElementInteractionData
// 0x0020
struct FConZBaseElementInteractionData
{
	int64_t                                            BaseElementId;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseElementLocation;                                       // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RepairValue;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            InteractionTimestamp;                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseInteractionData
// 0x0018
struct FConZBaseInteractionData
{
	int64_t                                            BaseId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseLocation;                                              // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCZF[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseData
// 0x00F0
struct FConZBaseData
{
	int64_t                                            BaseId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BaseName;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   BaseSize;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseLocation;                                              // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JW7P[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            BaseOwnerPlayerId;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwnedByPlayer;                                           // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XVGU[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   BaseBoundsMin;                                             // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   BaseBoundsMax;                                             // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OF0D[0xA4];                                    // 0x004C(0x00A4) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZFlagElementData
// 0x0010
struct FConZFlagElementData
{
	int64_t                                            OvertakeEndTime;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                OvertakerId;                                               // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZBaseElementData
// 0x0070
struct FConZBaseElementData
{
	int64_t                                            ElementID;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            OwnerPlayerId;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ElementClass;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthPoints;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Quality;                                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DoorElementStateFlags;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OHW[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DoorUpgrades;                                              // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	ConZ_EAccessLevel                                  DoorAccessLevel;                                           // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTPI[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZSquadMember
// 0x0010
struct FConZSquadMember
{
	struct FDbIntegerId                                UserProfileId;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EConZSquadMemberRank                          Rank;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               online;                                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InDanger;                                                  // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAlive;                                                   // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PDP4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZSquadPendingMember
// 0x0010
struct FConZSquadPendingMember
{
	struct FDbIntegerId                                UserProfileId;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_693S[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZVehicleFlatTireWheelConfiguration
// 0x0050
struct FConZVehicleFlatTireWheelConfiguration
{
	struct FDcxVehicleWheelData                        FlatTireWheelData;                                         // 0x0000(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5H6A[0x20];                                    // 0x0020(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDcxVehicleTire*                             FlatTire;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDcxVehicleTire*                             OriginalTire;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZVehicleTireParticleData
// 0x0014
struct FConZVehicleTireParticleData
{
	float                                              MinLateralSlip;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLateralSlip;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLongitudinalSlip;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLongitudinalSlip;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleScaleModifier;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ConZMapLocationProperties
// 0x0004
struct FConZMapLocationProperties
{
	unsigned char                                      UnknownData_NGEN[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingPair
// 0x0010
struct FCraftingPair
{
	class UClass*                                      CraftedItem;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CraftingItem;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PossibleItem
// 0x0030
struct FPossibleItem
{
	class UCraftingItemTag*                            CraftingTag;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Item;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                quantity;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                usage;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              usageWeight;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ECraftingType                                 CraftingType;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0TI[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuantityVariation;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightVariation;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpawnHere;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWMY[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingItem
// 0x0028
struct FCraftingItem
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPossibleItem>                       PossibleItems;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               FillSound;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingSkillLevelData
// 0x0014
struct FCraftingSkillLevelData
{
	float                                              CraftingTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProcessingTime;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Points;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Probability_Add;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Probability_Multiply;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RecipeAvailabilityState
// 0x00C8
struct FRecipeAvailabilityState
{
	unsigned char                                      UnknownData_DFVN[0xC8];                                    // 0x0000(0x00C8) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RecipeItemState
// 0x001C
struct FRecipeItemState
{
	unsigned char                                      UnknownData_E598[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemClassesArray
// 0x0010
struct FItemClassesArray
{
	TArray<class UClass*>                              ItemClasses;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingRecipeCraftableItem
// 0x0010
struct FCraftingRecipeCraftableItem
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnoughSkill;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8VJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingRecipeCraftingItem
// 0x0010
struct FCraftingRecipeCraftingItem
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                quantity;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isOptional;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZCP[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// 0x0018
struct FCraftingRecipeCraftingIngredient
{
	TArray<struct FCraftingRecipeCraftingItem>         CraftingItems;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsTool;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isOptional;                                                // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEPA[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CraftingRecipe
// 0x0038
struct FCraftingRecipe
{
	TArray<struct FCraftingRecipeCraftableItem>        CraftableItems;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingRecipeCraftingIngredient>   CraftingIngredients;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      SkillNeeded;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ESkillLevel                                   SkillLevelNeeded;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5SQ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCraftableItem*                              CraftableItem;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GameEventRewardPoints
// 0x000C
struct FGameEventRewardPoints
{
	int                                                Cash;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FamePoints;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CTFParameters
// 0x0030
struct FCTFParameters
{
	float                                              FlagResetDuration;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowReturns;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKLB[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CaptureLimit;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerPickup;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerCapture;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerReturn;                                           // 0x0024(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DamageDescription
// 0x0004
struct FDamageDescription
{
	float                                              StructureDamageMultiplier;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DeathmatchParameters
// 0x0014
struct FDeathmatchParameters
{
	int                                                RoundScoreLimit;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionInterval;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionDuration;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaRestrictionStep;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BarrierHeatUpDuration;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// 0x002C
struct FDemolitionSkillParametersPerSkillLevel
{
	float                                              TrapQuality;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefuseTime;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmTrapXP;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisarmOwnedTrapXP;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisarmEnemyTrapXP;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AddTriggerXP;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CraftTrapXP;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfWires;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GreenWiresNumber;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RedWiresNumber;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfDefuseAttempts;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TooltipPanelData
// 0x0020
struct FTooltipPanelData
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_ETooltipPanelType                             PanelType;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNK0[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Layer;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEditorOnly;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q0AW[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DialogInfoContainer
// 0x0010
struct FDialogInfoContainer
{
	TArray<struct FDialogueInfo>                       DialogInfos;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DistantLevelDescription
// 0x00A0
struct FDistantLevelDescription
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	ConZ_EDistantMeshStreamingBehavior                 MeshStreamingBehavior;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BEB1[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoxSphereBounds                            MeshBounds;                                                // 0x0044(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      CollisionMesh[0x28];                                       // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MeshLODs[0x10];                                            // 0x0088(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      UnknownData_0DZV[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DoorUnlockDataDescription
// 0x0010
struct FDoorUnlockDataDescription
{
	class UClass*                                      DoorUnlockData;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProbabilityCount;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92HD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DoorUnlockDataCollection
// 0x0010
struct FDoorUnlockDataCollection
{
	TArray<struct FDoorUnlockDataDescription>          Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DrivingSkillExperienceAwards
// 0x0008
struct FDrivingSkillExperienceAwards
{
	float                                              StartEngine;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsPerDrivenDistanceInKm;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// 0x0040
struct FDrivingSkillEngineStallingParameters
{
	float                                              Chance;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDuration;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDuration;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopEngineChance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ThrottleCurve;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleCurveFrequencyMultiplier;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_965X[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 BrakeCurve;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeCurveFrequencyMultiplier;                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceMagnitudeScale;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceMagnitudeScaleCurveFrequencyMultiplier;               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceDirectionRandomizationAngle;                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// 0x0100
struct FDrivingSkillParametersPerSkillLevel
{
	float                                              EngineStartDuration;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineStartFailureChance;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineStartViaMotionDuration;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineStartViaMotionFailureChance;                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineReadyDelay;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineFailedToStartDelay;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineFailedToStartNoFuelDelay;                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineFailedToStartNoBatteryDelay;                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineStalledDelay;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeedModifier;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleModifier;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeModifier;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GearboxSwitchTime;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GearboxLatency;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteerRaiseRate;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteerFallRate;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByAccelerationParameters;                    // 0x0040(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByUpShiftParameters;                         // 0x0080(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDrivingSkillEngineStallingParameters       EngineStallingWhenStartingViaMotion;                       // 0x00C0(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DropZoneParameters
// 0x002C
struct FDropZoneParameters
{
	float                                              IntroAnnouncementDelay;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarmupPhaseDuration;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrateDropDuration;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchPhaseTimeLimit;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CargoDropDuration;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapturePhaseTimeLimit;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CargoOpeningDuration;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipKeyPhase;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M5A[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameEventRewardPoints                      PointsPerActivation;                                       // 0x0020(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DummyCollisionCapsuleInfo
// 0x0050
struct FDummyCollisionCapsuleInfo
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                attachment;                                                // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                         // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              UnscaledRadius;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnscaledHalfHeight;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J0PE[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.DamageOverTimeUpdateGroup
// 0x0018
struct FDamageOverTimeUpdateGroup
{
	float                                              UpdateInterval;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LK1D[0x14];                                    // 0x0004(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// 0x0008
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StaminaRecoveryMultiplier;                                 // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// 0x0010
struct FEngineeringSkillExperienceAwards
{
	float                                              RepairExperienceMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillFuelExperienceMultiplier;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrainFuelExperienceMultiplier;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeBatteryExperienceMultiplier;                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// 0x0020
struct FEngineeringSkillParametersPerSkillLevel
{
	float                                              RepairRadius;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RepairTimeMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResultQuality;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IngredientMultiplier;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToolUsageMultiplier;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillFuelDurationMultiplier;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrainFuelDurationMultiplier;                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeBatteryDurationMultiplier;                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData_SPYD[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FillItemWithReplenishableResourceInteractionData
// 0x0048
struct FFillItemWithReplenishableResourceInteractionData
{
	struct FText                                       InteractionCaptionOverride;                                // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	float                                              BaseActionDuration;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActionDurationPerAmountFilled;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrisonerFillingMontage;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StartItemNoiseAudioEvent;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopItemNoiseAudioEvent;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StartReplenishableResourceNoiseAudioEvent;                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopReplenishableResourceNoiseAudioEvent;                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FishSpawnInfo
// 0x0008
struct FFishSpawnInfo
{
	int                                                SpawnInstances;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentlySpawned;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FoliageAIPerceptionData
// 0x0002
struct FFoliageAIPerceptionData
{
	bool                                               CanCoverPrisoner;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EPrisonerStance                               MaxUndetectedPrisonerStance;                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FoliageEffectsData
// 0x0018
struct FFoliageEffectsData
{
	class UAkAudioEvent*                               StartMovingThroughFoliageAudioEvent;                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopMovingThroughFoliageAudioEvent;                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               OneShotMovingThroughFoliageAudioEvent;                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FoliageGeneralData
// 0x0010
struct FFoliageGeneralData
{
	float                                              CollisionBoundsScale;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CollisionBoundsOffset;                                     // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FortificationMarkerParams
// 0x0030
struct FFortificationMarkerParams
{
	bool                                               IsValid;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B8QC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MarkerIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 Mesh;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SPR[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GameEventParticipantInfo
// 0x0070
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EGameEventParticipantState                    State;                                                     // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VP6[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamIndex;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UGameEventParticipantStats*                  EventStats;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APrisoner*>                           HurtBy;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                RepHelper;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSM3[0x14];                                    // 0x005C(0x0014) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GameEventParameters
// 0x0188
struct FGameEventParameters
{
	float                                              AnnounceDuration;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CancelDuration;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoundDuration;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundLimit;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinLimit;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnDelay;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeoutDuration;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinParticipants;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxParticipants;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowRespawn;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FriendlyFire;                                              // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFDH[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        TeamLimit;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                EntryFee;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerEnemyKill;                                        // 0x003C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerTeamKill;                                         // 0x0048(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerDeath;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerSuicide;                                          // 0x0060(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerAssist;                                           // 0x006C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerHeadshot;                                         // 0x0078(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsPerRoundWin;                                         // 0x0084(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGameEventRewardPoints>              PointsPerRank;                                             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameEventRewardPoints                      PointsForParticipation;                                    // 0x00A0(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ScoreToFameConversionFactor;                               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                    // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                  // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                   // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      PossibleOutfits;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UItemSelection*>                      MandatoryGear;                                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       EventName;                                                 // 0x0110(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       EventDescription;                                          // 0x0128(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       PrerequisitesText;                                         // 0x0140(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       WeaponText;                                                // 0x0158(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       RewardsText;                                               // 0x0170(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnArea
// 0x0014
struct FSpawnArea
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamIndex;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GameEventTeamColours
// 0x0060
struct FGameEventTeamColours
{
	struct FLinearColor                                TeamName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParticipantStatsDarker;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParticipantStatsLighter;                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParticipantStatsHighlighted;                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParticipantStatsDisabled;                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParticipantStatsMini;                                      // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GlobalAnimalSpawnInfo
// 0x001C
struct FGlobalAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnPeriod;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfExistingWaypointGroups;                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WorldMaxSpawnInstances;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentlyAssigned;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentlySpawned;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentlyDead;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// 0x0010
struct FPlayerPawnBirdInfo
{
	int                                                CoastalBirdsinProximity;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContinetalBirdsinProximity;                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VirtualAssignedCoastalBirds;                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VirtualAssignedContinentalBirds;                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HeatSource
// 0x0040
struct FHeatSource
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TL8S[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHeatSourceParameters                       parameters;                                                // 0x0010(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              FuelDuration;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FuelCapacity;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesUpdatedWithoutMoving;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ5L[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PhysicalHitReactData
// 0x0018
struct FPhysicalHitReactData
{
	struct FName                                       ProfileName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PelvisBoneName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialStrengthMultiplier;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendDuration;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitReactLandingData
// 0x0028
struct FHitReactLandingData
{
	float                                              MinImpactSpeedToReact;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRI1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                MontageToPlay;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanEverGoToRagdoll;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1Q4[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinImpactSpeedForRagdoll;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRagdollDuration;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRagdollDuration;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RagdollDurationPerSpeedUnit;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// 0x0040
struct FHitReactBodyPartDataItem
{
	class UAnimMontage*                                MontageToPlay;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageToRespondTo;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       WeaponsToRespondTo;                                        // 0x0010(0x0020) (Edit, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FollowupMontage;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25TE[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitReactDirectionData
// 0x0048
struct FHitReactDirectionData
{
	TArray<struct FHitReactBodyPartDataItem>           FrontHit;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHitReactBodyPartDataItem>           LeftHit;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHitReactBodyPartDataItem>           BackHit;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHitReactBodyPartDataItem>           RightHit;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJUJ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitReactMagnitudeData
// 0x0120
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData                      SmallHit;                                                  // 0x0000(0x0048) (Edit, NativeAccessSpecifierPublic)
	struct FHitReactDirectionData                      MediumHit;                                                 // 0x0048(0x0048) (Edit, NativeAccessSpecifierPublic)
	struct FHitReactDirectionData                      LargeHit;                                                  // 0x0090(0x0048) (Edit, NativeAccessSpecifierPublic)
	struct FHitReactDirectionData                      KnockoutHit;                                               // 0x00D8(0x0048) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.HitReactResult
// 0x0018
struct FHitReactResult
{
	class UAnimMontage*                                MontageToPlay;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FollowupMontage;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlDurationMultiplier;                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z13F[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PhysicalAnimationDesc
// 0x0034
struct FPhysicalAnimationDesc
{
	unsigned char                                      UnknownData_709T[0x34];                                    // 0x0000(0x0034) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InstanceManager
// 0x0058
struct FInstanceManager
{
	unsigned char                                      UnknownData_QZ2P[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SpawnedItems
// 0x0018
struct FSpawnedItems
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EPickupItemOperation                          Operation;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9I5S[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AItem*>                               Items;                                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InteractionQueryParameters
// 0x0010
struct FInteractionQueryParameters
{
	struct FVector                                     InteractionLocation;                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInDroneMode;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXIS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryItemPositionPair
// 0x0020
struct FInventoryItemPositionPair
{
	struct FInventoryPositionDataRepHelper             position;                                                  // 0x0000(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Item;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryContainer2DRepData
// 0x0028
struct FInventoryContainer2DRepData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                     Parent;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeX;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeY;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepCounter;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OBA[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryContainerClothesData
// 0x0020
struct FInventoryContainerClothesData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                     Parent;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepCounter;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G34E[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// 0x0020
struct FInventoryContainerHandsHolstersData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                     Parent;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepCounter;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGYD[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryContainerSelectionRepData
// 0x0028
struct FInventoryContainerSelectionRepData
{
	TArray<class UObject*>                             Items;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                     Parent;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryStackMemberData
// 0x0008
struct FInventoryStackMemberData
{
	int                                                position;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InventoryNodeWidgetData
// 0x0038
struct FInventoryNodeWidgetData
{
	struct FName                                       Slot;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EInventoryNodeWidgetDataType                  Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ILP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumberData;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TextData;                                                  // 0x0010(0x0018) (NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconData;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               VisibilityData;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24F6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemContainersArray
// 0x0010
struct FItemContainersArray
{
	TArray<class AItemContainer*>                      _itemContainers;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemContainerRepData
// 0x0020
struct FItemContainerRepData
{
	TArray<class UClass*>                              Locks;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        RemainingNeutralizationAttemptsPerLock;                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemContainersReplicationHelper
// 0x0070
struct FItemContainersReplicationHelper
{
	TMap<struct FString, struct FItemContainerRepData> ItemContainerData;                                         // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZM4S[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponTypeMontage
// 0x0018
struct FWeaponTypeMontage
{
	ConZ_EWeaponType                                   WeaponType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4DKK[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                Montage;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SupportedYawAngles;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionMontages
// 0x0018
struct FVehicleWeaponAimingStanceTransitionMontages
{
	ConZ_EVehicleWeaponAimingStance                    Stance;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHYD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWeaponTypeMontage>                  WeaponTypeMontages;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionCurves
// 0x0010
struct FVehicleWeaponAimingStanceTransitionCurves
{
	ConZ_EVehicleWeaponAimingStance                    Stance;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J0FY[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SupportedYawAngles;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FirstPersonViewParameters
// 0x0020
struct FFirstPersonViewParameters
{
	struct FFloatInterval                              MinMaxViewPitch;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              MinMaxViewYaw;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              MinMaxViewYawIfBlocked;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           MinMaxViewPitchByYaw;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleWeaponAimingFirstPersonData
// 0x0040
struct FVehicleWeaponAimingFirstPersonData
{
	struct FFirstPersonViewParameters                  ViewParameters;                                            // 0x0000(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60AT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                LocationOffsetByYaw;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                LocationOffsetByPitch;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.BasePoseAimOffsetPair
// 0x0018
struct FBasePoseAimOffsetPair
{
	class UAnimSequenceBase*                           UpperBodyPose;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           LowerBodyPose;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 AimOffset;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleThirdPersonWeaponTypeData
// 0x0038
struct FVehicleThirdPersonWeaponTypeData
{
	ConZ_EWeaponType                                   WeaponType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               alwaysIgnorePreMountAimOffsets;                            // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PR1[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBasePoseAimOffsetPair                      IdlePoseAndAimOffset[0x2];                                 // 0x0008(0x0030) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleWeaponAimingThirdPersonData
// 0x0010
struct FVehicleWeaponAimingThirdPersonData
{
	TArray<struct FVehicleThirdPersonWeaponTypeData>   WeaponTypeData;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleWeaponAimingStanceData
// 0x0070
struct FVehicleWeaponAimingStanceData
{
	TArray<struct FVehicleWeaponAimingStanceTransitionMontages> StanceTransitionMontages;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVehicleWeaponAimingStanceTransitionCurves> SupportedAnglesForTransition;                              // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVehicleWeaponAimingFirstPersonData         FirstPerson;                                               // 0x0020(0x0040) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleWeaponAimingThirdPersonData         ThirdPerson;                                               // 0x0060(0x0010) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
// 0x0028
struct FVehicleSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideVehicleAssets;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideProbability;                                       // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPDB[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPrimaryAssetId>                     VehicleAssets;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B906[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleSpawnerMarker
// 0x0060
struct FVehicleSpawnerMarker
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleSpawnerDataBasedOnPreset            Spawner;                                                   // 0x0030(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EO7I[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ExpirableVehicleSpawner
// 0x0028
struct FExpirableVehicleSpawner
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ExpirationTime;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                quantity;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                             VehicleAssetId;                                            // 0x0014(0x0010) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JIT[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleSpawnerData
// 0x0018
struct FVehicleSpawnerData
{
	TArray<struct FPrimaryAssetId>                     VehicleAssets;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9BI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ClassesArray
// 0x0020
struct FClassesArray
{
	TArray<class UClass*>                              Classes;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ProhibitedClasses;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WashItemData
// 0x0010
struct FWashItemData
{
	class UClass*                                      CleanItem;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WashItemUsage;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SF00[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalSpawnInfo
// 0x0008
struct FAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnProbability;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.AnimalManagementData
// 0x0030
struct FAnimalManagementData
{
	class UClass*                                      AnimalClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAnimal2*>                            AliveAnimals;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class ACorpse*>                             DeadAnimals;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                VirtualAnimalAmount;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WGEO[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.Waypoint
// 0x0030
struct FWaypoint
{
	ConZ_EAnimalWaypointType                           Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2GK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Center;                                                    // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AnimalsSpawnedNum;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNZG[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AAnimal2>>             SpawnedAnimals;                                            // 0x0020(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeshMaterialPair
// 0x0010
struct FMeshMaterialPair
{
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           EquippedMaterialOverride;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0560
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayedMagnification;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KBM[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        PostProcessSettings;                                       // 0x0010(0x0550) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// 0x0020
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation                        Add;                                                       // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyWeaponAnimation                        Remove;                                                    // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponSpreadItem
// 0x000C
struct FWeaponSpreadItem
{
	float                                              Idle;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Moving;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedTarget;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponSpreadData
// 0x0040
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x4];                                             // 0x0000(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              IncrementPerShot;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncrementFromShotsMax;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncrementSpeed;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecrementSpeed;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponViewKickData
// 0x0018
struct FWeaponViewKickData
{
	float                                              PitchMin;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMax;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawMin;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawMax;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchDecrementSpeed;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawDecrementSpeed;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FireAnimationData
// 0x00C0
struct FFireAnimationData
{
	struct FBodyWeaponAnimation                        BodyWeaponAnimation;                                       // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeBetweenShots;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4F6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyWeaponAnimation                        BodyWeaponAnimationChamber;                                // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeForChamber;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KLKW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Conditions;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          ProbabilityWeightCurve;                                    // 0x0038(0x0088) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponMalfunctionChances
// 0x0038
struct FWeaponMalfunctionChances
{
	struct FFloatInterval                              Value[0x7];                                                // 0x0000(0x0038) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponMalfunctionData
// 0x00A8
struct FWeaponMalfunctionData
{
	bool                                               UseCustomProbabilityCurve;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXOB[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          ProbabilityCurve;                                          // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      ClearMalfunctionSequence;                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ClearMalfunctionSequences;                                 // 0x0098(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponBowAimOffsets
// 0x0018
struct FWeaponBowAimOffsets
{
	class UBlendSpace*                                 DrawPercentage[0x3];                                       // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponBowArmsShake
// 0x0030
struct FWeaponBowArmsShake
{
	class UAnimSequenceBase*                           ThirdPerson[0x3];                                          // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           FirstPerson[0x3];                                          // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponBowStateDataReplicated
// 0x000C
struct FWeaponBowStateDataReplicated
{
	ConZ_EBowDrawPercentage                            BowDrawPercentage;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUDQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HoldTimeInFullDraw;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EWeaponBowState                               WeaponBowState;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_156W[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterAndItemAnimation
// 0x0010
struct FCharacterAndItemAnimation
{
	class UAnimMontage*                                CharacterMontage;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ItemMontage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemFirstPersonUpperBodyAnimationsData
// 0x0050
struct FItemFirstPersonUpperBodyAnimationsData
{
	class UAnimSequenceBase*                           StandIdle;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               StandWalk;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               StandWalkLimping;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               StandJog;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               StandJogLimping;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           StandRun;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           CrouchIdle;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               CrouchWalk;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               CrouchWalkLimping;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           ProneIdle;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.VehicleSpawnParameters
// 0x002C
struct FVehicleSpawnParameters
{
	struct FGameplayTag                                SpawnGroup;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MinSpawnLocationOffset;                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxSpawnLocationOffset;                                    // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AdminSpawnLocationOffset;                                  // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WheelBarrowParametersPerMovementPace
// 0x0020
struct FWheelBarrowParametersPerMovementPace
{
	bool                                               IsValid;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVMX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseMaxForwardSpeed;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseMaxForwardSpeedLimping;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanReverse;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NI1I[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseMaxReverseSpeed;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseMaxReverseSpeedLimping;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseMaxLoad;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPrisonerStrength;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieMeshVariation2
// 0x0010
struct FZombieMeshVariation2
{
	class USkeletalMesh*                               DressedMesh;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               StrippedMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// 0x0008
struct FZombieRelaxedStanceAnimations
{
	class UAnimSequenceBase*                           WalkLoopAnimation;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// 0x0020
struct FZombieRelaxedStanceVariation2
{
	struct FZombieRelaxedStanceAnimations              Animations;                                                // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WalkAcceleration;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkDeceleration;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkSpeed;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkSpeedInAnimation;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkTurnRate;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMFD[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieCombatStanceAnimations
// 0x0018
struct FZombieCombatStanceAnimations
{
	class UAnimSequenceBase*                           RunStartAnimation;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           RunLoopAnimation;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           RunStopAnimation;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieCombatStanceVariation2
// 0x0030
struct FZombieCombatStanceVariation2
{
	struct FZombieCombatStanceAnimations               Animations;                                                // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RunAcceleration;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunDeceleration;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunSpeed;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunSpeedInAnimation;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunTurnRate;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7AA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// 0x0028
struct FZombieTurnMontageDescription
{
	class UAnimMontage*                                MontageL90;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageL180;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageR90;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageR180;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TurnAngleCurveName;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ZombieAttackDescription
// 0x0020
struct FZombieAttackDescription
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              PitchRange;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegainControlMultiplier;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5Z6[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               Mesh;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               Visibility;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0QSS[0xF];                                     // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MLKW[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 Mesh;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               Visibility;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1CG[0xF];                                     // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QT0[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LinearVelocity;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Transforms;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             LinearVelocities;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             AngularVelocities;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91UN[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.ItemObstructionTestCapsule
// 0x0050
struct FItemObstructionTestCapsule
{
	unsigned char                                      UnknownData_ZSXW[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WidgetDisplayInfo
// 0x000C
struct FWidgetDisplayInfo
{
	ConZ_EWidgetDisplayInfoType                        DisplayType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P588[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                First;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Second;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.InteractionData
// 0x0048
struct FInteractionData
{
	int                                                IntegerData;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVVP[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     PointerData;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolData;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G8J[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TextData;                                                  // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FVector                                     InteractionLocation;                                       // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VectorData;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CharacterCreationMenuContext
// 0x0030
struct FCharacterCreationMenuContext
{
	bool                                               IsPreferringMultiplayer;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGU9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerIp;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerResponsePort;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerGameplayPort;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerAuthToken;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.CommonMapNames
// 0x0018
struct FCommonMapNames
{
	struct FName                                       MainMenu;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CharacterCreationMenu;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Singleplayer;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.GameplayRules
// 0x0018
struct FGameplayRules
{
	bool                                               AllowFirstperson;                                          // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowThirdperson;                                          // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowCrosshair;                                            // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowGlobalChat;                                           // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowLocalChat;                                            // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowSquadChat;                                            // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowMapScreen;                                            // 0x0006(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAFR[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToRemainInGameAfterLeaveGameRequestWhileCaptured;      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LimitSquadMembers;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowComa;                                                 // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowVoting;                                               // 0x0012(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowTraps;                                                // 0x0013(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HideKillNotification;                                      // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowKillClaiming;                                         // 0x0015(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZRH[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0068
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDbIntegerId                                UserProfileId;                                             // 0x0010(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserProfileName;                                           // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUserAdmin;                                               // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDeluxeUser;                                              // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayAsDrone;                                               // 0x002A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOFA[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerResponsePort;                                        // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M82H[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDbIntegerId                                ServerUserProfileId;                                       // 0x0048(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayRules                              GameplayRules;                                             // 0x0050(0x0018) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EventsRankingStats
// 0x0030
struct FEventsRankingStats
{
	unsigned char                                      UnknownData_7MHO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FamePoints;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FameLevel;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EventScore;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventKills;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventTeamKills;                                            // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventDeaths;                                               // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventSuicides;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventAssists;                                              // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventHeadshots;                                            // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBanned;                                                  // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBQZ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EventsRankingStatsItem
// 0x0048
struct FEventsRankingStatsItem
{
	int                                                Rank;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V2Z6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventsRankingStats                         CharacterStats;                                            // 0x0018(0x0030) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.SurvivalStats
// 0x0140
struct FSurvivalStats
{
	unsigned char                                      UnknownData_7IEZ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HighestPositiveFamePoints;                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DoorsClaimed;                                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AnimalsKilled;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinutesSurvived;                                           // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LocksPicked;                                               // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PuppetsKilled;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GunsCrafted;                                               // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoCrafted;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BulletsCrafted;                                            // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArrowsCrafted;                                             // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClothingCrafted;                                           // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongestKillDistance;                                       // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeKills;                                                // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArcheryKills;                                              // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersKnockedOut;                                         // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalDefecations;                                          // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalUrinations;                                           // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightsFired;                                               // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContainersLooted;                                          // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemsPutIntoContainers;                                    // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeathsByPrisoners;                                         // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AnimalsSkinned;                                            // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoodEaten;                                                 // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceTravelledByFoot;                                   // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WoundsPatched;                                             // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemsPickedUp;                                             // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LiquidDrank;                                               // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeethLost;                                                 // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalCaloriesIntake;                                       // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsFired;                                                // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsHit;                                                  // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeWeaponAccuracy;                                       // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Headshots;                                                 // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeWeaponSwings;                                         // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeWeaponHits;                                           // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeWeaponAccuracy;                                       // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeWeaponsCrafted;                                       // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DroneKills;                                                // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SentryKills;                                               // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrisonerKills;                                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PuppetsKnockedOut;                                         // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Diarrheas;                                                 // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vomits;                                                    // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceTravelledInVehicle;                                // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MushroomsEaten;                                            // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighestMuscleMass;                                         // 0x00C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighestFat;                                                // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeartAttacks;                                              // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Overdose;                                                  // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Starvation;                                                // 0x00D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighestDamageTaken;                                        // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighestWeightCarried;                                      // 0x00DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventsWon;                                                 // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventsLost;                                                // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowestNegativeFamePoints;                                  // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceTravelledSwimming;                                 // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventsEnemyKills;                                          // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventsDeaths;                                              // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagCaptures;                                              // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CrowsKilled;                                               // 0x00FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeagullsKilled;                                            // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HorsesKilled;                                              // 0x0104(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BoarsKilled;                                               // 0x0108(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BearsKilled;                                               // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GoatsKilled;                                               // 0x0110(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeersKilled;                                               // 0x0114(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChickensKilled;                                            // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RabbitsKilled;                                             // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DonkeysKilled;                                             // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesMauledByABear;                                        // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongestAnimalKillDistance;                                 // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventTeamKills;                                            // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillDeathRatio;                                            // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EventsKillDeathRatio;                                      // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AlcoholDrank;                                              // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageCut;                                                // 0x013C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.RespawnParameters
// 0x0058
struct FRespawnParameters
{
	int                                                RandomLocationPrice;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectorLocationPrice;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShelterLocationPrice;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadLocationPrice;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomPriceModifier;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectorPriceModifier;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HomePriceModifier;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomInitialTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectorInitialTime;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShelterInitialTime;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadInitialTime;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomCooldownTime;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectorCooldownTime;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShelterCooldownTime;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadCooldownTime;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomCooldownResetMultiplier;                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectorCooldownResetMultiplier;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShelterCooldownResetMultiplier;                            // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SquadCooldownResetMultiplier;                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommitSuicideInitialTime;                                  // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommitSuicideCooldownTime;                                 // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CommitSuicideCooldownResetMultiplier;                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.TeleportRequest
// 0x0028
struct FTeleportRequest
{
	TWeakObjectPtr<class AActor>                       Subject;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UTeleportUserData>            UserData;                                                  // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponReloadData
// 0x0030
struct FWeaponReloadData
{
	bool                                               IsQuick;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6U6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AItem*                                       Item;                                                      // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AItem*                                       Item2;                                                     // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                count;                                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFNA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReloadSequenceClass;                                       // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimationPlayRate;                                         // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CYVE[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponLoadStateSyncData
// 0x0040
struct FWeaponLoadStateSyncData
{
	int                                                ZeroRange;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHDR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAmmunitionData>                     LoadedAmmoData;                                            // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAmmunitionData>                     InternalMagazineAmmoData;                                  // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedAmmunitionItemClass;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedProjectileClass;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ConZ_EWeaponFiringMode                             FiringMode;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5K0D[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                malfunction;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponMalfunctionProbability
// 0x0008
struct FWeaponMalfunctionProbability
{
	ConZ_EWeaponMalfunction                            malfunction;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3NS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Probability;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.WeaponMalfunctionEventDescription
// 0x0008
struct FWeaponMalfunctionEventDescription
{
	unsigned char                                      UnknownData_F7PH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FireShotDescription
// 0x0008
struct FFireShotDescription
{
	unsigned char                                      UnknownData_7C6L[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.FireShotProjectileData
// 0x0028
struct FFireShotProjectileData
{
	struct FVector                                     StartLocation;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   shootDirection;                                            // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZeroRange;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Windage;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomFactor;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConeHalfAngle;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.EnvironmentDescription
// 0x0002
struct FEnvironmentDescription
{
	ConZ_EEnvironmentClass                             EnvironmentClass;                                          // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnderground;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeAttackCapsule
// 0x0080
struct FMeleeAttackCapsule
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                attachment;                                                // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                         // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              UnscaledRadius;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnscaledHalfHeight;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeleeWeaponDesc                            WeaponDesc;                                                // 0x0048(0x0038) (NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// 0x0110
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule                         MeleeAttackCapsule;                                        // 0x0000(0x0080) (NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0080(0x008C) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	ConZ_EDamageMagnitudeType                          DamageMagnitudeType;                                       // 0x010C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GNRD[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
