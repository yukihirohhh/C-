#include "Fat.h"
#include <iostream>

void Fat::SetName(std::string n)
{
	name = n;
}

void Fat::SetHeight(double h)
{
	height = h;
}

void Fat::SetWeight(double w)
{
	weight = w;
}

double Fat::GetBMI()
{
	return bmi;
}

void Fat::Calc()
{
	bmi = weight / (height * height);
}

void Fat::Disp()
{
	std::cout << name << "‚Ì BMI‚Í" << bmi << "‚Å‚·" << std::endl;
}
