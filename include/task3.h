//
// Created by Алексей Трутнев on 07.11.2020.
//

#include <iostream>

template<class T, size_t size>
void map(T arr[], T (*change)(T)) {
    for (size_t i = {0}; i < size; ++i)
        arr[i] = {change(arr[i])};
}

template<class T>
T change_arr(T a) {
    return a + a;
}
