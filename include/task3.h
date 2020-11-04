//
// Created by islam on 06.10.2020.
//

#ifndef WORK_TASK3_H
#define WORK_TASK3_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>


template <typename T, size_t N> void map(T(&arr)[N], T (*change)(T))
{
    for(int i = 0; i < N; i++)
    {
        arr[i] = change(arr[i]);
    }
}

#endif //WORK_TASK3_H
