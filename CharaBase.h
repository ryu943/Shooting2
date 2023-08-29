#pragma once
#include"SpehereCollider.h"
class CharaBase:
	public SphereCollider
{
private:
	int speed = 0;
	
	int image = 0;

public:
	CharaBase();
	static float Playerx;
	static float Playery;
	virtual void Update();

	virtual void Draw() const;

	virtual void Hit();
};

