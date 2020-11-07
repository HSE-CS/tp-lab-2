#include <iostream>
#include "task3.h"

using namespace std;

template <typename T>
T change(T t)
{
	return t*2;
}

int main()
{
	const int size = 5;
	int arr[size] = { 23, 4, 1, 6, 46 };

	map<int, size>(arr, change);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}