#pragma once

template<typename T, const size_t size>
void map(T* arr, T (*fun)(T))
{
    for (size_t i = 0; i < size; i++)
        arr[i] = fun(arr[i]);
}

