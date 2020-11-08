#include "task2.h"
#include <iostream>

template<class T>
T gen() {
	static int t = 48;
	return t++;
}

int main()
{
	const size_t n = 4;
	int* arr;
	arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
