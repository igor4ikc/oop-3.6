#pragma once
#include "D1.h"
#include "D2.h"
#include "D3.h"
class D5 : public D1, public D2, private D3
{
	int d5;
public:
	D5();
	D5(int x, int y, int z, int y1, int z1, int y2, int z2);
	void show_D5();
};