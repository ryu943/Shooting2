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
	play.Update();
	return this;
}

void Gamemain::Draw() const
{
	play.Draw();
	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“");

	
}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
