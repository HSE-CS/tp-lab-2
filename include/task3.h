#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template<typename T, size_t n>
T* map(T* mass,  T (*change)(T))
{

	for (int i = 0; i < n; i++)
	{
		mass[i] = change(mass[i]);
	}
	return mass;
}