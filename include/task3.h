//
// Created by Алексей Трутнев on 07.11.2020.
//

#ifndef UNTITLED11_TASK3_H
#define UNTITLED11_TASK3_H

#include <iostream>

template<class T, size_t size>
void map(T arr[], T (*change)(T)) {
    for (size_t i = {0}; i < size; ++i)
        arr[i] = {change(arr[i])};
}

template<class T>
int change_arr(T a) {
    return a + a;
}

#endif //UNTITLED11_TASK3_H
