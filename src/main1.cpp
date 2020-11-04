#include <iostream>
#include "task1.h"

int main() {
	const int size = 9;
	int* arr = new int[size]{ 2,4,5,3,1, 0, 79 ,-5, 8 };
	msort(arr,size);
	for (size_t i = 0; i < size; i++)
	{
	std::cout << arr[i] << ' ';
	}
	delete[] arr;
}