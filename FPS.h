#pragma once
class FPS
{
private:
	int nextTime = 0;
	int fpsCnt;
	int a = 0;
public:
	void FpsCtrl();
	void DrawFps();
};

