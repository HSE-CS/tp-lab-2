#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"

const unsigned int size = 6;
int main() {

	int* array = new int[size]{ 5, 4, 2, -1, 3, 1 };
	char* a[size]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };

	int* point1 = msort(array, size);
	for (size_t i = 0; i < size; ++i) {
		std::cout << point1[i] << " ";
	}

	std::cout << "\n\n";

	char** point2 = msort(a, size);
	for (size_t i = 0; i < size; ++i) {
		std::cout << point2[i] << " ";
	}

	return 0;
}
