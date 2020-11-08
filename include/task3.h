#ifndef TASK3_H
#define TASK3_H

#include <cstring>

int change(int v) {
	return v + 1;
}

template<typename T, size_t n>
void map(T(&arr)[n], T(*change)(T v)) {
	for (size_t i = 0; i < n; ++i) {
		arr[i] = change(arr[i]);
	}
}

#endif 