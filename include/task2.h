#include <iostream>

using namespace std;

template<typename T>
T gen()
{
	int t = rand();
	return t;
}

template<typename T, int N>
T* createArr(T(*gen)())
{
	T* arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = gen();
	return arr;
}
