#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>

template<typename T> bool comp(T a, T b)
{
    return a < b;
}

template<>bool comp<char *>(char *a, char *b)
{
    return strlen(a) < strlen(b);
}

template <class T> void msort(T (*arr), const size_t SIZE)
{
    if (SIZE > 1)
    {
        size_t LEFT_SIZE = SIZE / 2;
        T *left_arr = new T[LEFT_SIZE];
        for (size_t i = 0; i < LEFT_SIZE; i++)
            left_arr[i] = arr[i];
        msort(left_arr, LEFT_SIZE);

        size_t RIGHT_SIZE = SIZE - LEFT_SIZE;
        T *right_arr = new T[RIGHT_SIZE];
        for (size_t i = 0; i < RIGHT_SIZE; i++)
            right_arr[i] = arr[LEFT_SIZE + i];
        msort(right_arr, RIGHT_SIZE);

        size_t left_ind = 0, right_ind = 0;
        for (size_t ind = 0; ind < SIZE; ind++)
        {
            if (left_ind < LEFT_SIZE && right_ind < RIGHT_SIZE)
            {
                if ( comp(left_arr[left_ind], right_arr[right_ind]) )
                {
                    arr[ind] = left_arr[left_ind];
                    left_ind++;
                }

                else
                {
                    arr[ind] = right_arr[right_ind];
                    right_ind++;
                }
            }
            else if (left_ind >= LEFT_SIZE)
            {
                arr[ind] = right_arr[right_ind];
                right_ind++;
            }
            else if (right_ind >= RIGHT_SIZE)
            {
                arr[ind] = left_arr[left_ind];
                left_ind++;
            }

        }

    }
}
#endif // TASK1_H_INCLUDED
