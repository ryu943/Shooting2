#pragma once
#include "DxLib.h"
#include "AbstractScene.h"
#include "Player.h"
#include "CharaBase.h"
class Gamemain :public AbstractScene
{
private:
	int Player;
	int Life;
	int enemy[3];
	int bullet[5];

public:
	// �R���X�g���N�^
	Gamemain();
	//�f�X�g���N�^
	~Gamemain();
	// �N���X�̃I�u�W�F�N�g
	CharaBase*CharaBase;	
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

	void HitCheck();
	void SpawnBullet();
};