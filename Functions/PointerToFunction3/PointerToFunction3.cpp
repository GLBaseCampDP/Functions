// PointerToFunction3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

// ������������� � ����'�����
typedef void __declspec(dllexport) (*T)(void); // ��� ��������
typedef void  TF(void); // ��� �������
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

