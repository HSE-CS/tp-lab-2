#pragma once

#include <cstddef>

template <typename T, unsigned long N>
void map(T *arr, T (*change)(T elem))
{
	for (unsigned long i = 0; i < N; ++i)
	{
		arr[i] = change(arr[i]);
	}
}
