#pragma once
#include "Player.h"
#include"PadInput.h"
class Bullet
{
private:
	struct Bullets {
		int flg = 0;
		float damage;
		int angle;
		int acceleration;
		int anglulVelocity;
		float bulletx, bullety;
		bool oneFlg;
	};
	int cnt = 0;
	Player player;
	int c = 0;
	float speed;
	int bflg;
	struct Bullets bullet[20];
	InputKey inputkey;

	
	
public:
	Bullet();
	~Bullet();

	void Update();

	void Draw() const ; 

	void GetDamage();
};

