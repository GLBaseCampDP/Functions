// Function Alias.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

// ���������� �����
using F = int(*) (int, int);

// ���������� �������
int add(int i, int j) { return i + j; }
int mult(int i, int j) { return i * j; }


// ������������ ����� ��� ��������� �����
F f = mult;

void main()
{
	std::cout << add(1, 1) << " " << f(2, 2) << " ";
	f = mult;
	std::cout << " " << f(3, 3) << '\n';
	
}

