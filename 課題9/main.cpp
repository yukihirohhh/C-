#include "Sample.h"
void Function();
#include <iostream>
int main()
{
	std::cout << "プログラム開始\n";
	Function();
	std::cout << "プログラム終了\n";
}
void Function()
{
	std::cout << "関数が呼び出されました\n";

	Sample instSample;

	instSample.menberFunc();
}

// 予想 >>
// プログラム開始
// 関数が呼び出されました
// コンストラクタが呼び出されました
// クラスのメンバ関数が呼び出されました
// デストラクタが呼び出されました
// プログラム終了

// 実行結果 >>
//プログラム開始
//関数が呼び出されました
//コンストラクタが呼び出されました
//クラスのメンバ関数が呼び出されました
//デストラクタが呼び出されました
//プログラム終了