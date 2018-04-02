// ArgumentByDefault3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int f(int, int);
int f(int, int = 8);



void g(int a = f(1)) { 
}

void h(int a = ([] { return 1; })() ) {
}



int main()
{
	g();
	return 0;
}
int f(int a, int c) { return 1; }



