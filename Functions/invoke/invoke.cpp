// invoke.cpp: определяет точку входа для консольного приложения.
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
	// виклик функції
	std::invoke(print, -9);

	// виклик лямбди
	std::invoke([]() { print(42); });

	// виклик vtnjlf
	const A a(314159);
	std::invoke(&A::print, a, 1);

	// доступ до поля класу 
	std::cout << "num_: " << std::invoke(&A::j, a) << '\n';

	// виклик функтора
	std::invoke(Print(), 18);
}