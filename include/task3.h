#pragma once
#include <cstring>

template <typename T, size_t N>
void map(T(&a)[N], T(*change)(T))
{
	for (size_t i = 0; i < N; i++)
		a[i] = change(a[i]);
	
	return;
}