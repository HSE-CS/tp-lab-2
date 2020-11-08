#ifndef TASK2_H
#define TASK2_H
#include <iostream>
#include <cstdlib>

int genUpTo10()
{
    int num = rand() % 10;
    return num;
};

template <typename T, size_t N>
T *createArr(T (*gen)())
{
    T *newArray = new T[N];
    for (size_t i = 0; i < N; i++)
        newArray[i] = gen();
    return newArray;
};

#endif