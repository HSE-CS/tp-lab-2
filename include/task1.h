#ifndef TASK1_H
#define TASK1_H
#include <string.h>
#include <iostream>
using namespace std;

template<typename T>
bool comp(T a, T b) {
	return a < b;
}

template<>
bool comp(char *a, char *b) {
	return strlen(a) < strlen(b);
}

template<typename T>
void merge(T *a, size_t n) {
	size_t c = n / 2;
	size_t i = 0;
	size_t j = n / 2;
	size_t k = 0;
	T *tmp = new T[n];
	while (i < c && j < n) 
		if (comp(a[i], a[j])) {
			tmp[k] = a[i];
			++k; ++i;
		}
		else {
			tmp[k] = a[j];
			++k; ++j;
		}
	while (i < c) {
		tmp[k] = a[i];
		++k; ++i;
	}
	while (j < n) {
		tmp[k] = a[j];
		++k; ++j;
	}
	for (size_t i = 0; i < n; ++i) 
		a[i] = tmp[i];
}

template<typename T>
void msort(T *arr, size_t n) {
	if (n >= 2) {
		size_t new_size = n / 2;
		msort(arr, new_size);
		msort(arr + new_size, n - new_size);
		merge(arr, n);
	}
}
#endif 