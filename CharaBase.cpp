#include "CharaBase.h"
#include <DxLib.h>
#include "PadInput.h"

CharaBase::CharaBase()
{
	
}

void CharaBase::Update()
{


}

void CharaBase::Draw() const
{
	DrawCircle(650, 600, 20, 0x0000ff, TRUE);
}

void CharaBase::Hit()
{
}
