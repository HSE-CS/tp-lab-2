#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <typeinfo>
#include <iostream>
#include <cstring>

using namespace std;

template<typename T, size_t size>
void map(T array[], T(*changeFunc)(T)) {
    for (size_t iter = 0; iter < size; iter++)
        array[iter] = changeFunc(array[iter]);
}
#endif //TASK1_TASK3_H