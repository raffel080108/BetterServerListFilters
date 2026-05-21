#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FSDMainHUDWidget.generated.h"

class UJetBootsFuelWidget;
class URadarPointComponent;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDMainHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFSDMainHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushEvent(UWidget* eventWidget, bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopEvent(UWidget* eventWidget, bool Left);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadarPointAdded(URadarPointComponent* Point);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UJetBootsFuelWidget* GetHudJetBootsFuelVertical() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRadarPoint(URadarPointComponent* Point);
    
};

