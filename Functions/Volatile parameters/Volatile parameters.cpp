// Volatile parameters.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

void F(volatile int);

void F(int a)
{
	a++;
}

int i;
const int j = 1; // ���������� ���������
int main()
{
	F(i); // �������� ���������� 
	F(j);// �������� ���������� 
	return 0;
}


