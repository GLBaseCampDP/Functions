// VAList.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <cstdarg>

void f(int i, ...)
{
	va_list param;// ���������� ��������� �� ������ ���������
	va_start(param, i);	// �������� ��������� ���������
	for (int j = 1; j <= i; j++)
		std::cout << j << "-� �������� - " << va_arg(param, int) << "\n";
	va_list param2;
	va_copy (param2, param);
	va_end(param); 	//������� ������
}
void main()
{
	f(1, 1);
	f(2, 1, 2);
	f(3, 1, 2, 3);
}
