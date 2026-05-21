#include "SoapVacuumItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ASoapVacuumItem::ASoapVacuumItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VacuumCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("VacuumCollision"));
    this->NS_Vacuum_FP = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Vacuum_FP"));
    this->NS_Vacuum_TP = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Vacuum_TP"));
    this->VacuumCooldown = 0.50f;
    this->VacuumRadius = 100.00f;
    this->VacuumRange = 500.00f;
    this->CurrentVacuumEffectStrenght = 0.00f;
    this->MaxVacuumEffectStrength = 300.00f;
    this->VacuumEffectFoamSuckTime = 1.00f;
    this->LastPuddleSuckTime = 0.00f;
    this->VacuumCapsule->SetupAttachment(FPMesh);
    this->NS_Vacuum_FP->SetupAttachment(FPMesh);
    this->NS_Vacuum_TP->SetupAttachment(TPMesh);
}

void ASoapVacuumItem::Server_StartVacuumingPuddle_Implementation(AActor* Target) {
}


void ASoapVacuumItem::ItemEnterVacuum(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USceneComponent* ASoapVacuumItem::GetVacuumSource_Implementation() const {
    return NULL;
}

void ASoapVacuumItem::All_Visual_PuddleStartCollect_Implementation() {
}


