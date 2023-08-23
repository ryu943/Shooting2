#pragma once
#include "CharaBase.h"
class Enemy:
	public CharaBase
{
private:
	int hp;
	int point;
	int weappon;
public:
	Enemy();
	~Enemy();

	 void Update() override;
	 void Draw() const  override;
	 void Hit() override;
};

