#pragma once
class BulletsSpawner
{
private:
	int speed;
	int angle;
	int acceleration;
	int anguleVelocity;

public:
	BulletsSpawner();

	virtual void Shoot();
};

