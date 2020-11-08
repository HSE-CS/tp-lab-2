#ifndef TASK3_H
#define TASK3_H
#include <iostream>
using namespace std;


template <typename T, size_t size> 
void map(T* array, T (*change)(T)){
	for (int i = 0; i < size; i++){
		array[i] = change(array[i]);
    }
}

#endif