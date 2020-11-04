#include "task3.h"
#include <iostream>

using namespace std;

template<class T>
T change(T val)
{
	return val + 1;
}

int main() {
	const size_t n = 10;
	int arr[n]{ 100, 8, -5, -2, 0, 9, 0, 100, -7, -5 };
	map<int, n>(arr, change);
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
}