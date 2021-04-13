#pragma once
#include "B.h"

class D2 : private B
{
	int d2;
public:
	D2();
	D2(int, int);
	void show_D2();

};