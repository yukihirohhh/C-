#include "Sample.h"
#include <iostream>

Sample::Sample()
{
	std::cout << "コンストラクタが呼び出されました\n";
}

Sample::~Sample()
{
	std::cout << "デストラクタが呼び出されました\n";
}

void Sample::menberFunc()
{
	std::cout << "クラスのメンバ関数が呼び出されました\n";
}