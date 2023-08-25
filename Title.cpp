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
	InputKey::Update();
	num = selectNum * 100;
	if (InputKey::GetJoyStickY(InputKey::Y_now)&&InputKey::Y_now>0)
	{
		if (++selectNum > 1)selectNum = 0;
	}
	if (InputKey::GetJoyStickY(InputKey::Y_now)&&InputKey::Y_now<0)
	{
		if (--selectNum < 0)selectNum = 1;
	}
	if (InputKey::GetKeyDown(PAD_INPUT_1) == TRUE && selectNum == 0){
		return new Gamemain;
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
