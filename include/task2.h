#ifndef TASK2_H
#define TASK2_H

#include <iostream>
#include <string>
using namespace std;

template <typename T, int N>
T* createArr(T(*gen)()) 
{
	T* arr = new T[N];
	for (int i = 0; i < N; i++) 
	{
		arr[i] = gen();
	}
	return 1;
}
#endif