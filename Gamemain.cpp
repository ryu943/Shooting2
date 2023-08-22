#include "DxLib.h"
#include "Gamemain.h"
#include"CharaBase.h"
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
	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“");

	CharaBase->Draw();
}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
