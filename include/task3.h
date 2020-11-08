#include <iostream>

template <typename T, size_t N>

T* map(T* array, T(*change)(T a)) {
    for (int i = 0; i < N; ++i) {
        array[i] = change(array[i]);
    }
    return array;
}
