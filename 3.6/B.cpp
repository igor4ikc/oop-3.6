#include "B.h"

B::B()
	:b(1) {};
B::B(int x)
{
	b = x;
}
void B::show_B()
{
	cout << "class B:" << endl;
	cout << "show_B()" << endl
		<< "B::b = " << b << endl << endl;
}