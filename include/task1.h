//
// Created by Vadim Makarov on 02.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>

using namespace std;

template <class T>
void merge(T * arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    T L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

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

template <class T>
void rekurs(T arr, int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;

        rekurs(arr, l, m);
        rekurs(arr, m + 1, r);

        merge(arr, l, m, r);

    }
}

template <>
void merge(char ** arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    char ** L = new char*[n1];
    char ** R = new char*[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (strlen(L[i]) <= strlen(R[j])) {
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

template <>
void rekurs(char ** arr, int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;

        rekurs(arr, l, m);
        rekurs(arr, m + 1, r);

        merge(arr, l, m, r);

    }
}

template <class T>
void msort(T * arr, int size){
    //cout << typeid(arr).name();
    rekurs(arr, 0, size-1);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "  ";
    }
}


#endif