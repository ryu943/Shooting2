#pragma once

// �f�t�H���g�̒��ۃV�[���N���X
// ���[�U�[�͂�����p�����ăV�[������������Ɗy

class AbstractScene {
public:
    // �f�X�g���N�^
    virtual ~AbstractScene() {}

    // �X�V��������������
    virtual AbstractScene* Update() = 0;

    // �`�揈������������
    virtual void Draw() const = 0;
};