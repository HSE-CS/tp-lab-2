#include <iostream>
#include <cstring>
#ifndef TASK2_H
#define TASK2_H

using namespace std;

template<typename T, size_t n> 
T* createArr(T(*gen))
{
    T* a = new T[n];
    for (unsigned i = 0; i < n; i++) {
        a[i] = gen();
    }
    return a;
 }

template<typename T> 
T gen() {
    return rand();
}


#endif