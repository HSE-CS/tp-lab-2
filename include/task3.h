#ifndef task3_h
#define task3_h

#include <iostream>
#include <cstring>

template <typename T, int N>
void map(T *arr, T (*change)(T)) {
    for (int i = 0; i < N; i++)
        arr[i] = change(arr[i]);
}

#endif
