#include <cstdio>

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template <class T, size_t size>
void map(T *inputArr, T (*change)(T)){
    for (int i = 0; i < size; ++i) {
        inputArr[i] = change(inputArr[i]);
    }
}

#endif //TASK1_TASK3_H
