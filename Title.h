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
	// �R���X�g���N�^
	Title();
	// �f�X�g���N�^
	~Title();

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;
};

