#include <cstring>
#include <iostream>


template<typename T>
void merge_sort(T *arr, int l, int r) {
    if (r <= l)
        return;
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    T *arr2 = new T[r + 1];
    for (int i = 0; i < r + 1; i++)
        arr2[i] = arr[i];
    int i = l, j = m + 1;
    for (int k = l; k <= r; k++) {
        if (i > m) {
            arr[k] = arr2[j];
            j++;
        } else if (j > r) {
            arr[k] = arr2[i];
            i++;
        } else if (arr2[j] < arr2[i]) {
            arr[k] = arr2[j];
            j++;
        } else {
            arr[k] = arr2[i];
            i++;
        }
    }
}


template<>
void merge_sort(char **arr, int l, int r) {
    if (r <= l)
        return;
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    char **arr2 = new char *[r + 1];
    for (int i = 0; i < r + 1; i++)
        arr2[i] = arr[i];
    int i = l, j = m + 1;
    for (int k = l; k <= r; ++k) {
        if (i > m) {
            arr[k] = arr2[j];
            j++;
        } else if (j > r) {
            arr[k] = arr2[i];
            i++;
        } else if (strlen(arr2[j]) < strlen(arr2[i])) {
            arr[k] = arr2[j];
            j++;
        } else {
            arr[k] = arr2[i];
            i++;
        }
    }
}

template<typename T>
void msort(T *arr, int size) {
    if (size > 0)
        merge_sort(arr, 0, size - 1);
    else
        return;
}

template<>
void msort(char **arr, int size) {
    if (size > 0)
        merge_sort(arr, 0, size - 1);
    else
        return;
}