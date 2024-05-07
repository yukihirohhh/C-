#include "TriangleClass.h"
#include <iostream>

void TriangleClass::Input()
{
	teihen = 20.0f;
	takasa = 15.0f;
}

void TriangleClass::Calc()
{
	menseki = teihen * takasa / 2.0f;
}

void TriangleClass::Disp()
{
	std::cout << "ŽOŠpŒ`‚Ì–ÊÏ=" << menseki << "\n";
}
