// Prototype.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int f(char);// �������� �������� - ���������� �������
			// int f(char a); ������ �������� 

int g(char) { // ������ �� ����'�������
	return 1;
}

void main() {
	int i = f('c');
	g('c');
}

int f(char a) { // ��������� ������� 
	a++; return a;
}
