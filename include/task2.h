#ifndef TASK2_H
#define TASK2_H

#include <random>
#include<iostream>
using namespace std;

int gen() {
    random_device r;
    uniform_int_distribution<int> r2(-5, 5);
    return r2(r);
}

template<class T, size_t N>
T* createArr(T(*f)()) {
    T* arr = new T[N];
    for (size_t i = 0; i < N; ++i) arr[i] = f();
    return arr;
}
#endif