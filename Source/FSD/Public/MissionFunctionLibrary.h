#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GlobalMissionSeed.h"
#include "MissionFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class FSD_API UMissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetSeedString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSeedsFromString(const FString& seedString, FGlobalMissionSeed& outGlobalSeed, int32& outMissionSeed, int32& outPlsSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetGlobalMissionBaseTime();
    
};

