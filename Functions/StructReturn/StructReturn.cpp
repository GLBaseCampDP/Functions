// StructReturn.cpp: определяет точку входа для консольного приложения.
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
	a1 = f(); // поля a2 побайтово скопіюються в a1
}
