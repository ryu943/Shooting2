#include<math.h>
#include "SpehereCollider.h"



SphereCollider::SphereCollider()
{
	radius = 5;
}

bool SphereCollider::CheckCollision(SphereCollider* spherecollider)const
{
	bool ret = false;//�Ԃ�l
	float distance;	//���S���W�̋���

	//���S���W�̋����̌v�Z
	distance = sqrtf(powf(spherecollider->GetLocation().x - location.x, 2) + powf(spherecollider->GetLocation().y - location.y, 2));

	if (distance < radius + spherecollider->GetRadius()) //�����蔻��
	{
		ret = true;
	}

	return ret;
}

//bool SphereCollider::HitBox(BoxCollider boxCollider) const {
//	Box box;
//	boxCollider.GetSize(box.top, box.bottom, box.left, box.right);
//	float width = box.right - box.left;
//	float height = box.bottom - box.top;
//	float centerX = box.right - width / 2.f;
//	float centerY = box.bottom - height / 2.f;
//
//	float distance = sqrtf(powf(location.x - centerX, 2) + powf(location.y - centerY, 2));
//	float distanceX = sqrtf(powf(location.x - centerX, 2));
//	float distanceY = sqrtf(powf(location.y - centerY, 2));
//
//	if (distanceX < width / 2 + radius && distanceY < height / 2 + radius) {
//		return true;
//	}
//
//	return false;
//}

int SphereCollider::GetRadius()const
{
	return radius;
}

Location SphereCollider::GetLocation()
{
	return location;
}

