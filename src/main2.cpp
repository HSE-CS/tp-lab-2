#include <iostream>
#include "task2.h"

template <typename T> T gen()
{
	return 'g';
}
int main() 
{
	const size_t n = 5;
	char* arr;
	arr = createArr<char, n> (gen);
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << "  ";
	};
}
