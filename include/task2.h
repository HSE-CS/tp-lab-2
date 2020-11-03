#ifndef LAB2_TASK2_H
#define LAB2_TASK2_H

#include <typeinfo>
#include <iostream>
#include <cstring>

template<typename T, size_t size>
T* createArr(T (*gen)()){
    T *arr = new T[size];
    for (auto i = 0; i < size; ++i)
        arr[i] = gen();
    return arr;
}
#endif //LAB2_TASK2_H
