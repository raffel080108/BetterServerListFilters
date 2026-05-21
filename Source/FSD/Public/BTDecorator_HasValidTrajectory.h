#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "BTDecorator_HasValidTrajectory.generated.h"

UCLASS(Blueprintable)
class FSD_API UBTDecorator_HasValidTrajectory : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_HasValidTrajectory();

};

