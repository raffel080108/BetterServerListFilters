#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Templates/SubclassOf.h"
#include "WeaponEffectSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class UWeaponEffectSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ElectrifyPlatformsActorClass;
    
public:
    UWeaponEffectSubsystem();

};

