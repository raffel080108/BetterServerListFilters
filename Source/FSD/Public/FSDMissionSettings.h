#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GameDifficulty.h"
#include "MissionHazardSetting.h"
#include "FSDMissionSettings.generated.h"

class UGeneratedMission;
class UObject;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UFSDMissionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultRoomGenerator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionHazardSetting> MissionComplexitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionHazardSetting> MissionDurationSettings;
    
public:
    UFSDMissionSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalHazPlusBonus(const FGameDifficulty& Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, const FGameDifficulty& Difficulty);
    
};

