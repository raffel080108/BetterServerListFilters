#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EventSpawnTimer.generated.h"

UCLASS(Blueprintable)
class AEventSpawnTimer : public AActor {
    GENERATED_BODY()
public:
    AEventSpawnTimer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTimer();
    
};

