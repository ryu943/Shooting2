#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include <math.h>
float Player::Playerx;
float Player::Playery;
Player::Player()
{
	speed = 3;
	image = 0;
	Playerx = 50;
	Playery = 200;
	xstick = 0;
	ystick = 0;
}

Player::~Player()
{
}


void Player::Update()
{
	InputKey::Update();
	GetJoypadAnalogInput(&xstick, &ystick, DX_INPUT_PAD1);
	InputKey::GetJoyStickX(xstick);
	InputKey::GetJoyStickY(ystick);
	if (xstick < 0) {
		if (Playerx > 0)
			Playerx -= 5;
	}
	if (xstick > 0) {
		if (Playerx < 960)
			Playerx += 5;
	}
	if (ystick < 0) {
		if (Playery > 0)
			Playery -= 5;
	}
	if (ystick > 0) {
		if (Playery < 960)
			Playery += 5;
	}

}

void Player::Draw() const 
{
	//DrawGraph(30, 30, image, TRUE);
	DrawFormatString(400, 500, 0xffffff, "aaa");
	DrawCircle(Playerx, Playery,50, 0x00ffff);
	
}

void Player::Hit()
{
}
