// AutoRecurcReturn.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


auto sum(int i)
{

	if (i == 1)
		return i;              // тип поверення визначено
	else
		return sum(i - 1) + i; 
}

int main()
{
	sum(10);
	
    return 0;
}

