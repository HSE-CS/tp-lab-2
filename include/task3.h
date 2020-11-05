#ifndef TASK3_H
#define TASK3_H

#include <iostream>
#include <algorithm>
using namespace std;

template <typename T, size_t size>
void map(T(&arr)[size], T(*change)(T))
{
	for (int i = 0; i < size; i++)
		arr[i] = change(arr[i]);
}

#endif
