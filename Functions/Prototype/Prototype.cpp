// Prototype.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int f(char);// короткий прототип - оголошення функції
			// int f(char a); повний прототип 

int g(char) { // протип не обов'язковий
	return 1;
}

void main() {
	int i = f('c');
	g('c');
}

int f(char a) { // реалізація функція 
	a++; return a;
}
