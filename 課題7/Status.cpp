#include "Status.h"

bool Status::SetLv(int i)
{
	lv = i;
	return true;
}

void Status::Calc()
{
	if (lv > 99) {
		lv = 99;
	}

	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}

int Status::GetHp()
{
	return hp;
}

int Status::GetAtk()
{
	return atk;
}

int Status::GetDef()
{
	return def;
}