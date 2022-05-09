// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
	:TotalDamage(200)
	,DamageTimeInSeconds(1.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Mesh
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	
	if (CubeVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

void AFloatingActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateValues();
}



// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector  NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * FloatSpeed;		// Scale Height by factor of 20
	
	float DeltaRotation = DeltaTime * RotationSpeed;	// Rotate 20 degrees per second
	NewRotation.Yaw += DeltaRotation;

	// Update location and rotation based on new values
	SetActorLocationAndRotation(NewLocation, NewRotation);

	CalculateValues();
}

void AFloatingActor::CalculateValues()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}