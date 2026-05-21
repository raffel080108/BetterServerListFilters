#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RefineryExtractorPodWidget.generated.h"

class UObjective;

UCLASS(Blueprintable, EditInlineNew)
class URefineryExtractorPodWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URefineryExtractorPodWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(const float InProgress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveUpdated(UObjective* Objective);
    
};

