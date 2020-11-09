#include <iostream>

template<typename T, unsigned int SIZE>
T *map(T *arr, T(*fun)(T)) {
    for (unsigned int i = 0; i < SIZE; i++)
        arr[i] = fun(arr[i]);
}


