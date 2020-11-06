#include<iostream>
//#include "../include/task1.h"
#include "task1.h"

int main() {
	int a[]{ 3, 1, 5, 13, 4, 2};
	msort(a, 6);
	for (size_t i = 0; i < 6; i++){
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	double b[]{ 3.1, 1.9, 5., 13., 4., 1.2 };
	msort(b, 6);
	for (size_t i = 0; i < 6; i++) {
		std::cout << b[i] << " ";
	}
	std::cout << "\n";
	char* c[6]{ (char*)"kek", (char*)"kak", (char*)"k", (char*)"ee", (char*)"kkk", (char*)"auauau" };
	msort(c, 6);
	for (size_t i = 0; i < 6; i++) {
		std::cout << c[i] <<" ";
	}
	return 0;
}