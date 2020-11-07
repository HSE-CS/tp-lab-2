#include <iostream>
#include <cstring>
#include "task2.h"

int main() {
	const size_t n = 5;
	int* a = createArr<int, n>(gen);

	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}

	return 0;

}