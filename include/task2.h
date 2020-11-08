#pragma once

template <typename T, unsigned long N>
T* createArr(T (*gen)())
{
	auto arr = new T[N];
	for (unsigned long i = 0; i < N; ++i)
		arr[i] = gen();
	return arr;
}
