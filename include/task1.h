
#include <iostream>
#include <string.h>


template <typename T>
bool compare(T a, T b) {
    return a < b;
}

template <> bool compare <char*> (char* a, char* b) {
    return strlen(a) < strlen(b);
}

template<typename T>
void merge(T arr[],size_t N)
{
    size_t begin = 0, end = N - 1, i = begin, t = 0, mid = begin + (end - begin) / 2, j = mid + 1;
        T* d= new T[end+1];

    while (i <= mid && j<= end) {

        if (compare(arr[i],arr[j])) {
            d[t] = arr[i]; 
            i++;
        }
        else {
            d[t] = arr[j]; 
            j++;
        }
        t++;
    }

    while (i <= mid) {
        d[t] = arr[i]; 
        i++; 
        t++;

    }

    while (j <= end) {
        d[t] = arr[j]; 
        j++;
        t++;
    }

    for (i = 0; i < t; i++)
        arr[begin + i] = d[i];
    delete[] d;
}


template<typename T>
void msort(T* arr, size_t N)
{
    if (N>=2)
    {
        size_t size = N / 2;
            msort(arr,size);
            msort(arr+size,N-size);
            merge(arr,N);
    }

}
