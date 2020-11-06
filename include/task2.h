#ifndef TASK2_H
#define TASK2_H
#include <iostream>
using namespace std;

template <typename T, size_t size> 
T* createArr(T (*generator)()){
	T* tmp = new T[size];
	for (int i = 0; i < size; i++){
		tmp[i] = generator();
	}
	
	return tmp;
}

#endif