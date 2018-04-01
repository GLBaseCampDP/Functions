// Const parameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void F(volatile int );
void f(const int);

void f(int a)
{
	// a++; - контроль коду

}

void F(int a)
{
	 a++; 
}

int i;
const int j = 1; // оптимізація розміщення
int main()
{
	f(i); // оптимізація передавання значення
	f(j); 
    return 0;
}

