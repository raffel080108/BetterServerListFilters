#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "LaserPointerTarget.h"
#include "DroneControllerBase.generated.h"

class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Blueprintable)
class ADroneControllerBase : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APlayerCharacter>> ControllingPlayers;
    
public:
    ADroneControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnShout(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(AFSDPlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoin(APlayerCharacter* Player);
    
};

