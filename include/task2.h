#ifndef  TASK2_H
#define TASK2_H

#include<iostream>

template<class T, size_t size>
T* createArr(T (*gen)()){
	T* arr = new T[size];
	for (size_t i = 0; i < size; i++) {
		arr[i] = gen();
	}
	return arr;
}

int gena() {
	return rand()%100;
}

#endif // ! TASK2_H
