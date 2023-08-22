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

    void Update() override;

	void Draw() override;

	void Hit()	override;

};

