// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UFloatingPawnMovement;

UCLASS()
class ARCANOID_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();
	//The instance of this Class
	UPROPERTY()
		APaddle* Instance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveHorizontal(float AxisValue);

};
