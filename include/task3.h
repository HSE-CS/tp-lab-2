#ifndef LAB2_TASK3_H
#define LAB2_TASK3_H

#include <typeinfo>
#include <iostream>
#include <cstring>

template<typename T, size_t size>
void map(T *arr, T (*change)(T)) {
    for (auto i = 0; i < size; ++i) {
        arr[i] = change(arr[i]);
    }
}

#endif //LAB2_TASK3_H
