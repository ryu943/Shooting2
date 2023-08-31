#include "DxLib.h"
#include "Gamemain.h"
#include "PadInput.h"
Gamemain::Gamemain()
{
	bullett = new Bullet();
}

Gamemain::~Gamemain()
{
}

AbstractScene* Gamemain::Update()
{
	play.Update();
	bullett->Update();

	return this;
}

void Gamemain::Draw() const
{
	play.Draw();
	bullett->Draw();
	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“");

	
}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
