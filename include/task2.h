#pragma once
#include <cstring>

template <typename T, size_t N>
T* createArr(T(*gen)())
{
	T* a = new T[N];
	for (size_t i = 0; i < N; i++)
		a[i] = gen();

	return a;

}