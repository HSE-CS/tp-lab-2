#ifndef TASK3_H
#define TASK3_H

template<typename T, int size>
void map(T (&arr)[size], T (*function)(T))
{
	for (int i = 0; i < size; i++)
		arr[i] = function(arr[i]);
}
#endif // !TASK3_H
