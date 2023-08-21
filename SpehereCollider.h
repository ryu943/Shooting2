#pragma once

struct Location
{
	float x; //���S���W(x)
	float y; //���S���W(y)

};

class SphereCollider
{
protected:
	int radius; //���a
	Location location;//�����蔻��
public:
	SphereCollider();//�R���X�g���N�^ 

	int GetRadius() const; //���a�̎擾

	bool CheckCollision(SphereCollider* spherecollider)const; //�����蔻��

	//bool HitBox(class BoxCollider boxCollider) const;

	Location GetLocation(); //���S���W���擾


};

