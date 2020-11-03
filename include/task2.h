#ifndef LAB2_TASK2_H
#define LAB2_TASK2_H

#include <typeinfo>
#include <iostream>
#include <cstring>

template<class T>
T gen() {
    static int t = 48;
    return t++;
}

template<>
char* gen(){
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

template<typename T, size_t size>
T* createArr(T (*gen)()){
    T *arr = new T[size];
    for (auto i = 0; i < size; ++i)
        arr[i] = gen();
    return arr;
}
#endif //LAB2_TASK2_H
