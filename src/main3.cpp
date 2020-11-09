#include <iostream>
#include "task3.h"

template <typename T> T change(T a)
{
	return a + 10;
}
int main()
{
	const size_t n = 5;
	int* arr = new int[5]{ 2034, -456, 5784, 123, -3000 };
	map<int, n>(arr, change);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	return 0;
}