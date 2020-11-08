#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>

template<typename T, unsigned int N >

T* createArr(T*(gen)()){
    T* arr = new T[N];
    for (unsigned int i = 0; i < N; i++)
        arr[i] = gen();
    return arr;
}

#endif //TASK1_TASK2_H