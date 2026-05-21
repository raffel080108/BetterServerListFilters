#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FSDTagsSurfaceProperties.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsSurfaceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MovingPlatform;
    
    FSD_API FFSDTagsSurfaceProperties();
};

