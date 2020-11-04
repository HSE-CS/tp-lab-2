//
// Created by stoja on 03.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template<typename T>
void merge(T *arr, int left, int middle, int right);
template<>
void merge(char** arr, int l, int m, int r);
template<typename T>
void msort(T *arr, size_t b, int l = 0, int r = 0){
    if (b != 0) {
        msort(arr, 0, 0, b - 1);
    }
    if (l < r)
    {
        int m = l + (r - l) / 2;

        msort(arr, 0, l, m);
        msort(arr, 0, m + 1, r);

        merge(arr, l, m, r);
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

template<typename T>
void merge(T *arr, int left, int middle, int right)
{
    int m1 = middle - left + 1;
    int m2 = right - middle;

    T L[m1], R[m2];

    for(int i = 0; i < m1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < m2; j++)
        R[j] = arr[middle + 1 + j];

    int i = 0;

    int j = 0;

    int k = left;

    while (i < m1 && j < m2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < m1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < m2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
template<>
void merge(char** arr, int left, int middle, int right) {
    int len1 = middle - left + 1, len2 = right - middle;

    char** m1 = new char* [len1];
    char** m2 = new char* [len2];

    for (int i = 0; i < len1; i++)
        m1[i] = arr[left + i];

    for (int j = 0; j < len2; j++)
        m2[j] = arr[middle + 1 + j];

    int first_index = 0,
            second_index = 0,
            third_index = 0;

    for (third_index = left; first_index < len1 && second_index < len2; third_index++) {
        if (strlen(m1[first_index]) < strlen(m2[second_index])) {
            arr[third_index] = m1[first_index++];
        }
        else {
            arr[third_index] = m2[second_index++];
        }
    }

    for (first_index, third_index; first_index < len1; first_index++, third_index++) {
        arr[third_index] = m1[first_index];
    }

    for (first_index, third_index; second_index < len2; second_index++, third_index++) {
        arr[third_index] = m2[second_index];
    }
}

#endif //TASK1_TASK1_H
