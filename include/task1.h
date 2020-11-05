#ifndef TP_LAB_2_TASK1_H
#define TP_LAB_2_TASK1_H

#include <cstring>

template<typename T>
bool comp(T a, T b) {
    return a < b;
}

template<>
bool comp(char *a, char *b) {
    return strlen(a) < strlen(b);
}

template<typename T>
void merge(T *arr, size_t n) {
    size_t c = n / 2;
    size_t i = 0;
    size_t j = c;
    size_t k = 0;
    T *tmp = new T[n];
    while (i < c && j < n) {
        if (comp(arr[i], arr[j])) {
            tmp[k++] = arr[i++];
        } else {
            tmp[k++] = arr[j++];
        }
    }
    while (i < c) {
        tmp[k++] = arr[i++];
    }
    while (j < n) {
        tmp[k++] = arr[j++];
    }
    for (size_t i = 0; i < n; ++i) {
        arr[i] = tmp[i];
    }
}

template<typename T>
void msort(T *arr, size_t n) {
    if (n >= 2) {
        size_t new_size = n / 2;
        msort(arr, new_size);
        msort(arr + new_size, n - new_size);
        merge(arr, n);
    }
}

#endif //TP_LAB_2_TASK1_H
