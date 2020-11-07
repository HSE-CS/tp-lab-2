#ifndef TASK3_H
#define TASK3_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <utility>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
//using namespace std;
template<typename T, size_t N>
void map(T*arr, T(*change)(T val)) 
{
    for (size_t i = 0; i < N; ++i) {
        arr[i] = change(arr[i]);
    }
}
#endif