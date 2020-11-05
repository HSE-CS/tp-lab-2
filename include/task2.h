#ifndef TASK2_H
#define TASK2_H

#include <iostream>
#include <algorithm>
using namespace std;

template <typename T,size_t size>
T* createArr(T(*fun)())
{
	T* result = new T[size];
	for (int i = 0; i < size; i++)
		result[i] = fun();
	return result;
}
#endif