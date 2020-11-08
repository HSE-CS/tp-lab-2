#ifndef TASK3_H
#define TASK3_H

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

template<typename T, size_t N> void map(T*arr, T(*change)(T val)) 
{

    for (size_t i = 0; i < N; ++i) {
        arr[i] = change(arr[i]);
    }
}
#endif 