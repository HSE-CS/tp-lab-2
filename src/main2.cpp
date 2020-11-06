#include<iostream>
//#include "../include/task2.h"
#include "task2.h"

int main() {
	const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gena);
	for (size_t i = 0; i < n; i++) {
		std::cout << arr[i]<<" ";
	}
	return 0;
}