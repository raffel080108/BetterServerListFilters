#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPropHuntEndScreen.h"
#include "PropHuntEndScreenWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPropHuntEndScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropHuntEndScreen EndScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GameWon;
    
    UPropHuntEndScreenWidget();

};

