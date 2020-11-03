#pragma once

#include <iostream>
#include <cstring>

template<class T>
T func(T a)
{
    return a * a;
}

template<class T, size_t size>
void map(T *arr, T(*func)(T))
{
    for (int i = 0; i < size; ++i)
        arr[i] = func(arr[i]);
}
