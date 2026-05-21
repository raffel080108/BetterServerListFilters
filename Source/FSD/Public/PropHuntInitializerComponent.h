#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PropHuntInitializerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPropHuntInitializerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPropHuntInitializerComponent(const FObjectInitializer& ObjectInitializer);

};

