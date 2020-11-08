#include <iostream>
#include "task2.h"

using namespace std;

template <class T> T gen()
{
	return 1 + rand() % 100;
}

int main()
{
	const size_t n{ 10 };
	int *array = createArr<int, n>(gen);
	for (size_t i = 0; i < n; ++i)
		cout << array[i] << endl;
	return 0;
}