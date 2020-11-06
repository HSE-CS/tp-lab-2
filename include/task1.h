#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

unsigned int min(unsigned int a, unsigned int b) {
	if (a < b) {
		return a;
	}
	return b;
}

void copy(char*& _str1, char*& _str2) {
	_str1 = _str2;
}

template<typename T>
void msort(T* arr, unsigned int n) {

	T* _res = new T[n];

	for (size_t i = 1; i < n; i *= 2) {
		for (size_t j = 0; j < n - i; j += 2 * i) {


			unsigned int _iter1{ 0 };
			unsigned int _iter2{ 0 };
			unsigned int middle = j + i;
			unsigned int right = min(j + 2 * i, n);
			unsigned int left = j;
			while ((_iter1 + left < middle) && (_iter2 + middle < right)) {

				if (arr[left + _iter1] < arr[middle + _iter2]) {
					_res[_iter1 + _iter2] = arr[left + _iter1];
					_iter1++;
				}
				else {
					_res[_iter1 + _iter2] = arr[middle + _iter2];
					_iter2++;
				}
			}

			while (left + _iter1 < middle) {
				_res[_iter1 + _iter2] = arr[left + _iter1];
				_iter1++;
			}
			while (middle + _iter2 < right) {
				_res[_iter1 + _iter2] = arr[middle + _iter2];
				_iter2++;
			}

			for (size_t w = 0; w < _iter1 + _iter2; ++w) {
				arr[left + w] = _res[w];
			}
		}
	}
}

template<>
void msort<char*>(char** arr, unsigned int n) {

	//Array for sort
	char** _res = new char* [n];
	for (size_t k = 0; k < n; ++k) {
		_res[k] = new char[n];
	}

	//Algorithm
	for (size_t i = 1; i < n; i *= 2) {
		for (size_t j = 0; j < n - i; j += 2 * i) {

			unsigned int _iter1{ 0 };
			unsigned int _iter2{ 0 };
			unsigned int middle = j + i;
			unsigned int right = min(j + 2 * i, n);
			unsigned int left = j;
			//Merge
			while ((_iter1 + left < middle) && (_iter2 + middle < right)) {
				if (strlen(arr[left + _iter1]) < strlen(arr[middle + _iter2])) {
					copy(_res[_iter1 + _iter2], arr[left + _iter1]);
					_iter1++;
				}
				else {
					copy(_res[_iter1 + _iter2], arr[middle + _iter2]);
					_iter2++;
				}
			}

			while (left + _iter1 < middle) {
				copy(_res[_iter1 + _iter2], arr[left + _iter1]);
				_iter1++;
			}
			while (middle + _iter2 < right) {
				copy(_res[_iter1 + _iter2], arr[middle + _iter2]);
				_iter2++;
			}

			for (size_t w = 0; w < _iter1 + _iter2; ++w) {
				copy(arr[left + w], _res[w]);
			}
		}
	}
}

