#ifndef  TASK3_H
#define TASK3_H

#include <iostream>
#include<climits>
#include<string.h>
#include<cmath>


template<class T, size_t size>
void map(T array[], T(*change)(T)) {
	for (size_t i = 0; i < size; i++) {
		array[i] = change(array[i]);
	}
}

int square(int a) {
	return pow(a,2);
}
#endif 