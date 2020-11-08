#pragma once

#include <cstddef>

template <typename T>
void map(T arr[], unsigned long size, void (*change)(T& elem))
{
	for (unsigned long i = 0; i < size; ++i)
	{
		change(arr[i]);
	}
}
