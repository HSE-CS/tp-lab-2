#include <iostream>

using namespace std;

template <typename T, size_t n> void map(T arr[], T(*change)(T))
{
	for (size_t i = 0; i < n; ++i)
		arr[i] = change(arr[i]);
}

template <typename T> T change(T el)
{
	return el + 1;
}
