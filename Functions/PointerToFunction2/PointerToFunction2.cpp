// PointerToFunction2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

typedef void(*T)(void);
T p;

void f(void) {
	std::cout << "F1";
}
void g(void) {
	std::cout << "F2";
}

void main() {
	p = f;
	p();
	p = g;
	p();
}
