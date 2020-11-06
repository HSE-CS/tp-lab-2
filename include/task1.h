#pragma once
#ifndef TASK1_H
#define TASK1_H
#include <typeinfo>									 
#include <iostream>	
#include <string>
#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>
template <typename T>
void msort(T arr[], unsigned int n) noexcept {
	if (typeid(*arr).name() == "char") {
		int *length{ 0 };
		length = new int[n] {0};
		for (size_t i = 0; i < n; i++)
		{
//			length[i] = strlen(arr[i]);
		}
		// TODO: sort


        delete[] length;
	}
	else {
        if (n > 1) {
            unsigned int left_border{ n / 2 }, right_border{ n - left_border };
            msort(&arr[0], left_border);
            msort(&arr[left_border], right_border);
            unsigned int lidx = 0, ridx = left_border, idx = 0;
            T* tmp_arr{ 0 };
            tmp_arr = new T[n];

            while (lidx < left_border || ridx < n)
            {
                if (arr[lidx] < arr[ridx])
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
}
template <typename T>
void charmsort(char ** arr, unsigned int  length, std::size_t n) {
    if (length)
    {


        int* length{ 0 };
        length = new int[n] {0};
        for (size_t i = 0; i < n; i++)
        {
            length[i] = strlen(arr[i]);
        }
        // TODO: sort
    }

    delete[] length;
}



#endif // !TASK1_H