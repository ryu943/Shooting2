#pragma once

#include "DxLib.h"

#define BUTTONS 16

class PAD_INPUT {
private:
	static int NowKey[BUTTONS];
	static int OldKey[BUTTONS];
	static int KeyFlg[BUTTONS];

	/// <summary>
	/// ���݂̓���
	/// </summary>
	static XINPUT_STATE Input;

public:
	/// <summary>
	/// �p�b�h���͂̍X�V
	/// </summary>
	static void UpdateInput();

	/// <summary>
	/// ���͊m�F�i�f�o�b�O�j
	/// </summary>
	static void DebugInput(); //�f�o�b�O

	/// <summary>
	/// ���X�e�B�b�N
	/// </summary>
	/// <returns>��</returns>
	static int GetPadThumbLX() { return Input.ThumbLX; }

	/// <summary>
	/// ���X�e�B�b�N
	/// </summary>
	/// <returns>�c</returns>
	static int GetPadThumbLY() { return -Input.ThumbLY; }

	/// <summary>
	/// ���X�e�B�b�N
	/// </summary>
	/// <returns>��</returns>
	static int GetPadThumbRX() { return Input.ThumbRX; }

	/// <summary>
	/// ���X�e�B�b�N
	/// </summary>
	/// <returns>�c</returns>
	static int GetPadThumbRY() { return -Input.ThumbRY; }

	/// <summary>
	/// LT
	/// </summary>
	/// <returns>�����</returns>
	static int GetLeftTrigger() { return Input.LeftTrigger; }

	/// <summary>
	/// RT
	/// </summary>
	/// <returns>�����</returns>
	static int GetRightTrigger() { return Input.RightTrigger; }

	/// <summary>
	/// �{�^���̓���
	/// </summary>
	/// <param name="key">�{�^��</param>
	/// <returns>�����ꑱ���Ă�ԂP��Ԃ�</returns>
	static int GetNowKey(int key) { return NowKey[key]; }

	//Pressed
	/// <summary>
	/// �{�^���̓���
	/// </summary>
	/// <param name="key">�{�^��</param>
	/// <returns>�������u�ԂP��Ԃ�</returns>
	static int GetKeyFlg(int key) { return KeyFlg[key]; }
};

