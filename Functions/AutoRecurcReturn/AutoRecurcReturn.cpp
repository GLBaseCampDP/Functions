// AutoRecurcReturn.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


auto sum(int i)
{

	if (i == 1)
		return i;              // ��� ��������� ���������
	else
		return sum(i - 1) + i; 
}

int main()
{
	sum(10);
	
    return 0;
}

