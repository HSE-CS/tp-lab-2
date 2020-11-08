#pragma once


template < typename T, int N >
T* createArr(T gen(T))
{

	T * x = new T [N];
	for (int i = 0; i < N; i++) { x[i] = gen(x[i]); }
	return x;
}