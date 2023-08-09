#pragma once
#include "DxLib.h"
#include "AbstractScene.h"
class Gamemain :public AbstractScene
{
private:
	int Player;
	int Life;
	int enemy[];
	int bullet[];

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