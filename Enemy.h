#pragma once
class Enemy
{
private:
	int hp;
	int point;
	int weappon;
public:
	Enemy();
	~Enemy();

	void Update() override;
	void Draw() override;
	void Hit() override;
};

