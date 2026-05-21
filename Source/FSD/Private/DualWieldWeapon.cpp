#include "DualWieldWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "FirstPersonSkeletalMeshComponent.h"

ADualWieldWeapon::ADualWieldWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FPMeshLeft = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPMeshLeft"));
    this->TPMeshLeft = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPMeshLeft"));
    this->WPN_Left_Reload = NULL;
    this->WPN_Left_TP_Reload = NULL;
    this->CasingParticlesLeft = NULL;
    this->TPMeshLeft->SetupAttachment(RootComponent);
}


