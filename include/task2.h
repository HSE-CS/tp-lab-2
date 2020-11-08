#ifndef TASK2_H
#define TASK2_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template<typename T, size_t n>
T* createArr(T(*gen)())
{
	T* a = new T[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = gen();
	}
	return a;
}