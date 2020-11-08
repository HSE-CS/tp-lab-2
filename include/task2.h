#pragma once
#include <cstddef>
using namespace std;
template <typename T, size_t N>
T* createArr(T (*gen)())
{
	auto arr = new T[N];
	for (size_t i = 0; i < N; ++i)
		arr[i] = gen();
	return arr;
}
