#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

template<typename T, size_t n>
T* createArr(T (*ret_value)()) {
	
	T* array = new T[n];
	for (size_t i = 0; i < n; ++i) {
		array[i] = ret_value();
	}

	return array;
}
