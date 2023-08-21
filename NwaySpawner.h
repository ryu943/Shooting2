#pragma once
class NwaySpawner
{
private:
	int numBullets;
	int baseAngle;
	int angleDiff;
public:
	NwaySpawner();

	void Shoot() override;
};

