#pragma once
#include "AbstractScene.h"
#include"Player.h"
class Gamemain :public AbstractScene
{
private:
	int player;
	int Life;
	int enemy[3];
	int bullet[5];

	Player play;

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