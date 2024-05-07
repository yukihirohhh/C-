#include "Sample.h"

Sample* a;

int main()
{
	a = new Sample;

	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}