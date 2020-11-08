#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<typename T, unsigned int N>

void map (T* arr, T (*change)(T)){
    for (unsigned int i = 0; i < N; i++)
        arr[i] = change(arr[i]);

}

#endif //TASK1_TASK3_H
