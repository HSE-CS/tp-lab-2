#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstring>
#include <cstdlib>
#include <stdlib.h>

template <class T, size_t size>
T* createArr(T(*gen) ()) {
	T* newarr = new T[size];

	for (int i = 0; i < size; i++)
		newarr[i] = gen();

	return newarr;
}

template <class T>
T generator() {
	return rand() % 89 + 66;
}

template <>
char generator() {
	return '0';
}

#endif