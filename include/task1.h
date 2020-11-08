#ifndef task1_h
#define task1_h

#include <iostream>
#include <cstring>

template <typename T>
void MergeSort(T *arr, int left, int right) {
    if (left == right) return;
    int mid = (left + right)/2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    int rfirst = left;
    int lfirst = mid + 1;
    T *temp = new T[right+1];
    for (int i = 0; i <= right - left; i++) {
        if (((arr[rfirst] < arr[lfirst]) && (rfirst <= mid)) || (lfirst > right)) {
            temp[i] = arr[rfirst];
            rfirst++;
        }
        else {
            temp[i] = arr[lfirst];
            lfirst++;
        }
    }
    for (int i = 0; i <= right - left; i++) {
        arr[left + i] = temp[i];
    }
}

template <>
void MergeSort(char **arr, int left, int right) {
    if (left == right) return;
    int mid = (left + right)/2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    int rfirst = left;
    int lfirst = mid + 1;
    char **temp = new char *[right+1];
    for (int i = 0; i <= right - left; i++) {
        if (((strlen(arr[rfirst]) < strlen(arr[lfirst])) && (rfirst <= mid)) || (lfirst > right)) {
            temp[i] = arr[rfirst];
            rfirst++;
        }
        else {
            temp[i] = arr[lfirst];
            lfirst++;
        }
    }
    for (int i = 0; i <= right - left; i++) {
        arr[left + i] = temp[i];
    }
}

template <typename T>
void msort(T *arr, int size) {
    if (size > 0)
        MergeSort(arr, 0, size - 1);
    else return;
}

template <>
void msort(char **arr, int size) {
    if (size > 0)
        MergeSort(arr, 0, size - 1);
    else return;
}
#endif
