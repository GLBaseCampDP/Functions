// Locals.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
#define OUT cout << " main -\t ::i = " <<\
 ::i << " i = " << i << " j = " << j << '\n';
int i = 10;

int& f() {
	static int s = 0;
	int i = -10;
	s++;	i++; 	::i++;
	cout << " f -\t ::i = " << ::i <<
		" i = " << i << " s = " << s << endl;
	return s;
}


void main() {
	int i = 15;
	int& j = f(); OUT;
	f(); OUT;
	i++;          ::i++;
	f(); OUT;
	system("pause");
}

