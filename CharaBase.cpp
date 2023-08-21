#include "CharaBase.h"
#include <DxLib.h>
#include "PadInput.h"

CharaBase::CharaBase()
{
	speed = 3;

	x = 30;
	y = 30;
}

void CharaBase::Update()
{

	///y += speed;

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
		x += speed;
	}
}

void CharaBase::Draw()
{
	DrawCircle(650, 600, 20, 0x0000ff, TRUE);
}

void CharaBase::Hit()
{
}
