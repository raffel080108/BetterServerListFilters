#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Projectile.h"
#include "PlatformProjectile.generated.h"

UCLASS(Blueprintable)
class FSD_API APlatformProjectile : public AProjectile {
    GENERATED_BODY()
public:
    APlatformProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MeltPlatformAroundPlayers(FVector platformLocation);
    
};

