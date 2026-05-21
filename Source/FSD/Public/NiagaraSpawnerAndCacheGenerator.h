#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraSpawnerAndCacheGenerator.generated.h"

class UFXSystemAsset;
class UFXSystemComponent;

UCLASS(Blueprintable)
class ANiagaraSpawnerAndCacheGenerator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> ToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> Generating;
    
    ANiagaraSpawnerAndCacheGenerator(const FObjectInitializer& ObjectInitializer);

};

