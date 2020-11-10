#ifndef TASK2_H
#define TASK2_H

template<typename T, int N>
T* createArr(T (*func)()) {
    T* arr = new T[N];
    for (int i = 0; i < N; i++){
        arr[i] = func();
    }
    return arr;
}

#endif // TASK2_H
