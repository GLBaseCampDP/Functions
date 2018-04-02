// is_function.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <type_traits>

int f(int) { return 1; }

int main()
{
	std::cout << std::boolalpha;
	std::cout << std::is_function<decltype(f)>::value << '\n';
}
