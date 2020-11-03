#pragma once

#include <iostream>
#include <cstring>

template<class T>
bool cmp(T a, T b)
{
    return a < b;
}

template<>
bool cmp<char *>(char *a, char *b)
{
    return strlen(a) < strlen(b);
}

template<class T>
void msort(T (*array), size_t size)
{
    if (size >= 2)
    {
        size_t lsize{size / 2};
        T *larray = new T[lsize];
        for (int i = 0; i < lsize; ++i)
            larray[i] = array[i];
        msort(larray, lsize);

        size_t rsize{size - lsize};
        T *rarray = new T[rsize];
        for (int i = 0; i < rsize; ++i)
            rarray[i] = array[i + lsize];
        msort(rarray, rsize);

        size_t li{0}, ri{0};
        for (int i = 0; i < size; i++)
            if (li >= lsize || ri >= rsize)
            {
                if (ri >= rsize)
                {
                    array[i] = larray[li];
                    li++;
                } else if (li >= lsize)
                {
                    array[i] = rarray[ri];
                    ri++;
                }
            } else
            {
                if (cmp(larray[li], rarray[ri]))
                {
                    array[i] = larray[li];
                    li++;
                } else
                {
                    array[i] = rarray[ri];
                    ri++;
                }
            }
    }
}