#pragma once
#include "CharaBase.h"
class Player:
	public CharaBase
{
private:
	int score;

	int weapon;

public:  
	Player();
	~Player();

	virtual void Update() override;

	virtual void Draw() override;

	void Hit()	override;

};

