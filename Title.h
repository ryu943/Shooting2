#pragma once
#include "AbstractScene.h"

class Title :public AbstractScene
{
private:
	int time;
	int num;
	int turnNum;

	int selectNum;
public:
	// コンストラクタ
	Title();
	// デストラクタ
	~Title();

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;
};

