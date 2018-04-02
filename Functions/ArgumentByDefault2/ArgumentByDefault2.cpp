// ArgumentByDefault2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void f(int, int, int);
void f(int, int, int = 8);
void f(int, int = 7,int);



void g() {
	void f(int = 6, int = 7, int = 8);
	f();
}



int main()
{
	f(1, 2, 3);
	f(1, 2);
	f(1);
	// f() - error
    return 0;
}
void f(int a, int b, int c) {}

