#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"

const unsigned int size = 6;
int main() {

	int a[size] {1, 2, 3, 4, 5, 6};
	map<int, size>(a, change);
	for (size_t i = 0; i < size; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n\n";


	double b[size]{ 1.5, 2.2, 3.0, 4.1, 5.54, 6.8 };
	map<double, size>(b, change);
	for (size_t i = 0; i < size; ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << "\n\n";


	char c[size]{ 'a','b', 'c', 'd', 'e', 'f' };
	map<char, size>(c, change);
	for (size_t i = 0; i < size; ++i) {
		std::cout << c[i] << " ";
	}
	std::cout << "\n\n";

	char* v[size]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	map<char*, size>(v, change);
	for (size_t i = 0; i < size; ++i) {
		std::cout << v[i] << " ";
	}
	std::cout << "\n\n";





}
