#include "D3.h"
D3::D3()
	:d3(1), B() {}

D3::D3(int x, int y)
	: B(y)
{
	d3 = x;
}
void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_B();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}