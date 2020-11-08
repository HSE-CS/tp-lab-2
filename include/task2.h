#include <iostream>

template <typename T, int N>

T* createArr(T (*gen)()) {
    T* array = (T*)malloc(N*sizeof(T));
    for (int i = 0; i < N; i++) {
        array[i] = gen();
    }
    return array;
}
