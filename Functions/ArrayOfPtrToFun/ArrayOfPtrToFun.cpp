// ArrayOfPtrToFun.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define MF(N) void N(){  std::cout << "Виклик функції "#N << "\n"; }

MF(a); MF(b); MF(c); MF(d);

void(*mf[])() = { a, b, c, d };

void main() {
	while (1) {
		std::cout << " Inputing: from a to d \n";
		char c;
		std::cin >> c;
		if (c == 'q') break;
		if ((c >= 'a') && (c <= 'd'))
			(*mf[c - 'a'])();
	}
}


