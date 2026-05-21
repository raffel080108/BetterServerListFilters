#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "RefineryExtractorPodAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URefineryExtractorPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReturning;
    
public:
    URefineryExtractorPodAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturningChanged();
    
};

