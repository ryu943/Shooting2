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
	DrawFormatString(0, 0, 0xffffff, "ÉQÅ[ÉÄÉÅÉCÉì");
	DrawCircle(650, 600, 20, 0x0000ff, TRUE);

}

void Gamemain::HitCheck()
{
}

void Gamemain::SpawnBullet()
{
}
