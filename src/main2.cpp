#include "task1.h"
#include <iostream>

int main()
{
	const size_t n = 5;
	char** arr = createArr<char*, n>(gen);
	
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";

	return 0;
}