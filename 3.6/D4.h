#pragma once

#include "D1.h"

class D4 : private D1
{
	int d4;
public:
	D4();
	D4(int, int, int);
	void show_D4();
};