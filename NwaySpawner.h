#pragma once
#include "BulletsSpawner.h"
class NwaySpawner:public BulletsSpawner
{
private:
	int numBullets;
	int baseAngle;
	int angleDiff;
public:
	NwaySpawner();

	void Shoot() override;
};

