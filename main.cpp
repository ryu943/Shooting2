#include "DxLib.h"
#include"Define.h"
#include "Gamemain.h"
#include "FPS.h"
#include "SceneManager.h"
#include "PadInput.h"
#include "Title.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	SetMainWindowText("shooting");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//��ʃT�C�Y�̐ݒ�

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager* sceneMng;
	FPS fpsCtrl;

	try // �V�[����I�ԂƂ�������X�^�[�g����i�ŏI�I�ɂ�Title������j
	{
		sceneMng = new SceneManager((AbstractScene*)new Title());

	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);
		//�t�@�C���I�[�v��
		fopen_s(&fp, "ErrLog.txt", "a");
		//�G���[�f�[�^�̏�������
		fprintf_s(fp, "%02d�N %02d�� %02d�� %02d�� %02d�� %02d�b : %s������܂���B\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

		return 0;
	}

	// �Q�[�����[�v
	while ((ProcessMessage() == 0) && (sceneMng->Update() != nullptr)) {

		ClearDrawScreen();		// ��ʂ̏�����
		InputKey::Update();
		sceneMng->Draw();
	

		fpsCtrl.FpsCtrl();

		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f
	}
	return 0;
}