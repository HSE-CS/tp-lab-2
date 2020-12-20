#pragma once


template < typename T, int N >
T* createArr(T(*gen)())
{
	T * x = new T [N];
	for (int i = 0; i < N; i++) { x[i] = gen(); }
	return x;
}
