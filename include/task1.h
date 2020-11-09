//
// Created by victor on 08.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <cstring>

template <class T>
bool is_bigger(T L, T R) {
    return L < R;
}

template <>
bool is_bigger(char *L, char *R){
    return strlen(L) < strlen(R);
}


template < typename T >
void merge(T arr[], int left, int mid, int right)
{
    int len_left = mid - left + 1;
    int len_right = right - mid;

    int L[len_left], R[len_right];

    for(int i = 0; i < len_left; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < len_right; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, u = left;

    while (i + j < len_left + len_right)
    {
        if (!is_bigger(L, R))
        {
            arr[u] = L[i];
            i++; u++;
        }
        else if (is_bigger(L, R))
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
void msort(T arr[], int right, int left=0)
{
    if (left < right)
    {
        int mid = (left + (right - left)) / 2;

        msort(arr, mid, left);
        msort(arr, right, mid + 1);

        merge(arr, left, mid, right);
    }
}
#endif //TASK1_TASK1_H


