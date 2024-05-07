#include <iostream>
#include "Data.h"

int main() {

	int i;
	std::cin >> i;

	Data x;

	x.SetValue(i);
	x.Disp();
}

// アクセス関数の必要性
// >> メンバ変数を隠し、メンバ関数を介してアクセスすることでカプセル化をする。