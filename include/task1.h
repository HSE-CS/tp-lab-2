#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <cstring>

template <typename T>
bool comparator(T first, T second)
{
    return first < second;
};

template <>
bool comparator<char *>(char *first, char *second)
{
    return strlen(first) < strlen(second);
};

template <typename T>
void merge(T *array, size_t arraySize)
{
    T *offset = new T[arraySize];
    size_t mid = arraySize / 2;
    size_t i = 0, j = mid, k = 0;
    while (i < mid && j < arraySize)
    {
        if (comparator(array[i], array[j]))
        {
            offset[k] = array[i];
            k++;
            i++;
        }
        else
        {
            offset[k] = array[j];
            k++;
            j++;
        }
    }
    while (i < mid)
    {
        offset[k] = array[i];
        k++;
        i++;
    }
    while (j < arraySize)
    {
        offset[k] = array[j];
        k++;
        j++;
    }
    for (i = 0; i < arraySize; i++)
    {
        array[i] = offset[i];
    }
    delete[] offset;
}

template <typename T>
void msort(T *array, size_t arraySize)
{
    if (arraySize > 1)
    {
        size_t mid = arraySize / 2;
        msort(array, mid);
        msort(array + mid, arraySize - mid);
        merge(array, arraySize);
    }
};

#endif