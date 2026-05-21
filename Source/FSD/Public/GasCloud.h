#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GasCloud.generated.h"

UCLASS(Blueprintable)
class AGasCloud : public AActor {
    GENERATED_BODY()
public:
    AGasCloud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Freeze();
    
};

