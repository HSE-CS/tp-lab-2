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
template<class T>
T gen()
{
    static int k = 48;
    return k++;
}

template<>
char* gen()
{
    static unsigned k = 0;
    k++;
    char* s = new char[k + 1];

    for (int i = 0; i < k; i++)
        s[i] = '0' + i;
    s[k] = '\0';

    return s;
}
#endif //TASK1_TASK2_H
