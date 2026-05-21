#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AfflictionEffect.h"
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToAdd;
    
public:
    UHeroEnemyAfflictionEffect();

};

