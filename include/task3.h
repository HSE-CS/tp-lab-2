#include <iostream>
#include <cstring>
#ifndef TASK3_H
#define TASK3_H

using namespace std;

template<typename T, int size>
void map(T* a, T(*change)(T)) {
	for (int i = 0; i < size; i++) {
		a[i] = change(a[i]);
	}
}



#endif