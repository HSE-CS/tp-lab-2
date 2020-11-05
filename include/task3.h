#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

template<typename T>
T change(T value) {
	return value + 1;
}

template<>
char* change<char*>(char* value) {
	
	size_t size = strlen(value);
	char* _temp = new char[size];
	for (size_t i = 0; i < size; ++i){
		_temp[i] = value[i];
	}
	
	for (size_t i = 0; i < size; ++i){
		_temp[i] += static_cast<char>(i);
	}
	return _temp;
}


template<typename T, size_t n>
void map(T (&arr)[n], T (*exchange)(T)) {

	for (size_t i = 0; i < n; ++i) {
		arr[i] = exchange(arr[i]);
	}
}