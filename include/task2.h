#ifndef TASK2_H
#define TASK2_H
#include <string.h>

template <typename T, size_t n> T* createArr(T (*gen)())
{
	T* arr = new T[n]{ 0 };
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = gen();
	}
	return arr;
}

#endif