#ifndef TASK1_H
#define TASK1_H
#include <iostream>

template < typename T >

bool compare(T el1, T el2) {

	return el1 < el2;

}

template < > bool compare<char*>(char* el1, char* el2) {

	//return strcmp(el1, el2);
	return strlen(el1) < strlen(el2);

}

template < typename T >

void msort(T* arr, size_t size) {

	if (size > 1) {

		size_t mid = size / 2;
		int k = 0;
		int i = 0;
		int j = 0;

		T* p1 = new T[mid];
		T* p2 = new T[size - mid];

		for (int i = 0; i < mid; i++)
			p1[i] = arr[i];
		for (size_t i = 0; i < size - mid; i++)
			p2[i] = arr[i + mid];

		msort(p1, mid);
		msort(p2, size - mid);

		while (i < mid && j < size - mid) {

			if (compare(p1[i], p2[j])) {

				arr[k] = p1[i];
				k++;
				i++;

			}
			else {

				arr[k] = p2[j];
				k++;
				j++;

			}

		}

		while (i < mid)
		{
			arr[k] = p1[i];
			i++;
			k++;
		}
		while (j < size - mid)
		{
			arr[k] = p2[j];
			j++;
			k++;
		}

	}

	/*if (left < right) {

		msort(arr, left, (left + right) / 2);
		msort(arr, ((left + right) / 2) + 1, right);

	}

	long mid = 0;
	long p1 = 0;
	long p2 = 0;

	T* temp = new T[100];

	mid = (left + right) / 2;
	p1 = left;
	p2 = mid + 1;
	for (long i = left; i <= right; i++) {

		if ((p1 <= mid) && ((p2 > right) || (compare(arr[p1], arr[p2]) > 0))) {

			temp[i] = arr[p1];
			p1++;

		}
		else {

			temp[i] = arr[p2];
			p2++;

		}

	}

	for (long i = left; i <= right; i++)
		arr[i] = temp[i];

	delete[] temp;*/

	//return arr;

} 


/*

if (N > 1)
	{
		size_t center = N / 2;

		T* arr_1 = new T[center];
		T* arr_2 = new T[N - center];

		for (int i = 0; i < center; i++)
			arr_1[i] = arr[i];
		for (size_t i = 0; i < N - center; i++)
			arr_2[i] = arr[i + center];

		msort(arr_1, center);
		msort(arr_2, N - center);

		int  k = 0, i = 0, j = 0;

		while (i < center && j < N - center)
		{
			if (compare(arr_1[i], arr_2[j]))
			{
				arr[k] = arr_1[i];
				i++;
			}
			else
			{
				arr[k] = arr_2[j];
				j++;
			}
			k++;

		}

		while (i < center)
		{
			arr[k] = arr_1[i];
			i++;
			k++;
		}
		while (j < N - center)
		{
			arr[k] = arr_2[j];
			j++;
			k++;
		}

	}

*/

#endif