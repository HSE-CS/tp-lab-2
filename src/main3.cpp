#include <iostream>
#include "task3.h"

template <typename T> T change(T a)
{
	return a + 10;
}
int main()
{
	const size_t n = 4;
	int* arr = new int[4]{ 2034, 123, -842, 4932 };
	map<int, n>(arr, change);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	return 0;
}