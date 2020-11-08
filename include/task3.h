#ifndef TASK3_H
#define TASK3_H

template <typename T, size_t size> void map(T(&arr)[size], T(*fun)(T)) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = fun(arr[i]);
	}
}


#endif