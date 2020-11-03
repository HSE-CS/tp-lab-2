#pragma once

template<typename T, const size_t size>
T* createArr(T (*fun)())
{
    T* arr = new T[size];
    for (size_t i = 0; i < size; i++)
        arr[i] = fun();
    return arr;
}

