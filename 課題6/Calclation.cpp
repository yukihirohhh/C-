#include "Calclation.h"
#include <iostream>


void Calclation::SetA(float _val)
{
	a = _val;
}

void Calclation::SetB(float _val)
{
	b = _val;
}

void Calclation::Disp()
{
	std::cout << a << " + " << b << " = " << a + b << "\n";
	std::cout << a << " - " << b << " = " << a - b << "\n";
}
