#include "Bullet.h"

Bullet::Bullet()
{
	speed = 5;
	cnt = 0;
	
	c = 0;
	for (int i = 0; i > 20;i++) {
		bullet[i].damage = 0;
		bullet[i].angle = 0;
		bullet[i].acceleration = 0;
		bullet[i].anglulVelocity = 0;
		bullet[i].bulletx = 0;
		bullet[i].bullety = 0;
		bullet[i].flg = 0;
	}

}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
	/*if (inputkey.GetKey(PAD_INPUT_6)==TRUE&&cnt>20) {
		if (bullet[c].flg == 0) {
			bullet[c].bulletx
		}

	}*/
	if (inputkey.GetKey(PAD_INPUT_6) == TRUE && cnt > 20) {
		if (!bullet[c].flg) {
			bullet[c].flg  = true;
			bullet[c].bulletx = player.Playerx + 24;
			bullet[c].bullety = 400;
		}
	}
}

void Bullet::Draw()
{
	DrawCircle(player.Playerx, player.Playery,10,0x0000ff);
}

void Bullet::GetDamage()
{
}
