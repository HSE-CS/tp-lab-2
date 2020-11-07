#ifndef TEST_TASK3_H
#define TEST_TASK3_H


template <typename T, unsigned int n>
void map(T *arr, T(*change)(T)){
    for (int i = 0; i < n; ++i) {
        arr[i] = change(arr[i]);
    }
}

#endif //TEST_TASK3_H

