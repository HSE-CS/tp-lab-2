#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template <typename T>
bool comp(T a, T b)
{
    return (a <= b);
}

template <>
bool comp(char* a, char* b)
{
    return (strlen(a) < strlen(b));
}

template <typename T>
void merge(T* array, size_t left, size_t mid, size_t right)
{
    T* buf = new T[right + 1];

    for (int i = left; i <= right; i++)
        buf[i] = array[i];

    int i = left, j = mid + 1;

    for (int k = left; k <= right; k++)
    {
        if (i > mid)
        {
            array[k] = buf[j];
            j++;
        }
        else if (j > right)
        {
            array[k] = buf[i];
            i++;
        }
        else if (comp(buf[i], buf[j]))
        {
            array[k] = buf[i];
            i++;
        }
        else
        {
            array[k] = buf[j];
            j++;
        }
    }
}

template <typename T> void mergeSort(T* array, size_t left, size_t right)
{
    if (right <= left)
        return;

    size_t mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);

}

template <typename T>
void msort(T* array, size_t size)
{
    mergeSort(array, 0, size - 1);
}

#endif //TASK1_TASK1_H