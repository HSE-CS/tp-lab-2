//
//  task1.h
//  programming-technologies
//
//  Created by Даниил Иванов on 08.11.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#ifndef task1_h
#define task1_h

#pragma once
#include <typeinfo>
#include <iostream>
#include <string.h>

template <typename T>
bool raznitsa(T a, T b)
{
    return (a < b);
}

template <> bool raznitsa <char*>( char* a,  char* b)
{
    return strlen(a) < strlen(b);
}



template <typename T>
void copy(T* from, T* to, size_t left, size_t right) {
    for (size_t i = left; i < right; i++) {
        to[i - left] = from[i];
    }
}


template <typename T>
void msort(T arr[], size_t n) noexcept {
         if (n > 1) {
            size_t left_border{ n / 2 }, right_border{ n - left_border };
            msort(&arr[0], left_border);
            msort(&arr[left_border], right_border);
            size_t lidx = 0, ridx = left_border, idx = 0;
            T* tmp_arr{ 0 };
            tmp_arr = new T[n];
            
            while (lidx < left_border || ridx < n)
            {
                if (raznitsa(arr[lidx], arr[ridx]))
                {
                    tmp_arr[idx++] = arr[lidx];
                    lidx++;
                }
                else
                {
                    tmp_arr[idx++] = arr[ridx];
                    ridx++;
                }

                if (lidx == left_border)
                {
                    copy(arr, &tmp_arr[idx], ridx, n);
                    break;
                }
                if (ridx == n)
                {
                    copy(arr, &tmp_arr[idx], lidx, left_border);
                    break;
                }
            }

            copy(tmp_arr, arr, 0, n);
         }
}







#endif /* task1_h */
