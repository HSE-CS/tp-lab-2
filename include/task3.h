#ifndef TASK3_H
#define TASK3_H

#include<iostream>

using namespace std;

template<class T>
T change(T val)
{
	return val + 2;
}

template<typename T, size_t n>
void map(T* arr, T(*change)(T val)) {
	for (size_t i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}
#endif 