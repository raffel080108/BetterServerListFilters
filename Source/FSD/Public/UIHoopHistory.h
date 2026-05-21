#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "UIHoopHistory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUIHoopHistory : public UUserWidget {
    GENERATED_BODY()
public:
    UUIHoopHistory();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScores(const TArray<int32>& Scores);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetHistoryCount() const;
    
};

