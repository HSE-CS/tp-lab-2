#ifndef LAB2_TASK1_H
#define LAB2_TASK1_H

#include <iostream>
#include <cstring>
#include <vector>

template<typename T>
void mergeSort(T *arr, int low, int mid, int high, T *arr2) {
    int second_half = mid;
    for (int i = low; i < high + 1; i++) {
        arr2[i] = arr[i];
    }
    for (int i = low; i < high + 1; i++) {
        if (low >= mid) {
            arr[i] = arr2[second_half];
            second_half += 1;
        } else if (second_half > high) {
            arr[i] = arr2[low];
            low += 1;
        } else if (arr2[low] >= arr2[second_half]) {
            arr[i] = arr2[second_half];
            second_half += 1;
        } else if (arr2[low] < arr2[second_half]) {
            arr[i] = arr2[low];
            low += 1;
        }
    }
}

template<>
void mergeSort(char **arr, int low, int mid, int high, char **arr2) {
    int second_half = mid;
    for (int i = low; i < high + 1; i++) {
        arr2[i] = arr[i];
    }
    for (int i = low; i < high + 1; i++) {
        if (low >= mid) {
            arr[i] = arr2[second_half];
            second_half += 1;
        } else if (second_half > high) {
            arr[i] = arr2[low];
            low += 1;
        } else if (strlen(arr2[low]) >= strlen(arr2[second_half])) { //
            arr[i] = arr2[second_half];
            second_half += 1;
        } else if (strlen(arr2[low]) < strlen(arr2[second_half])) {  //
            arr[i] = arr2[low];
            low += 1;
        }
    }
}

template<typename T>
T *sort(T *arr, int low, int high, T *arr2) {
    int mid = low + (high - low) / 2;
    if (low < high) {
        sort(arr, low, mid, arr2);
        sort(arr, mid + 1, high, arr2);
        mergeSort(arr, low, mid + 1, high, arr2);
        return arr;
    }
    return arr;
}

template<>
char **sort(char **arr, int low, int high, char **arr2) {
    int mid = low + (high - low) / 2;
    if (low < high) {
        sort(arr, low, mid, arr2);
        sort(arr, mid + 1, high, arr2);
        mergeSort(arr, low, mid + 1, high, arr2);
        return arr;
    }
    return arr;
}

template<typename T>
void msort(T *arr, const unsigned int size) {
    unsigned int low = 0;
    unsigned int high = size - 1;
    T *arr2 = new T[size];

    for (int i = 0; i < size; ++i) {
        arr2[i] = arr[i];
    }
    sort(arr, low, high, arr2);
}

template<>
void msort(char **arr, const unsigned int size) {
    unsigned int low = 0;
    unsigned int high = size - 1;
    char **arr2 = new char *[size];

    for (int i = 0; i < size; ++i) {
        arr2[i] = new char[strlen(arr[i])];
        strcpy(arr2[i], arr[i]);
    }
    sort(arr, low, high, arr2);
}

#endif //LAB2_TASK1_H
