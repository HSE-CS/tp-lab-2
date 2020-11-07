#ifndef TASK2_H
#define TASK2_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <utility>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
//using namespace std;
template<typename T, size_t N>
T* createArr(T(*gen)())
{
    T* arr = new T[N];
    for (size_t i = 0; i < N; ++i) arr[i] = gen();
    return arr;
}
#endif