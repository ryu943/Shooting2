#include "DxLib.h"
#include "Gamemain.h"
#include"Player.h"
Gamemain::Gamemain()
{
	player = 0;
}

Gamemain::~Gamemain()
{
}

AbstractScene* Gamemain::Update()
{
	
	return this;
}

void Gamemain::Draw() const
{
	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“");

	Player.Draw();
}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
