#ifndef TP_LAB_2_TASK1_H
#define TP_LAB_2_TASK1_H

#include <iostream>
#include <typeinfo>
#include <cstring>

using namespace std;

template<typename T>
void merge(T *arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    T L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

template<>
void merge(char** arr, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    char **L = new char *[n1];
    char **R = new char *[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int index1 = 0, index2 = 0, midindex = 0;
    for (midindex = l; index1 < n1 && index2 < n2; midindex++) {
        if (strlen(L[index1]) < strlen(R[index2])) {
            arr[midindex] = L[index1++];
        } else {
            arr[midindex] = R[index2++];
        }
    }
    for (index1, midindex; index1 < n1; index1++, midindex++) {
        arr[midindex] = L[index1];
    }
    for (index1, midindex; index2 < n2; index2++, midindex++) {
        arr[midindex] = R[index2];
    }
}

template<typename T>
void msort(T *a, size_t b, int l = 0, int r = 0) {
    if (b != 0) {
        msort(a, 0, 0, b - 1);
    }
    if (l < r) {
        int m = l + (r - l) / 2;
        msort(a, 0, l, m);
        msort(a, 0, m + 1, r);
        merge(a, l, m, r);
    }
}

template<>
void msort(char** arr, size_t b, int left, int right) {
    if (b != 0) {
        msort(arr, 0, 0, b - 1);
    }
    if (left < right) {
        int middle = left + (right - left) / 2;
        msort(arr, 0, left, middle);
        msort(arr, 0, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

#endif //TP_LAB_2_TASK1_H
