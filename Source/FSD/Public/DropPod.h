#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MiningPodDialogs.h"
#include "TeamTransport.h"
#include "DropPod.generated.h"

UCLASS(Blueprintable)
class FSD_API ADropPod : public ATeamTransport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiningPodDialogs Dialogs;
    
    ADropPod(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDonkeyReturnPickupLocation();
    
};

