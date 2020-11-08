#include "task3.h"
#include <iostream>

template<class T>
T change(T val)
{
	return val + 1;
}

int main()
{
	const size_t n = 4;
	int arr[n]{ 10, 20, 30, 40 };
	map<int, n>(arr, change);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}