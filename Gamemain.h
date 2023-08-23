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
	// �R���X�g���N�^
	Gamemain();
	//�f�X�g���N�^
	~Gamemain();
	

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

	void HitCheck();
	void SpawnBullet();
};