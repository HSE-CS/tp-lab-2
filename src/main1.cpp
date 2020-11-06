#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include "../include/task1.h"
#include "task1.h"

using namespace std;

int main() {
	int a[]{ 3, 1, 5, 13, 4, 2};
	msort(a, 6);
	for (size_t i = 0; i < 6; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	double b[]{ 3.1, 1.9, 5., 13., 4., 1.2 };
	msort(b, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << b[i] << " ";
	}
	cout << "\n";
	char* c[6]{ (char*)"kek", (char*)"kak", (char*)"k", (char*)"ee", (char*)"kkk", (char*)"auauau" };
	msort(c, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << c[i] <<" ";
	}
	return 0;
}