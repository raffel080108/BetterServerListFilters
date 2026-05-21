#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "FSDWorldSettings.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable)
class AFSDWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* CharacterClass;
    
public:
    AFSDWorldSettings(const FObjectInitializer& ObjectInitializer);

};

