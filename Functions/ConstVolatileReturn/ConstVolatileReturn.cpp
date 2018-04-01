// ConstVolatileReturn.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

volatile int F();
const int f();

volatile int F() { // volatile є обов'язковим
	int a = 0;  a++;
	return a;
}




const int f() {  // const є обов'язковим
	int a = 0;  a++;
	return a; // оптимізація повернення
}

int i;
const int j = 1; // оптимізація розміщення

void main() {
	F();
	// j = F();  - заборонено
	i = F();// 
	f();
	// j = f(); - заборонено  
	i = f();
	const int z = f();
}
