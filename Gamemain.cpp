#include "DxLib.h"
#include "Gamemain.h"

Gamemain::Gamemain()
{
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
	DrawFormatString(0, 0, 0xffffff, "ゲームメイン");


}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
