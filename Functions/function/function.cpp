// function.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <functional>
#include <iostream>

void print(int i) { std::cout << i << '\n'; }

void main() {
	// ���������� � ������ �������
	std::function<void(int)> f = print;
	f(-9);
	// ���������� � ������ ������ �������
	std::function<void()> f_l = []() { print(42); };
	f_l();
	// ���������� ���������� � ������ ��'������� ������
	std::function<void()> f_b = std::bind(print, 31337);
	f_b();
}


