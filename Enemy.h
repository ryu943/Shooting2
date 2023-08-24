#pragma once
#include "CharaBase.h"
class Enemy:
	public CharaBase 
{
private:
	int hp = 0;
	int point = 0;
	int weappon = 0;
public:
	Enemy();
	~Enemy();

	 void Update() override;
	 void Draw() const  override;
	 void Hit() override;
};

