#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>

template <typename T> 
void mergeT(T* arr, unsigned left, unsigned pivot, unsigned right)
{
	unsigned size1 = pivot - left + 1;
	unsigned size2 = right - pivot;

	T* arr_left = new T[size1];
	T* arr_right = new T[size2];

	for (unsigned i = 0; i < size1; i++)
		arr_left[i] = arr[left + i];

	for (unsigned i = 0; i < size2; i++)
		arr_right[i] = arr[pivot + 1 + i];

	unsigned i = 0, j = 0, k = left;

	while (i != size1 && j != size2)
	{
		if (arr_left[i] < arr_right[j])
			arr[k++] = arr_left[i++];
		else
			arr[k++] = arr_right[j++];
	}

	if (i < size1)
		while (i < size1)
			arr[k++] = arr_left[i++];
	else if (j < size2)
		while (j < size2)
			arr[k++] = arr_right[j++];

	delete[] arr_left;
	delete[] arr_right;
}
 
void merge (char** arr, unsigned left, unsigned pivot, unsigned right)
{
	unsigned size1 = pivot - left + 1;
	unsigned size2 = right - pivot;

	char** arr_left = new char*[size1];
	char** arr_right = new char*[size2];

	for (unsigned i = 0; i < size1; i++)
		arr_left[i] = arr[left + i];

	for (unsigned i = 0; i < size2; i++)
		arr_right[i] = arr[pivot + 1 + i];

	unsigned i = 0, j = 0, k = left;

	while (i != size1 && j != size2)
	{
		if (strlen(arr_left[i]) < strlen(arr_right[j]))
			arr[k++] = arr_left[i++];
		else
			arr[k++] = arr_right[j++];
	}

	if (i < size1)
		while (i < size1)
			arr[k++] = arr_left[i++];
	else if (j < size2)
		while (j < size2)
			arr[k++] = arr_right[j++];

	delete arr_left;
	delete arr_right;
}

template <typename T>
void msort(T arr[], unsigned size, unsigned left = 0, unsigned right = 0)
{	
	if (right == 0 && size != 0)
	{
		right = size - 1;
		size = 0;
	}

	if (right > left)
	{
		unsigned pivot = left + (right - left) / 2;
		msort<T>(arr, size, left, pivot);
		msort<T>(arr, size, pivot + 1, right);
		mergeT(arr, left, pivot, right);
	}
}

template <> 
void msort<char *>(char* arr[], unsigned size, unsigned left, unsigned right)
{
	if (right == 0 && size != 0)
	{
		right = size - 1;
		size = 0;
	}

	if (right > left)
	{
		unsigned pivot = left + (right - left) / 2;
		msort<char *>(arr, size, left, pivot);
		msort<char *>(arr, size, pivot + 1, right);
		merge(arr, left, pivot, right);
	}
}
#endif
