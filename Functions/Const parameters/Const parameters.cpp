// Const parameters.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

void F(volatile int );
void f(const int);

void f(int a)
{
	// a++; - �������� ����

}

void F(int a)
{
	 a++; 
}

int i;
const int j = 1; // ���������� ���������
int main()
{
	f(i); // ���������� ����������� ��������
	f(j); 
    return 0;
}

