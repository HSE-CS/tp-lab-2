
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
void merge(T arr[],int begin,int end)
{
    size_t  i = begin, t = 0, mid = begin + (end - begin) / 2, j = mid + 1;
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
void msort(T* arr, int N, int left, int right)
{
   
    if (left < right)
    {
        msort(arr,N, left, left + (right - left) / 2);
        msort(arr,N, left + (right - left) / 2 + 1, right);
        merge(arr,left,right);
    }

    

}
