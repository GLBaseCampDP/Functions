// Volatile parameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void F(volatile int);

void F(int a)
{
	a++;
}

int i;
const int j = 1; // оптимізація розміщення
int main()
{
	F(i); // заборона оптимізація 
	F(j);// заборона оптимізація 
	return 0;
}


