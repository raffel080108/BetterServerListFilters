#include "VanityCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVanityCharacter::AVanityCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemInstance"));
    this->Animation = NULL;
    this->skinColor = NULL;
    this->BeardColor = NULL;
    this->DynamicBeardColor = NULL;
    this->Head = NULL;
    this->Eyebrows = NULL;
    this->Sideburns = NULL;
    this->Moustache = NULL;
    this->Beard = NULL;
    this->Armor = NULL;
    this->ArmorMeshType = EArmorMeshType::None;
    this->ArmorColor = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->DefaultHairColor = NULL;
    this->DefaultArmorMaterial = NULL;
    this->itemClass = NULL;
    this->Framework = NULL;
    this->Paintjob = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->BodyMesh->SetupAttachment(RootComponent);
}

void AVanityCharacter::DisplayVanity() {
}

void AVanityCharacter::Clean() {
}


