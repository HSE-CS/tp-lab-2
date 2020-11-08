#include <cstdio>

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template <class T, size_t size>
T map(T (&inputArr)[size], T (*change)()){
    for (int i = 0; i < size; ++i) {
        inputArr[i] = change(inputArr[i]);
    }
}

#endif //TASK1_TASK3_H
