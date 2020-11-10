#pragma once
#define TASK2_H
#ifdef TASK2_H
template<typename T, size_t size>
T* createArr(T(*arg)()) {
    T* arr = new T[size];
    for (size_t i = 0; i < size; i++)
        arr[i] = arg();
    return arr;
}

#endif //TASK2_H
