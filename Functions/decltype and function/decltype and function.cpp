// decltype and function.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
int F(int, char) { return 1; }

int main()
{
	decltype(F) *f = F;
	f(1, 'a');
    return 0;
}

