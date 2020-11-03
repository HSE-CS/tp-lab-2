//
// Created by sharg on 03.11.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <typeinfo>

template<typename T, size_t size>
T *createArr(T (*generateFunk)()) {
    T *array = new T[size];
    for (size_t iter = 0; iter < size; iter++)
        array[iter] = generateFunk();
    return array;
}

#endif //TASK1_TASK2_H
