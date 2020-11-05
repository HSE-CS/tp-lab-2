#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <cstring>

template<typename T, size_t n>
void map(T (&arr)[n], T (*change)(T v)) {
    for (size_t i = 0; i < n; ++i) {
        arr[i] = change(arr[i]);
    }
}

#endif //TASK1_TASK3_H
