#pragma once
#ifndef TASK1_H
#define TASK1_H
#include <typeinfo>									 
#include <iostream>	
#include <string.h>

template <typename T>
void copy(T* from, T* to, size_t left, size_t right) {
    for (size_t i = left; i < right; i++) {
        to[i - left] = from[i];
    }
}


void charmsort(char** arr, size_t n) {
    if (n > 1) {
        size_t left_border{ n / 2 }, right_border{ n - left_border };
        charmsort(&arr[0], left_border);
        charmsort(&arr[left_border], right_border);
        size_t lidx = 0, ridx = left_border, idx = 0;
        char** tmp_arr{ 0 };
        tmp_arr = new char* [n];
        while (lidx < left_border || ridx < n)
        {
            if (strlen(arr[lidx]) < strlen(arr[ridx]))
            {
                tmp_arr[idx++] = std::move(arr[lidx]);
                lidx++;
            }
            else
            {
                tmp_arr[idx++] = std::move(arr[ridx]);
                ridx++;
            }

            if (lidx == left_border)
            {
                std::copy(std::make_move_iterator(&arr[ridx]),
                    std::make_move_iterator(&arr[n]),
                    &tmp_arr[idx]);
                break;
            }
            if (ridx == n)
            {
                std::copy(std::make_move_iterator(&arr[lidx]),
                    std::make_move_iterator(&arr[left_border]),
                    &tmp_arr[idx]);
                break;
            }
        }

        std::copy(std::make_move_iterator(tmp_arr),
            std::make_move_iterator(&tmp_arr[n]),
            arr);
    }
}


template <typename T>
void msort(T arr[], size_t n) noexcept {
    char* type = (char*)typeid(*arr).name();
	if (type[0] == 'c') {
		// TODO: sort
        charmsort((char**)arr, n);
	}
	else {
        if (n > 1) {
            size_t left_border{ n / 2 }, right_border{ n - left_border };
            msort(&arr[0], left_border);
            msort(&arr[left_border], right_border);
            size_t lidx = 0, ridx = left_border, idx = 0;
            T* tmp_arr{ 0 };
            tmp_arr = new T[n];
            
            while (lidx < left_border || ridx < n)
            {
                if (arr[lidx] < arr[ridx])
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
                    //copy(std::make_move_iterator(&arr[ridx]),  std::make_move_iterator(&arr[n]), &tmp_arr[idx]);
                    // from arr[ridx -- n] to tmp_arr[idx] 
                    copy(arr, &tmp_arr[idx], ridx, n);
                    break;
                }
                if (ridx == n)
                {
                    //std::copy(std::make_move_iterator(&arr[lidx]), std::make_move_iterator(&arr[left_border]), &tmp_arr[idx]);
                    copy(arr, &tmp_arr[idx], lidx, left_border);
                    break;
                }
            }

           // std::copy(std::make_move_iterator(tmp_arr), std::make_move_iterator(&tmp_arr[n]), arr);
            copy(tmp_arr, arr, 0, n);
        }
	}
}






#endif // !TASK1_H