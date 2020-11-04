#include <iostream>
#include <cstring>
#include <string>

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

template<typename T, size_t n>
T* createArr(T (*gen)())
{
    T * arr = new T [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = gen();
    }
    return arr;
}

#endif //TASK1_TASK2_H
