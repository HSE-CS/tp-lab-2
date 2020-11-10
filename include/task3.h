#pragma once

template<typename T, unsigned int size>
void map(T(&arr)[size], T(*change)(T))
{
	for (int i = 0; i < size; ++i)
		arr[i] = change(arr[i]);
} 