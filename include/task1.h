#ifndef TASK1_H
#define TASK1_H
#include <iostream>

template < typename T >

bool compare(T el1, T el2) {

	return el1 < el2;

}

template < > bool compare<char*>(char* el1, char* el2) {

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

} 

#endif