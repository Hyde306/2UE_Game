#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

UCLASS()
class PERSONAL_PRODUCTION_API UMyAnimInstance : public UAnimInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
    float Speed = 0.f;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
    bool IsInAir = false;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Jump")
    bool JumpStartTrigger = false;

    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
    bool bIsRunning = false;

};