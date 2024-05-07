#include <iostream>
#include "Status.h"
int main()
{
	int lv;
	Status st;

	while (true) {
		std::cout << "レベルを入力⇒";
		std::cin >> lv;
		
		if (lv <= 0)
			break;

		st.SetLv(lv);
		st.Calc();
		std::cout << " ＨＰ = " << st.GetHp() << "\n";
		std::cout << "攻撃力= " << st.GetAtk() << "\n";
		std::cout << "防御力= " << st.GetDef() << "\n";
	}
	std::cout << "プログラムを終了します\n";
}