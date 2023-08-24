#pragma once
#include"SpehereCollider.h"
class CharaBase:
	public SphereCollider
{
private:
	int speed = 0;
	
	int image = 0;
	float x;
	float y;
public:
	CharaBase();

	virtual void Update();

	virtual void Draw() const;

	virtual void Hit();
};

