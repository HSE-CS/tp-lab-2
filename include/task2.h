#include <iostream>
using namespace std;

template<typename T>
T gender() {
	return rand();
}


template<typename T, size_t n>
T* createArr(T (*fun) ()) {
	T* A = new T[n];
	for (size_t i = 0; i < n; i++) {
		A[i] = fun();
	}
	return A;
}
