//
// Created by victor on 08.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <cstring>

template <class T>
bool is_smaller(T L, T R) {
    return L < R;
}

template <>
bool is_smaller(char *L, char *R){
    return strlen(L) < strlen(R);
}


template < typename T >
void merge(T * arr, int left, int mid, int right)
{
    int len_left = mid - left + 1;
    int len_right = right - mid;

    T L[len_left], R[len_right];

    for(int i = 0; i < len_left; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < len_right; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, u = left;

    while (i < len_left && j < len_right)
    {
        if (is_smaller(L[i], R[j]))
        {
            arr[u] = L[i];
            i++; u++;
        }
        else if (!is_smaller(L[i], R[j]))
        {
            arr[u] = R[j];
            j++; u++;
        }
        else
        {
            arr[u] = L[i];
            arr[u+1] = R[j];
            i++; j++; u+=2;
        }
    }

    while (i < len_left)
    {
        arr[u] = L[i];
        i++;
        u++;
    }

    while (j < len_right)
    {
        arr[u] = R[j];
        j++;
        u++;
    }
}

template < typename T >
void real_msort(T arr[], int right, int left=0)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        real_msort(arr, mid, left);
        real_msort(arr, right, mid + 1);

        merge(arr, left, mid, right);
    }
}
template < typename T >
void msort(T * arr, size_t n){
    real_msort(arr, n-1);
}
#endif //TASK1_TASK1_H


