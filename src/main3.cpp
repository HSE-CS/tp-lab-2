#include "task3.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

template <typename T> T change(T value)
{
	return value + 5;
}

int main()
{
	const size_t n = 5;
	double arr[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr, change);
	for (size_t i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
	return 0;
}