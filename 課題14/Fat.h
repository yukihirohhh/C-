#pragma once
#include <string>

class Fat
{
private:
	std::string name;
	double height;
	double weight;
	double bmi;
public:
	void SetName(std::string n);
	void SetHeight(double h);
	void SetWeight(double w);
	double GetBMI();
	void Calc();
	void Disp();
};