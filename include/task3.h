#pragma once
#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <typeinfo>
#include <iostream>
#include <cstring>

using namespace std;

template<typename T, size_t size>
void map(T arr[], T(*change)(T)) {
    for (size_t i = 0; i < size; i++)
        arr[i] = change(arr[i]);
}
#endif //TASK1_TASK3_H
