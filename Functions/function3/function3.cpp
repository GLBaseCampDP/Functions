// function3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <functional>
#include <iostream>
using namespace std;

function<int()> f()
{
	int x = 0;
	return [=]() mutable { return ++x; };
}

template< class F, class... Args>
std::invoke_result_t<F, Args...> invoke(F&& f, Args&&... args) noexcept;


int main()
{
	auto fun = f();
	for (int i = 0; i < 5; ++i)
	{
		cout << fun() << endl;
	}

    return 0;
}

