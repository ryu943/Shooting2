#pragma once
class Bullet
{
private:
	int damage;
	int speed;
	int angle;
	int acceleration;
	int anglulVelocity;

public:
	Bullet();
	~Bullet();

	void Update();

	void Draw();

	void GetDamage();
};

