#pragma once
#include "B.h"

class D3 : private B
{
	int d3;
public:
	D3();
	D3(int, int);
	void show_D3();
};
