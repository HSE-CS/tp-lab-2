#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>


using namespace std;


template <class T>
void merge(T* arr, int l, int m, int r) 
{
    int i, j, k;
    int one = m - l + 1;
    int two = r - m;
    T First[one], Second[two];

    for (i = 0; i < one; i++)
        First[i] = arr[l + i];

    for (j = 0; j < two; j++)
        Second[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < one && j < two) 
    {
        if (First[i] <= Second[j]) 
        {
            arr[k] = First[i];
            i++;
        }
        else 
        {
            arr[k] = Second[j];
            j++;

        }
        k++;
    }

    while (i < one) 
    {
        arr[k] = First[i];
        i++;
        k++;
    }

    while (j < two) 
    {
        arr[k] = Second[j];
        j++;
        k++;
    }
}

template <class T>
void rekurs(T arr, int l, int r) 
{
    if (l < r) 
    {
        int m = l + (r - l) / 2;
        rekurs(arr, l, m);
        rekurs(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

template <>
void merge(char** arr, int l, int m, int r) 
{
    int i, j, k;
    int one = m - l + 1;
    int two = r - m;
    char** First = new char* [one];
    char** Second = new char* [two];

    for (i = 0; i < one; i++)
        First[i] = arr[l + i];

    for (j = 0; j < two; j++)
        Second[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < one && j < two) 
    {
        if (strlen(First[i]) < strlen(Second[j])) 
        {
            arr[k] = First[i];
            i++;
        }
        else 
        {
            arr[k] = Second[j];
            j++;

        }
        k++;
    }

    while (i < one) 
    {
        arr[k] = First[i];
        i++;
        k++;
    }

    while (j < two) 
    {
        arr[k] = Second[j];
        j++;
        k++;
    }
}

template <>
void rekurs(char** arr, int l, int r) 
{
    if (l < r) 
    {

        int m = l + (r - l) / 2;

        rekurs(arr, l, m);
        rekurs(arr, m + 1, r);

        merge(arr, l, m, r);

    }
}

template <class T>
void msort(T* arr, int size) 
{
    rekurs(arr, 0, size - 1);
}

#endif