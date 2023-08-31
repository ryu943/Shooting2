#include "Bullet.h"
#include "Define.h"
Bullet::Bullet()
{
	speed = 60;
	cnt = 0;
	bflg = FALSE;
	c = 0;

	for (int i = 0; i < 20; i++) {
		bullet[i].damage = 0;
		bullet[i].angle = 0;
		bullet[i].acceleration = 0;
		bullet[i].anglulVelocity = 0;
		bullet[i].bulletx = 0;
		bullet[i].bullety = 0;
		bullet[i].flg = 0;
		bullet[i].oneFlg = false;
	}

}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
	for (c = 0; c < 20; c++) {
		if (inputkey.GetKey(PAD_INPUT_B) == TRUE) {
			if (bullet[c].oneFlg == false) {
				bullet[c].bulletx = player.Playerx + 24;
				bullet[c].bullety = player.Playery;
				bullet[c].oneFlg = true;
			}
		}
		if (bullet[c].oneFlg == true) {
			bullet[c].bulletx += speed;
		}


		if (bullet[c].bulletx > SCREEN_WIDTH) {
			bullet[c].oneFlg = false;
		}
		break;
	}
	

	
	//c++;
	//if (c >= 20) {
	//	c = 0;
	//}
}

void Bullet::Draw() const 
{
	DrawCircle(bullet->bulletx,bullet->bullety, 10, 0x0000ff);
}

void Bullet::GetDamage()
{
}
