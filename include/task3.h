#ifndef TASK3_H
#define TASK3_H

template <typename T, int N>
void map(T *arr, T(*func)(T arg)){
    for(int i = 0;i < N; i++){
        arr[i] = func(arr[i]);
    }
}

#endif // TASK3_H
