#ifndef TASK3_H
#define TASK3_H
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <cstring>


template <typename T, const size_t n> void map(T* array, T(*fun)(T))
{
	for (size_t i = 0; i < n; i++)
	{
		array[i] = fun(array[i]);
	}
}

#endif
