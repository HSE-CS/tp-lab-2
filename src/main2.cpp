#include <iostream>
#include "task2.h"

int main() {


	/*const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++) std ::cout << arr[i] << " ";
	std::cout << "\n";
	delete[] arr;*/

	const size_t n = 5;
	char* arr;
	arr = createArr<char, n>(gen);
	for (size_t i = 0; i < n; i++) std ::cout << (int) arr[i] << " ";
	std::cout << "\n";
	delete[] arr;
	
	return 0;
}