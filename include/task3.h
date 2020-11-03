#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template <typename T, size_t size>
void map(T* arr, T(*change)(T)){
    for (unsigned int i = 0; i < size; i++)
        arr[i] = change(arr[i]);
}

template <typename T>
T change(T a) {
    return a + 1;
}
#endif //TASK1_TASK3_H
