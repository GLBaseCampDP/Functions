// DecltypeReturn.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int z = 1;
decltype(auto) g() 
{ 
	int x = 0;
	const int zz = 1;  
	//return zz; 
	//return 1;
	//return z;
	return x;
} 

int main()
{
    return 0;
}

