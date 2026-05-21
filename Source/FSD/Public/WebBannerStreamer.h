#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnHttpRequestCompletedDelegate.h"
#include "WebBannerStreamer.generated.h"

class UObject;
class UWebBannerStreamer;

UCLASS(Blueprintable)
class UWebBannerStreamer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHttpRequestCompleted success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHttpRequestCompleted failed;
    
    UWebBannerStreamer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWebBannerStreamer* DownloadConfig(UObject* WorldContextObject);
    
};

