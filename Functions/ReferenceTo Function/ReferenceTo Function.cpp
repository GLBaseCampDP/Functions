// ReferenceTo Function.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


#include "stdafx.h"

#include <iostream>

void f(void) {
	std::cout << "F1";
}

void g(void) {
	std::cout << "F2";
}

void(&r)(void) = f;

void main() {
	r();
	// r = g; - error
}


