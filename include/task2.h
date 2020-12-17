#ifndef TASK2_H
#define TASK2_H

using namespace std;

template <typename T, size_t N> T* createArr(T(*gen)()) 
{
	T* arr = new T[N];
	for (int i = 0; i < N; i++) 
	{
		arr[i] = gen();
	}
	return arr;
}


#endif