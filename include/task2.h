#include <iostream>
#include <typeinfo>
#include <vector>
#include <cstdlib>

template <typename T, size_t N>

T* createArr(T (*gen)()) {
	T* ret = (T*)malloc(sizeof(T) * N);
	for (int i = 0; i < N; ++i) {
		ret[i] = gen();
	}
	return ret;
}

template <typename T>
T genexample() {
	T a = (T)(rand() % 100 + 1);
	return a;
}