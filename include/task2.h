#pragma once

#include <iostream>
#include <cstring>
#include <typeinfo>

template<class T>
T func()
{
    static double t = 1;
    return t *= 3;
}

template<class T, size_t size>
T *createArr(T(*func)())
{
    T *arr = new T[size];
    for (int i = 0; i < size; ++i)
        arr[i] = func();
    return arr;
}