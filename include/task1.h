#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <string.h>


typedef unsigned int u_int;

template <typename T> void
merge(T* arr, u_int l, u_int pivot, u_int r)
{
	u_int size1 = pivot - l + 1;
	u_int size2 = r - pivot;

	T* arr_left = new T[size1];
	T* arr_right = new T[size2];

	for (u_int i = 0; i < size1; i++)
		arr_left[i] = arr[l + i];

	for (u_int i = 0; i < size2; i++)
		arr_right[i] = arr[pivot + 1 + i];

	u_int i = 0, j = 0, k = l;

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

template <> void
merge(char** arr, u_int l, u_int pivot, u_int r)
{
	u_int size1 = pivot - l + 1;
	u_int size2 = r - pivot;

	char** arr_left = new char*[size1];
	char** arr_right = new char*[size2];

	for (u_int i = 0; i < size1; i++)
		arr_left[i] = arr[l + i];

	for (u_int i = 0; i < size2; i++)
		arr_right[i] = arr[pivot + 1 + i];

	u_int i = 0, j = 0, k = l;

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

template <typename T> void
msort(T arr[], u_int size, u_int left = 0, u_int right = 0)
{	
	if (right == 0 && size != 0)
	{
		right = size - 1;
		size = 0;
	}

	if (left < right)
	{
		u_int pivot = left + (right - left) / 2;

		//std::cout << "LEFT: "<< left << " RIGHT: " << right << " PIVOT : " << pivot << std::endl;

		msort<T>(arr, size, left, pivot);
		msort<T>(arr, size, pivot + 1, right);
		merge(arr, left, pivot, right);
	}
}

template <> void
msort(char* arr[], u_int size, u_int left, u_int right)
{
	if (right == 0 && size != 0)
	{
		right = size - 1;
		size = 0;
	}

	if (left < right)
	{
		u_int pivot = left + (right - left) / 2;

		//std::cout << "LEFT: " << left << " RIGHT: " << right << " PIVOT : " << pivot << std::endl;


		for (int i = 0; i < 5; i++)
			std::cout << arr[i] << "  ";
		std::cout << std::endl;

		msort(arr, size, left, pivot);
		msort(arr, size, pivot + 1, right);
		merge(arr, left, pivot, right);
	}
}


#endif // !TASK1_H
