#include "Circle.h"

Circle::Circle(void)
{
	PI = 3.141592;
}

float Circle::Menseki(float r)
{
	return r * r * PI;
}
