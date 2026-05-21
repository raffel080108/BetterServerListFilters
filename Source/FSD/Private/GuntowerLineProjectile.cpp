#include "GuntowerLineProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DamageComponent.h"

AGuntowerLineProjectile::AGuntowerLineProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftLinePoint"));
    this->RightLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RightLinePoint"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BeamParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamParticles"));
    this->PlatformDissolveRadius = 150.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->HitParticles = NULL;
    this->TimeBetweenLineChecks = 0.00f;
    this->LeftLinePoint->SetupAttachment(RootComponent);
    this->RightLinePoint->SetupAttachment(RootComponent);
    this->BeamParticles->SetupAttachment(RootComponent);
}

void AGuntowerLineProjectile::TurnOffParticles() {
}

void AGuntowerLineProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}


