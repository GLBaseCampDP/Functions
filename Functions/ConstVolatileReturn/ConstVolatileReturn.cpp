// ConstVolatileReturn.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

volatile int F();
const int f();

volatile int F() { // volatile � ����'�������
	int a = 0;  a++;
	return a;
}




const int f() {  // const � ����'�������
	int a = 0;  a++;
	return a; // ���������� ����������
}

int i;
const int j = 1; // ���������� ���������

void main() {
	F();
	// j = F();  - ����������
	i = F();// 
	f();
	// j = f(); - ����������  
	i = f();
	const int z = f();
}
