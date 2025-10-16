#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "ThirdPersonCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (APawn* Pawn = TryGetPawnOwner())
    {
        if (AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(Pawn))
        {
            Speed = Character->GetVelocity().Size();
            IsInAir = Character->GetCharacterMovement()->IsFalling();
            JumpStartTrigger = Character->JumpStartTrigger;
            bIsRunning = Character->IsRunning();
        }
    }
}
