// Lyambda 1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int x, y;
	auto i = [&x, y](int k)
	{
		x = 10;
		k = 20;
		return x + y + k;
	}(x);
    return 0;
}






