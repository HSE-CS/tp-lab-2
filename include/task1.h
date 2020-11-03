#ifndef TASK1_H
#define TASK1_H

#include<iostream>
#include <cstring>

template <typename T> bool cmp(T a, T b) {
	return a < b;
}
template<> bool cmp(char* a, char* b) {
	return strlen(a) < strlen(b);
}

template<typename T> void Merge(T* arr, int first, int last)
{
	int mid = 0, begin = 0, end = 0;
	T* mas = new T[last + 1];

	mid = (first + last) / 2;
	begin = first;
	end = mid + 1;

	for (int j = first; j <= last; j++)
	{

		if ((begin <= mid) && ((end > last) || (cmp(arr[begin], arr[end]))))
		{
			mas[j] = arr[begin];
			begin++;
		}
		else
		{
			mas[j] = arr[end];
			end++;
		}
	}

	for (int j = first; j <= last; j++)
	{
		arr[j] = mas[j];
	}

	delete[]mas;
}

template<typename T> void Sort(T* arr, int first, int last)
{
	{
		if (first < last)
		{
			Sort(arr, first, (first + last) / 2);
			Sort(arr, (first + last) / 2 + 1, last);
			Merge(arr, first, last);
		}
	}
}

template<typename T> void msort(T* arr, size_t size)
{
	int first = 0;
	int last = size - 1;
	Sort(arr, first, last);
}

#endif