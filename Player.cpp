#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include <math.h>
Player::Player()
{
	speed = 3;
	image = 0;
	x = 50;
	y = 200;
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
		if (x > 0)
			x -= 5;
	}
	if (xstick > 0) {
		if (x < 960)
			x += 5;
	}
	if (ystick < 0) {
		if (y > 0)
			y-= 5;
	}
	if (ystick > 0) {
		if (y< 960)
			y += 5;
	}

}

void Player::Draw() const 
{
	//DrawGraph(30, 30, image, TRUE);
	DrawFormatString(400, 500, 0xffffff, "aaa");
	DrawCircle(x, y,50, 0x00ffff);
	
}

void Player::Hit()
{
}
