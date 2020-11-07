#ifndef  TASK2_H
#define TASK2_H

#include <iostream>
#include<climits>
#include<string.h>



template <typename T, size_t size> T* createArr(T(*gen)()) {
	T* array = new T[size];
	for (size_t i = 0; i < size; ++i) {
		array[i] = gen();
	}
	return array;
}

template<class T> T gen1() {
	return rand()%51;
}
#endif 