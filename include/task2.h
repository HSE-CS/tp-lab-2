#pragma once


template< class T, size_t n>
T* createArr(T(*gen)())
{

	T* mas = new T[n];
	for (int i = 0; i < n; i++)
		mas[i] = gen();

	return mas;

}


