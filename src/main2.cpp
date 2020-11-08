#include "task2.h"

template < typename T >

T gen() {

	return rand() % (100 + 1);

}

int main() {

	const int size = 5;

	auto arr = createArr<int, size>(gen);

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;

}