#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

template<typename T>
bool comp(T a, T b)
{
	if (a > b)
		return 0;
	else
		return 1;
}

template <>
bool comp(char* a, char* b)
{
	if (strlen(a) > strlen(b))
		return 0;
	else
		return 1;
}

template<typename T> 
void msort(T* arr, int last, int first = 0)
{
	if (first >= last)
		return;
	int mid = first + (last - first) / 2;
	msort(arr, mid, first);
	msort(arr, last, mid + 1);

	T* buf = new T[last + 1];

	int k = 0;
	int i = first;
	int j = mid + 1;

	while (k < last - first + 1)
	{
		if ((j > last) || ((i <= mid) && (comp(arr[i], arr[j]))))
		{
			buf[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			buf[k] = arr[j];
			k++;
			j++;
		}
	}
	
	for (int h = 0; h < last - first + 1; h++)
		arr[first + h] = buf[h];

	delete[] buf;
}
#endif