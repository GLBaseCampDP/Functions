// __func__use.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "iostream"

auto out(int i)
{
	
	if (i == 1)
		return 0;
	else
	{
		std::cout << __func__ << ' ';
		return out(i - 1);
	}
}

void main()
{
	out(1000);
	system("pause");

}


