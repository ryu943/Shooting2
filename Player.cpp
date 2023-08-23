#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
Player::Player()
{
	speed = 3;
	image = LoadGraph("images/player.png");
	x = 30;
	y = 30;
}

Player::~Player()
{
}

void Player::Update()
{
	if (x < 0) {
		x = 0;
	}

	if (y < 0) {
		y = 0;
	}
	//âEà⁄ìÆ
	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_RIGHT) || PAD_INPUT::GetLStick().x >= 32000) {
		x += speed;
	}
	//ç∂à⁄ìÆ
	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_LEFT) || PAD_INPUT::GetLStick().x <= -32000) {
		x -= speed;
	}

}

void Player::Draw() const 
{
	DrawGraph(30, 30, image, TRUE);
}

void Player::Hit()
{
}
