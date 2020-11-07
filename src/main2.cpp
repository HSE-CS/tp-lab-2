#include "task2.h"
#include <iostream>

template <typename T>
T gen() {
	static int x = 0;
	return x++;
}

int main() {

    const size_t size = 16;
    double* array;
    array = createArr<double, size>(gen);
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }

	return 0;
}