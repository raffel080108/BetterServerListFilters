#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HoopScoreWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHoopScoreWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHoopScoreWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore(int32 Score);
    
};

