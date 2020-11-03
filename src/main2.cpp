#include "task2.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

template <typename T> T gen()
{
	return 10;
}

int main()
{
	const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}