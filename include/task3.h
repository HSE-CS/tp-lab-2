#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

template<class T, size_t size>
void map(T *arr, T (*change)(T x)){
    for (int i = 0; i < size; ++i)
        arr[i] = change(arr[i]);
}

#endif //TASK1_TASK3_H
