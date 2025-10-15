#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "ThirdPersonCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (APawn* Pawn = TryGetPawnOwner())
    {
        if (ACharacter* Character = Cast<ACharacter>(Pawn))
        {
            IsInAir = Character->GetCharacterMovement()->IsFalling();
        }
    }
}
