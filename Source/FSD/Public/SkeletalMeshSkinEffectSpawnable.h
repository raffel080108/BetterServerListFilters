#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkeletalMeshSkinEffectSpawnable.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkeletalMeshSkinEffectSpawnable : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USkeletalMeshSkinEffectSpawnable(const FObjectInitializer& ObjectInitializer);

};

