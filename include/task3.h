#ifndef TASK3_H
#define TASK3_H
#include <stddef.h>

template<class T, size_t N>
void map(T (&a)[N], T (*change)(T val)){
    for (size_t i = 0; i < N; ++i){
        a[i] = change(a[i]);
    }
}
#endif