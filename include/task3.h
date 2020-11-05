#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

template<typename T, size_t n>
void map(T (&arr)[n], T (*exchange)(T)) {

	for (size_t i = 0; i < n; ++i) {
		arr[i] = exchange(arr[i]);
	}
}