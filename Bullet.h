#pragma once
#include "Player.h"
#include"PadInput.h"
class Bullet
{
private:
	struct Bullets {
		int flg = 0;
		int damage;
		int angle;
		int acceleration;
		int anglulVelocity;
		int bulletx, bullety;
	};
	int cnt = 0;
	Player player;
	int c = 0;
	int speed;
	struct Bullets bullet[20];
	InputKey inputkey;
	
public:
	Bullet();
	~Bullet();

	void Update();

	void Draw();

	void GetDamage();
};

