#pragma once


template< class T >
T* createArr(size_t N, T(*gen)())
{

	T* mas = new T[N];
	for (int i = 0; i < N; i++)
		mas[i] = gen();

	return mas;

}


