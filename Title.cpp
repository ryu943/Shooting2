#include "Title.h"
#include "DxLib.h"
#include "Gamemain.h"
#include "PadInput.h"
Title::Title()
{
	time = 0;
	num = 0;
	turnNum = 0;

	selectNum = 0;
}

Title::~Title()
{
}

AbstractScene* Title::Update()
{
	if (++time % 20 == 0) {

		switch (turnNum)
		{
		case 0:
			num = 0;
			turnNum = 1;
			break;
		case 1:
			if (num == 0) {
				turnNum = 2;
			}
			else if (num == 2) {
				turnNum = 0;
			}
			num = 1;

			break;
		case 2:
			if (num == 1) {
				turnNum = 3;
			}
			else if (num == 3) {
				turnNum = 1;
			}
			num = 2;

			break;
		case 3:
			num = 3;
			turnNum = 2;
			break;
		}

	}

	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_UP) || PAD_INPUT::GetLStick().y >= 32000) {
		selectNum--;
		if (selectNum < 0) {
			selectNum = 1;
		}
	}
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_DOWN) || PAD_INPUT::GetLStick().y <= -32000) {
		selectNum++;
		if (selectNum > 1) {
			selectNum = 0;
		}
	}

	if (selectNum == 0 && PAD_INPUT::OnButton(XINPUT_BUTTON_A)) {
		return new Gamemain();
	}
	return this;
}

void Title::Draw() const
{
	// タイトル
	DrawFormatString(500, 30, 0xffffff, "Shooting");
	SetFontSize(100);
	//カーソル表示
	DrawTriangle(570, 245 + selectNum * 80, 600, 265 + selectNum * 80, 570, 285 + selectNum * 80, 0xff0000, TRUE);
	//フォントサイズ変更
	SetFontSize(90);

	//メニューの描画
	SetFontSize(64);
	DrawString(620, 240, "START", 0xffffff);

	DrawString(620, 320, "RANKING", 0xffffff);
}
