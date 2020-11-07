#pragma once
#ifndef TASK2_H
#define TASK2_H
#include <iostream>
#include <time.h>



template <typename T, size_t size>
T* createArr(T(*gen)()) {
	T* arr = new T[size];
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = gen();
	}
	return arr;
}
#endif // !TASK2_H

