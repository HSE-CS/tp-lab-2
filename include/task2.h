#ifndef TASK2_H
#define TASK2_H

template <typename T, size_t size> T* createArr(T (*fun) ()) {
	T* arr = new T[size]{ 0 };
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = fun();
	}
	return arr;
}


#endif
