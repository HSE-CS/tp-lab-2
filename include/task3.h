//
// Created by freeb on 02.11.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<typename T, size_t n>
void map(T arr[], T (*change)(T)) {
    for (int i = 0; i < n; i++) {
        arr[i] = change(arr[i]);
    }
}

#endif //TASK1_TASK3_H
