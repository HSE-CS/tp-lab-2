#include <iostream>
#include <string.h>


template<typename T>
bool compare(T a, T b) {
    return a < b;
}

template <> bool compare <char*>(char* a, char* b) {
    return strlen(a) < strlen(b);
}

template<typename T>
void merge(T arr[], int begin, int end)
{
    int i = begin,
        t = 0,
        mid = begin + (end - begin) / 2,
        j = mid + 1;
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
}


template<typename T>
void msort(T* arr, int left, int right)
{
    T temp;
    if (left<right)
        if (right - left == 1) {
            if (arr[right] < arr[left]) {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        else {
            msort(arr, left, left + (right - left) / 2);
            msort(arr, left + (right - left) / 2 + 1, right);
            merge(arr, left, right);
        }

}
