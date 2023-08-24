#pragma once
#include "CharaBase.h"
class Player:
	public CharaBase
{
private:
	float imageX, imageY;	//プレイヤーの画像の座標
	int image;
	int speed;
	int score = 0;
	float x;
	float y;
	int weapon = 0;
	float w, h;				//プレイヤーの大きさ
	float speedX, speedY;	//プレイヤーの速度
public:  
	Player();
	~Player();

    void Update() override;

	void Draw() const  override;

	void Hit()	override;

};

