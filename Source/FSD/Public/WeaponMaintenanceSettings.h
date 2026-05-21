#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SpaceRigNotification.h"
#include "WeaponMaintenanceSettings.generated.h"

class UItemSkin;

UCLASS(Blueprintable)
class UWeaponMaintenanceSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LevelXPRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemSkin*> LevelRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpaceRigNotification WeaponUnlockedNotification;
    
    UWeaponMaintenanceSettings();

};

