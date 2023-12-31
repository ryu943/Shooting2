#pragma once
#include "AbstractScene.h"
#include"Player.h"
#include "Bullet.h"
class Gamemain :public AbstractScene
{
private:
	int player;
	int Life;
	int enemy[3];
	int bullet[5];

	Player play;
	Bullet* bullett;

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