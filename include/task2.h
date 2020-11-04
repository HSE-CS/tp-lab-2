//
// Created by islam on 29.09.2020.
//

#ifndef WORK_TASK2_H
#define WORK_TASK2_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>

template<typename T, size_t N> T* createArr(T(*gen)())
{
    T *mas = new T[N];
    for(int i =0; i<N;i++)
    {
        mas[i]=gen();
    }
    return mas;
}

#endif //WORK_TASK2_H
