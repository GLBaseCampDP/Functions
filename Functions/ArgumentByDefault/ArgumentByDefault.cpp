// ArgumentByDefault.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
double square(double d1, int i = 0) 
{
	if (i == 0) return 3.14*d1*d1;
	else return d1*d1;
}

void main()
{
	;
	std::cout << "Площа круга: " << square(1) << '\n';
	std::cout << "Площа квадрата: " << square(1, 1) << '\n';
}
