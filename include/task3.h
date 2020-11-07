#include <iostream>
using namespace std;
/*
template<typename T>
T change(T a) {
	a++;
	return a;
}
*/

template<typename T, size_t size>
void map(T (&A) [size], T(*fun)(T)) {
	for (size_t i = 0; i < size; i++) {
		A[i] = fun(A[i]);
	}
}