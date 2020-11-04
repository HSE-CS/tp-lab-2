//
// Created by stoja on 03.11.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
#include <iostream>
#include <typeinfo>
#include <cstring>

using namespace std;

template<typename T, size_t size>

T* createArr(T(*gen)()) {
    T* array = new T[size];
    for (size_t i = 0; i < size; i++)
        array[i] = gen();
    return array;
}

#endif //TASK1_TASK2_H
