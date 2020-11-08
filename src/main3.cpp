#include <iostream>
#include "task3.h"

using namespace std;

template <typename T> T change(T el)
{
	return el + 1;
}

int main()
{
	const size_t n = 5;
	int a[5] = { 1,2,3,4,5 };
	map<int,n>(a, change);
	for (size_t i = 0; i < n; ++i)
		cout << a[i] << endl;
	return 0;
}