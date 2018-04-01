// PointerToFunction3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

// специфікатори є обов'язкові
typedef void __declspec(dllexport) (*T)(void); // тип вказівник
typedef void  TF(void); // тип функція
T p;

TF* p2;
void f(void)
{
	std::cout << "f";
}

void g(void)
{
	std::cout << "g";
}

void main()
{
	p = f; p();
	p2 = g; g();
}

