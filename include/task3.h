#ifndef TASK3_H
#define TASK3_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;
///////////////////////////////////////////////

template< typename T, size_t N>
T* map(T * Arr, T(*change)(T a))
{
	for (int i = 0; i < N; i++) {
		Arr[i] = change(Arr[i]);
	}
	return Arr;
}

#endif TASK3_H