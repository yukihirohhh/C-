#include "CircleClass.h"
#include <iostream>

void CircleClass::Input()
{
	std::cout << "���a�́H";
	std::cin >> r;
}

void CircleClass::Calc()
{
	area = r * r * 3.14f;
}

void CircleClass::Disp()
{
	std::cout << "�~�̖ʐ�=" << area << "\n";
}
