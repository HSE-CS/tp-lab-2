#include <iostream>
#include <cstdlib>
#include <ctime>


template <typename T, const size_t N>
T* createArr(T(*gen)())
{
	T* arr = new T[N];
	for (size_t i = 0; i < N; i++) {
		arr[i] = gen();
	}
	return arr;
}


