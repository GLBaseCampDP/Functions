// StructReturn.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

struct A {
	int i, j;
};

A a1 = { 1, 2 }, a2;

A f() {
	return a1;
}

void main() {
	a1 = f(); // ���� a2 ��������� ���������� � a1
}
