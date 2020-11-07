#ifndef TASK2_H
#define TASK2_H
#include <iostream>
#include <cstring>

template < typename T, size_t SIZE >

T* createArr(T(*gen)()) {

	T* arr = new T[SIZE];

	for (int i = 0; i < SIZE; i++) {

		arr[i] = gen();

	}

	return arr;

}


#endif