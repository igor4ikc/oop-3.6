#include "D4.h"
D4::D4()
	:d4(1), D1() {}

D4::D4(int x, int y, int z)
	: D1(y, z)
{
	d4 = x;
}
void D4::show_D4()
{
	cout << "class D4:" << endl;
	show_B();
	show_D1();
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}