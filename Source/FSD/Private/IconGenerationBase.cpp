#include "IconGenerationBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIconGenerationBase::AIconGenerationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActiveCaptureComponent = NULL;
    this->DownScaleMaterial = NULL;
}


