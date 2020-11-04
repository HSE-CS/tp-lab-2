//
// Created by stoja on 03.11.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
#include <iostream>
#include <typeinfo>
template <typename T, size_t size>
void map(T *arr, T(*change)(T))
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = change(arr[i]);
    }
}
#endif //TASK1_TASK3_H
