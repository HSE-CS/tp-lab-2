#include <iostream>
#include "cstring"

template<typename T, unsigned int N>
T* map(T* arr,T(*change)(T))
{
    for(unsigned int i=0; i<N; i++)
        arr[i]=change(arr[i]);
}