#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"

const unsigned int size = 6;
int main() {

	int* array = new int[size] { 5, 4, 2, -1, 3, 1 };
	char* a[size]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };

	msort(array, size);
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << " ";
	}

	std::cout << "\n\n";

	msort(a, size);
	for (size_t i = 0; i < size; ++i) {
		std::cout << a[i] << " ";
	}

	return 0;
}

