#ifndef TASK2_H
#define TASK2_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;
///////////////////////////////////////////////

template< typename T, size_t N>
T* createArr(T (* gen)())
{
	T* Arr = new T[N];

	for (int i = 0; i < N; i++) {
		Arr[i]=gen();
	}
	return Arr;
}

#endif TASK2_H