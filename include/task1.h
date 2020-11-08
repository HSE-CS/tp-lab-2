#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

template <typename T> bool cmp(T x, T y)
{
    return x < y;
}


template <> bool cmp(char* x, char* y)
{
    return strlen(x) < strlen(y);
}


template <typename T> void msort(T* array, int first, int second)
{
    int mid = (first + second) / 2;

    if(mid - first > 1) msort(array, first, mid);

    if(second - mid > 1) msort(array, mid, second);

    T help_arr[second - first];
    int i = first, j = mid, index = 0;

    while((i < mid) && (j < second))
    {
        if(cmp(array[i], array[j])) help_arr[index++] = array[i++];
        else help_arr[index++] = array[j++];
    }

    while(i < mid) help_arr[index++] = array[i++];

    while(j < second) help_arr[index++] = array[j++];

    index = 0;
    for(int i = first; i < second; i++){
        array[i] = help_arr[index++];
    }
}


template <typename T>void msort(T* array, int n) 
{
    msort(array, 0, n);
}


#endif 
