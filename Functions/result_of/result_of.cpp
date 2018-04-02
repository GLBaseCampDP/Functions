// result_of.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// result_of example
#include <iostream>
#include <type_traits>


int f(int) { return 1; }                            // function
typedef int(&R)(int);                             // function reference
typedef int(*F)(int);                             // function pointer
using Al = int(*) (int, int);
#define OUT(C) std::cout << #C<<": " << std::is_same<int, C>::value << std::endl;
#define TYPE(T, N) typedef std::result_of<T>::type N;  // int



int main() {
	TYPE(decltype(f)&(int), A);
	TYPE(R(int), B);
	TYPE(F(int), C);
	TYPE(Al(int, int), D);
	//typedef std::result_of<decltype(f)&(int)>::type A;  // int
	//typedef std::result_of<R(int)>::type B;         // int
	//typedef std::result_of<F(int)>::type C;         // int
	//typedef std::result_of<Al(int, int)>::type D;         // int
	

	std::cout << std::boolalpha;
	
	OUT(A); OUT(B); OUT(C); OUT(D)
	/*std::cout << "A: " << std::is_same<int, A>::value << std::endl;
	std::cout << "B: " << std::is_same<int, B>::value << std::endl;
	std::cout << "C: " << std::is_same<int, C>::value << std::endl;
	std::cout << "D: " << std::is_same<int, D>::value << std::endl;
	*/

		
	return 0;
}