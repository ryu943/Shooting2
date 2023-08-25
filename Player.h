#pragma once
#include "CharaBase.h"
class Player:
	public CharaBase
{
private:
	int xstick;
	int ystick;
	int image;
	int speed;
	int score = 0;
	float x;
	float y;
	int weapon = 0;

public:  
	Player();
	~Player();

    void Update() override;

	void Draw() const  override;

	void Hit()	override;

};

