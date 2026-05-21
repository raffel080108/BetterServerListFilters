#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PropHuntOverlayWidget.generated.h"

class APlayerCharacter;
class UPropHuntContestant;
class UPropHuntManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPropHuntOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPropHuntManager> PropHuntManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPropHuntContestant> ContestantComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPropHuntOverlayWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowMe();
    
    UFUNCTION(BlueprintCallable)
    void HideMe();
    
};

