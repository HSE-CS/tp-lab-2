//
// Created by Vadim Makarov on 02.11.2020.
//

#ifndef TEST_TASK2_H
#define TEST_TASK2_H

#include <iostream>
#include <cstring>

using namespace std;

template<class T>
T gen()
{
    static size_t elem = 48;
    return elem++;
}

template <class T, size_t size>
T * createArr(T (*fun)()){
    T * arr = new T[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = fun();
    }
    return arr;
}


#endif //TEST_TASK2_H
