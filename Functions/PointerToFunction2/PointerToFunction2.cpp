// PointerToFunction2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

typedef void(*T)(void);
T p;

typedef void(&R)(void);

void f(void) {
	std::cout << "F1";
}
void g(void) {
	std::cout << "F2";
}
R r = g;

void main() {
	p = f;
	p();
	p = g;
	p();
	r();
	
}
