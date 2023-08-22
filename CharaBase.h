#pragma once
#include"SpehereCollider.h"
class CharaBase:
	public SphereCollider
{
private:
	int speed = 0;
	int x, y = 0;
	int image = 0;
public:
	CharaBase();

	virtual void Update();

	virtual void Draw();

	virtual void Hit();
};

