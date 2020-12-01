#pragma once

template <typename T, unsigned int size>
T* createArr(T(*gen)())
{
	T* arr = new T[size];
	for (int i = 0; i < size; ++i)
		arr[i] = gen();
	return arr;
} 