#ifndef TASK1_H
#define TASK1_H
#include<iostream>
#include <cstring>
 
template<typename T>
bool comp(T a, T b) {
	return (a < b);
}

template<> bool comp<char*>(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template<typename T>
void msort(T* arr, size_t n) {
	if (n > 1) {

		size_t left_size = n / 2;
		size_t right_size = n - left_size;
		T* left_arr = new T[left_size];
		T* right_arr = new T[right_size];

		for (size_t i = 0; i < left_size; i++) {
			left_arr[i] = arr[i];
		}
		msort(left_arr, left_size);

		for (size_t i = 0; i < right_size; i++) {
			right_arr[i] = arr[i + left_size];
		}
		msort(right_arr, right_size);

		unsigned i = 0, j = 0, k = 0;

		while (i != left_size && j != right_size)
		{
			if (comp(left_arr[i], right_arr[j]))
				arr[k++] = left_arr[i++];
			else
				arr[k++] = right_arr[j++];
		}

		if (i < left_size)
			while (i < left_size)
				arr[k++] = left_arr[i++];
		else if (j < right_size)
			while (j < right_size)
				arr[k++] = right_arr[j++];

		delete left_arr;
		delete right_arr;
	}
}
 
#endif
