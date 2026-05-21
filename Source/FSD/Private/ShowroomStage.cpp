#include "ShowroomStage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AShowroomStage::AShowroomStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneCapure = NULL;
    this->ActiveCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->ControllerClass = NULL;
    this->ControllerInstance = NULL;
    this->SceneCapture = (USceneCaptureComponent2D*)ActiveCaptureComponent;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->CameraFocusPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraFocusPoint"));
    this->CameraFocusPoint->SetupAttachment(RootComponent);
    this->ActiveCaptureComponent->SetupAttachment(CameraFocusPoint);
    this->SceneCapture->SetupAttachment(CameraFocusPoint);
}


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}



