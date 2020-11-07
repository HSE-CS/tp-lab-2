#ifndef TASK2_H
#define TASK2_H
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <cstring>



template <typename T, const size_t n> T* createArr(T (*fun)())
{
	T* new_arr = new T[n];
	for (size_t i = 0; i < n; i++)
		new_arr[i] = fun();
	return new_arr;
}

#endif



