#include "Player.h"
#include <iostream>

//コンストラクタ（初期化）
Player::Player()
{
	hp = 300; //HP
	atk = 50; //攻撃力
	def = 22; //防御力
}

//HP を表示
//引数：なし
//戻値：なし
void Player::DispHp()
{
	std::cout << "プレイヤーＨＰ＝" << hp << "\n";
}

//攻撃
//引数：敵の防御力
//戻値：ダメージ量
int Player::Attack(int i)
{
	printf("プレイヤーの攻撃！ ");
	return atk - i / 2;
}

//ダメージを受ける（HP を減らす）
//引数：受けるダメージ量
//戻値：なし
void Player::Damage(int i)
{
	std::cout << "プレイヤーは" << i << "のダメージ\n";
	hp -= i;
}

//防御力を取得（アクセス関数）
//引数：なし
//戻値：防御力
int Player::GetDef()
{
	return def;
}
//戦闘不能判定
//引数：なし
//戻値：戦闘不能＝true その他＝false

bool Player::IsDead()
{
	//HP が 0 以下だったら true を返す
	if (hp <= 0)
		return true;
	//それ以外なら false を返す
	return false;
}
