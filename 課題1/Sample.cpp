#include "Sample.h"
#include <iostream>

void Sample::Input()
{
	a = 10;
	b = 3;
}

void Sample::Plus()
{
	c = a + b;
}

void Sample::Disp()
{
	std::cout << "�ϐ�C�̒l��" << c << "\n";
}
