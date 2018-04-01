// Function Alias.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

// Визначення аліаса
using F = int(*) (int, int);

// Визначення функцій
int add(int i, int j) { return i + j; }
int mult(int i, int j) { return i * j; }


// Використання аліаса для створення змінної
F f = mult;

void main()
{
	std::cout << add(1, 1) << " " << f(2, 2) << " ";
	f = mult;
	std::cout << " " << f(3, 3) << '\n';
	
}

