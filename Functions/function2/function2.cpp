// function2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <functional>
#include <iostream>
struct A {
	A(int num) : j(num) {}
	void out(int i) const { std::cout << j + i << '\n'; }
	int j;
};


void main() {
	
	// збереження і виклик методу
	std::function<void(const A&, int)> f = &A::out;
	A a(314159);
	f(a, 1);
}
