#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnHitByHitScanDelegate.generated.h"

class UHitscanBaseComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHitByHitScan, UHitscanBaseComponent*, HitscanComponent, const FVector&, Position, const FVector&, Origin);

