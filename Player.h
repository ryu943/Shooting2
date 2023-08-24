#pragma once
#include "CharaBase.h"
class Player:
	public CharaBase
{
private:
	float imageX, imageY;	//�v���C���[�̉摜�̍��W
	int image;
	int speed;
	int score = 0;
	float x;
	float y;
	int weapon = 0;
	float w, h;				//�v���C���[�̑傫��
	float speedX, speedY;	//�v���C���[�̑��x
public:  
	Player();
	~Player();

    void Update() override;

	void Draw() const  override;

	void Hit()	override;

};

