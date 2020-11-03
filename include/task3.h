#ifndef TASK3_H
#define TASK3_H

#include<iostream>

template <typename T, int N> void map(T (&arr)[N], T(*change)(T))
{
	for (int i = 0; i < N; i++)
		arr[i] = change(arr[i]);
}

#endif