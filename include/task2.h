#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template<typename T, size_t n>
T* createArr( T (*gen)())
{
	T* mass = new T[n];

	for (int i = 0; i < n; i++)
	{
		mass[i] = gen();
	}
	return mass;
}