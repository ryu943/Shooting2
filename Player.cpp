#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include <math.h>
Player::Player()
{
	speed = 3;
	image = LoadGraph("images/player.png");
	x = 320;
	y = 720 - 96;
	w = 50;
	h = 109;
	speedX = 0;
	speedY = 0;
}

Player::~Player()
{
}

void Player::Update()
{
	//�v���C���[�̉摜�̍��W
	imageX = x + (w / 2);
	imageY = y + (h / 2);

	//0����1�̊Ԃ��o��悤�Ɍv�Z
	speedX = round(((float)PAD_INPUT::GetPadThumbLX() / 32767) * 100) / 100;
	speedY = round(((float)PAD_INPUT::GetPadThumbLY() / 32767) * 100) / 100;

	//�v���C���[�̈ړ�����
	x += speedX * speed;
	y += speedY * speed;

	//�v���C���[����ʊO�ɏo�Ȃ��悤��
	if (x < 0) {
		x = 0;
	}

	if (y < 0) {
		y = 0;
	}
	
}

void Player::Draw() const 
{
	DrawGraph(30, 30, image, TRUE);
	
}

void Player::Hit()
{
}
