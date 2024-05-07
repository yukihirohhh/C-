#pragma once
class Enemy
{
	int hp;
	int atk;
	int def;
public:
	Enemy();
	void DispHp();
	int Attack(int i);
	void Damage(int i);
	int GetDef();
	bool IsDead();

};
