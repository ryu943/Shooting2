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
	return nullptr;
}

void Gamemain::Draw() const
{
	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“");
}
