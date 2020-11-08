#include <iostream>
#include <cstring>
template<typename T>
void merge(T *a, int left, int right, unsigned int N)
{
    if (left == right)
        return;
    int mid = (left + right) / 2;
    merge(a, left, mid, N);
    merge(a, mid + 1, right, N);
    int i = left;
    int j = mid + 1;
    T *dop = new T [N];
    for (int m = 0; m < right - left + 1; m++)
    {
        if ((j > right) || ((i <= mid) && (a[i] < a[j])))
        {
            dop[m] = a[i];
            i++;
        }
        else
        {
            dop[m] = a[j];
            j++;
        }
    }
    for (int k = 0; k < right - left + 1; k++)
        a[left + k] = dop[k];
}

template<>
void merge(char **a, int left, int right, unsigned int N)
{
    if (left == right)
        return;
    int mid = (left + right) / 2;
    merge(a, left, mid, N);
    merge(a, mid + 1, right, N);
    int i = left;
    int j = mid + 1;
    char **dop = new char* [N];
    for (int m = 0; m < right - left + 1; m++)
    {
        if ((j > right) || ((i <= mid) && (strlen(a[i]) < strlen(a[j]))))
        {
            dop[m] = a[i];
            i++;
        }
        else
        {
            dop[m] = a[j];
            j++;
        }
    }
    for (int m = 0; m < right - left + 1; m++)
        a[left + m] = dop[m];
}

template <typename T>
void smurf(T arr, int left, int right, unsigned int N)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        smurf(arr, left, mid, N);
        smurf(arr, mid + 1, right, N);
        merge(arr, left, right, N);
    }
}

template <>
void smurf(char** a, int left, int right, unsigned int N)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        smurf(a, left, mid, N);
        smurf(a, mid + 1, right, N);
        merge(a, left, right, N);
    }
}

template <typename T>
void msort(T* arr, int N)
{
    smurf(arr, 0, N-1, N);
}