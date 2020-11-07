#ifndef TEST_TASK2_H
#define TEST_TASK2_H
#include <iostream>
#include <cstring>

using namespace std;

template <class T, size_t size>
T* createArr(T(*fun)()) 
{
    T* array = new T[size];
    for (int i = 0; i < size; ++i) 
    {
        array[i] = fun();
    }
    return array;
}
#endif 