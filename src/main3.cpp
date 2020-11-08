#include "task3.h"

int main()
{
	const size_t arraySize = 10;
	int array[arraySize] = { 1, 2, 0, 9, 4, 7, 1, 0, 8, 3 };
	map<int, arraySize>(array, changeMod2);
	for (size_t i = 0; i < arraySize; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	return 0;
}