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

template<typename T>
T gen() {
	static T p = 48;
	return p++;
}
template<>
char* gen() {

	static char p = 0;
	p++;
	char* _str = new char[p + 2];

	for (size_t i = 0; i < p + 2; ++i){
		_str[i] = 48 + i;
	}
	_str[p + 1] = '\0';

	return _str;
}
