#pragma once

template <typename T>
void map(T arr[], size_t size, void (*change)(T& elem))
{
	for (size_t i = 0; i < size; ++i)
	{
		change(arr[i]);
	}
}
