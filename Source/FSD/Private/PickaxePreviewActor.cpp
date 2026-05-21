#include "PickaxePreviewActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APickaxePreviewActor::APickaxePreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_RootComponent"));
    this->ItemID = NULL;
    this->EquippedMaterial = NULL;
    this->TP_Root->SetupAttachment(RootComponent);
}

void APickaxePreviewActor::PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart) {
}

void APickaxePreviewActor::EquipParts() {
}


