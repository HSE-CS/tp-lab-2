#ifndef TASK2_H
#define TASK2_H

template <typename T, int size> 
T* createArr(T(*gen) ())
{
	T* arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = gen();
	}
	return arr;
}

#endif // !TASK2_H
