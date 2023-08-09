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