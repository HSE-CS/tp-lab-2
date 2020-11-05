#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

const unsigned int size = 6;
int main() {

	int* b;
	b = createArr<int, size>(gen);
	for (size_t i = 0; i < size; ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << "\n\n";

	char* c;
	c = createArr<char, size>(gen);
	for (size_t i = 0; i < size; ++i) {
		std::cout << c[i] << " ";
	}
	std::cout << "\n\n";

	char** a;
	a = createArr<char*, size>(gen);
	for (size_t i = 0; i < size; ++i){
		std::cout << a[i] << " ";
	}
	std::cout << "\n\n";
	

	return 0;
}
