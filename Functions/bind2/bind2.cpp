// bind2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <functional>
using namespace std;
using namespace std::placeholders;


void main() {
	auto f = [](int i, char c, double d) { return i + (int)c + (int)d; };
	auto b = bind(f, _1, 'a', 1.2);
	auto b2 = bind([](int) { return 1; }, _1);
	b(7);
	b2(7);
}