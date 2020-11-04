#include <iostream>
#include <string>
#include <cstring>
#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
template<class T>
T changed(T val)
{
    return val + 1;
}

template<>
char* changed(char* val)
{
    size_t n = strlen(val);
    for(size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}

template<typename T, size_t n>
void map (T* arr, T (*changed)(T))
{
    T mas[n];
    for(size_t i = 0; i < n; i++)
    {
        mas[i] = changed(arr[i]);
    }
}
#endif //TASK1_TASK3_H
