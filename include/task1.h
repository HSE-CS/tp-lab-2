#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <cstring>

template < typename T >

T* merge(T* arr, long left, long right) {

	long mid = 0;
	long p1 = 0;
	long p2 = 0;

	T* temp = new T[100];

	mid = (left + right) / 2;
	p1 = left;
	p2 = mid + 1;
	for (long i = left; i <= right; i++) {

		if ((p1 <= mid) && ((p2 > right) || (arr[p1] < arr[p2]))) {

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

	delete[] temp;

	//for (long i = left; i <= right; i++)
	//	std::cout << arr[i] << " ";

	return arr;

}

template < typename T >

void msort(T* arr, long left, long right) {

	if (left < right) {

		msort(arr, left, (left + right) / 2);
		msort(arr, ((left + right) / 2) + 1, right);
		merge(arr, left, right);

	}

}

#endif