#include <cstdio>

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <class T, size_t size>
T* createArr(T(*gen)()){
    T* resArray = new T[size];
    for (int i = 0; i < size; ++i) {
        resArray[i] = gen();
    }
    return resArray;
}
#endif //TASK1_TASK2_H
