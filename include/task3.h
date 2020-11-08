#ifndef TASK3_H
#define TASK3_H
#include <iostream>

int changeMod2(int element)
{
	return element / 2;
};

template <typename T, size_t arraySize>
void map(T(&array)[arraySize], T(*change)(T element))
{
	for (size_t i = 0; i < arraySize; i++)
		array[i] = change(array[i]);
};

#endif