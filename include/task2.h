#include <iostream>

template<typename T, int SIZE>
T *createArr(T(*fun)()) {
    T *arr = new T[SIZE];
    for (int i = 0; i < SIZE; ++i)
        arr[i] = fun();
    return arr;
}


