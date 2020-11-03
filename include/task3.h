#ifndef LAB2_TASK3_H
#define LAB2_TASK3_H

#include <typeinfo>
#include <iostream>
#include <cstring>

template<class T>
T change(T val) {
    return val + 1;
}

template<>
char *change(char *val) {
    size_t n = strlen(val);
    for (size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}


template<typename T, size_t size>
void map(T *arr, T (*change)(T)) {
    for (auto i = 0; i < size; ++i) {
        arr[i] = change(arr[i]);
    }
}

#endif //LAB2_TASK3_H
