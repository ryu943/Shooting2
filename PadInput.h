#pragma once

#include "DxLib.h"

#define BUTTONS 16

class PAD_INPUT {
private:
	static int NowKey[BUTTONS];
	static int OldKey[BUTTONS];
	static int KeyFlg[BUTTONS];

	/// <summary>
	/// 現在の入力
	/// </summary>
	static XINPUT_STATE Input;

public:
	/// <summary>
	/// パッド入力の更新
	/// </summary>
	static void UpdateInput();

	/// <summary>
	/// 入力確認（デバッグ）
	/// </summary>
	static void DebugInput(); //デバッグ

	/// <summary>
	/// 左スティック
	/// </summary>
	/// <returns>横</returns>
	static int GetPadThumbLX() { return Input.ThumbLX; }

	/// <summary>
	/// 左スティック
	/// </summary>
	/// <returns>縦</returns>
	static int GetPadThumbLY() { return -Input.ThumbLY; }

	/// <summary>
	/// 左スティック
	/// </summary>
	/// <returns>横</returns>
	static int GetPadThumbRX() { return Input.ThumbRX; }

	/// <summary>
	/// 左スティック
	/// </summary>
	/// <returns>縦</returns>
	static int GetPadThumbRY() { return -Input.ThumbRY; }

	/// <summary>
	/// LT
	/// </summary>
	/// <returns>押し具合</returns>
	static int GetLeftTrigger() { return Input.LeftTrigger; }

	/// <summary>
	/// RT
	/// </summary>
	/// <returns>押し具合</returns>
	static int GetRightTrigger() { return Input.RightTrigger; }

	/// <summary>
	/// ボタンの入力
	/// </summary>
	/// <param name="key">ボタン</param>
	/// <returns>押され続けてる間１を返す</returns>
	static int GetNowKey(int key) { return NowKey[key]; }

	//Pressed
	/// <summary>
	/// ボタンの入力
	/// </summary>
	/// <param name="key">ボタン</param>
	/// <returns>押した瞬間１を返す</returns>
	static int GetKeyFlg(int key) { return KeyFlg[key]; }
};

