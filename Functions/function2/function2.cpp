// function2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	
	// ���������� � ������ ������
	std::function<void(const A&, int)> f = &A::out;
	A a(314159);
	f(a, 1);
}
