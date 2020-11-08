#include <iostream>
#include "task2.h"
using namespace std;

template <class T> T gen()
{
	return 1 + rand() % 100;
}

int main()
{
	const size_t N{ 10 };
	int* array = createArr<int, N>(gen);
	for (size_t i = 0; i < N; ++i)
		cout << array[i];
	return 0;
}