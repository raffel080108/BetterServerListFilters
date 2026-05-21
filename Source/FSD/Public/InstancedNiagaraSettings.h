#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InstancedNiagaraSystemSettings.h"
#include "InstancedNiagaraSettings.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UInstancedNiagaraSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraSystem*, FInstancedNiagaraSystemSettings> SystemSettings;
    
public:
    UInstancedNiagaraSettings();

};

