// invoke.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


#include <functional>
#include <iostream>

struct A {
	A(int num) : j(num) {}
	void print(int i) const { std::cout << j + i << '\n'; }
	int j;
};

void print(int i)
{
	std::cout << i << '\n';
}

struct Print {
	void operator()(int i) const
	{
		std::cout << i << '\n';
	}
};

int main()
{
	// ������ �������
	std::invoke(print, -9);

	// ������ ������
	std::invoke([]() { print(42); });

	// ������ vtnjlf
	const A a(314159);
	std::invoke(&A::print, a, 1);

	// ������ �� ���� ����� 
	std::cout << "num_: " << std::invoke(&A::j, a) << '\n';

	// ������ ��������
	std::invoke(Print(), 18);
}