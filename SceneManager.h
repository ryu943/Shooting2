#pragma once
#include "AbstractScene.h"

// �V�[���}�l�[�W���[�N���X
// �e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public AbstractScene {
private:
    AbstractScene* mScene; // ���݂̃V�[��

public:
    // �R���X�g���N�^
    SceneManager(AbstractScene* scene) : mScene(scene) {}

    // �f�X�g���N�^
    ~SceneManager() {
        delete mScene;
    }

    // �X�V���������s����
    AbstractScene* Update()override;

    // �`�揈�������s����
    void Draw() const;
};