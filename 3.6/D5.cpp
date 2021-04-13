#include "D5.h"

D5::D5()
	:d5(1), D1(), D2(), D3() {}

D5::D5(int x, int y, int z, int y1, int z1, int y2, int z2)
	: D1(y, z), D2(y1, z1), D3(y2, z2)
{
	d5 = x;
}
void D5::show_D5()
{
	cout << "class D5:" << endl;
	//show_B();
	show_D1();
	show_D2();
	show_D3();
	cout << "show_D5()" << endl
		<< "D5::d5 = " << d5 << endl << endl;
}