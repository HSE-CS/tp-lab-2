#ifndef TASK2_H
#define TASK2_H

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
template<class T, size_t N>
T* createArr(T(*f)())
{
    T* arr = new T[N];
    for (size_t i = 0; i < N; ++i) arr[i] = f();
    return arr;
}
#endif