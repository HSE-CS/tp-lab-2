#pragma once
template <typename T, size_t size> T* createArr(T(*gen) ())
{
	T* ar = new T[size];
	for (int i = 0; i < size; ++i)
		ar[i] = gen();

	return ar;
		
}
