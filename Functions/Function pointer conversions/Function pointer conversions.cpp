// Function pointer conversions.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

void(*p)() = []()->void {};
// void(**pp)() noexcept = &p; // error: 

void(*p1)() noexcept = []() noexcept ->void {};
void(**pp2)() = &p1; 

int main()
{
    return 0;
}

