#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

template<class T, size_t size>
T *createArr(T (*gen)()){
    T *arr = new T [size];
    for (int i = 0; i < size; ++i) {
        arr[i] = gen();
    }
    return arr;
}

#endif //TASK1_TASK2_H
