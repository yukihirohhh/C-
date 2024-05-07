#include "Game.h"
#include "Enemy.h"
#include "Player.h"
#include <iostream>

Game::Game()
{
}

Game::~Game()
{
}

void Game::GameLoop()
{
	Player pl; //プレイヤークラスのインスタンス
	Enemy ene; //敵クラスのインスタンス
	int damage; //攻撃した時のダメージ量
	//どちらかの HP が０以下になるまでループ
	for (int turn = 1; ; turn++)
	{
		std::cout << "\n＝＝＝＝＝＝" << turn << "ターン目＝＝＝＝＝＝\n";
		//それぞれのＨＰを表示
		pl.DispHp();
		ene.DispHp();
		//主人公の攻撃
		damage = pl.Attack(ene.GetDef()); //攻撃処理（ダメージ量計算）
		ene.Damage(damage); //敵にダメージを与える（HP を減らす）
		if (ene.IsDead()) break; //敵が戦闘不能になったら終了
		//敵の攻撃
		damage = ene.Attack(pl.GetDef()); //攻撃処理（ダメージ量計算）
		pl.Damage(damage); //ﾌﾟﾚｲﾔｰにﾀﾞﾒｰｼﾞを与える（HP を減らす）
		if (pl.IsDead()) break; //プレイヤーが戦闘不能になったら終了
	}
	std::cout << "終了\n";
}
