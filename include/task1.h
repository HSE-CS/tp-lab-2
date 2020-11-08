#ifndef TASK1_H
#define TASK1_H

#include <cstring>

using namespace std;


template <typename T> void MergeSort(T* a, int left, int right, int size)
{
	if (left == right)
		return;

	int mid = (left + right + 1) / 2;

	MergeSort(a, left, mid - 1, size);
	MergeSort(a, mid, right, size);

	T* arr = new T[size]{ 0 };
	int j = 0;
	int start = left;
	int k = mid;
	for (j = 0; j < right - left + 1; j++)
	{
		if ((k > right) || ((start <= mid - 1) && (a[start] < a[k])))
		{
			arr[j] = a[start];
			start += 1;
		}
		else
		{
			arr[j] = a[k];
			k += 1;
		}
	}
	for (j = 0; j < right - left + 1; j++)
	{
		a[left + j] = arr[j];
	}
	delete[] arr;
}

template <> void MergeSort(char** a, int left, int right, int size)
{
	if (left == right)
		return;

	int mid = (left + right + 1) / 2;

	MergeSort(a, left, mid - 1, size);
	MergeSort(a, mid, right, size);

	char** arr = new char* [size];
	int j = 0;
	int start = left;
	int f = mid;
	for (j = 0; j < right - left + 1; j++)
	{
		if ((f > right) || ((start <= mid - 1) && (strlen(a[start]) < strlen(a[f]))))
		{
			arr[j] = a[start];
			start += 1;
		}
		else
		{
			arr[j] = a[f];
			f += 1;
		}
	}
	for (j = 0; j < right - left + 1; j++)
	{
		a[left + j] = arr[j];
	}
}

template <typename T> void msort(T* arr, int size)
{
	MergeSort(arr, 0, size - 1, size);
}

#endif TASK1_H 
