#pragma once
#include "DxLib.h"
#include "AbstractScene.h"
#include "Player.h"
#include "CharaBase.h"
class Gamemain :public AbstractScene
{
private:
	int player = 0;
	int Life = 0;
	int enemy[3];
	int bullet[5];

	Player Player;

public:
	// コンストラクタ
	Gamemain();
	//デストラクタ
	~Gamemain();
	

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;

	void HitCheck();
	void SpawnBullet();
};