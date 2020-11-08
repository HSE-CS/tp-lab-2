#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
using namespace std;

#include <cstring>

template <class T>
bool comp(T a, T b) {
    return a < b;
}

template <>
bool comp(char *a, char *b){
    return strlen(a) < strlen(b);
}

template <class T>
void msort(T *arr, int end, int start = 0){
    if (end-start <= 1)
        return;
    int mid = (start + end) / 2;

    msort(arr, mid, start);
    msort(arr, end, mid);

    T *temp = new T[end-start];
    int i = start, j = mid, counter = 0;
    while (i < mid && j < end){
        if (comp(arr[i], arr[j]))
            temp[counter++] = arr[i++];
        else
            temp[counter++] = arr[j++];
    }
    while (i < mid)
        temp[counter++] = arr[i++];
    while (j < end)
        temp[counter++] = arr[j++];
    counter = 0;
    for (i = start; i < end; ++i) {
        arr[i] = temp[counter++];
    }
    delete [] temp;
}

template <class T>
void printArr(T arr[], int size){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

#endif //TASK1_TASK1_H
