// Lyambda 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int main()
{
	int x, y;
	auto i = [&x, y](int k)
	{
		x = 10;
		k = 20;
		return x + y + k;
	}(x);
    return 0;
}






