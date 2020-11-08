#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template<class T>
void merge(T arr[], int l, int mid, int r) {
    int p1 = l;
    int p2 = mid + 1;
    int p3 = 0;
    T *temp = new T[r - l + 1];
    while (p1 <= mid && p2 <= r) {
        if (arr[p1] < arr[p2])
            temp[p3++] = arr[p1++];
        else
            temp[p3++] = arr[p2++];
    }
    while (p2 <= r)
        temp[p3++] = arr[p2++];
    while (p1 <= mid)
        temp[p3++] = arr[p1++];
    for (p3 = 0; p3 < r - l + 1; p3++)
        arr[l + p3] = temp[p3];
    delete temp[r - l + 1];
}

template<class T>
void merge(char** arr, int l, int mid, int r) {
    int p1 = l;
    int p2 = mid + 1;
    int p3 = 0;
    char** temp = new char*[r - l + 1];
    while (p1 <= mid && p2 <= r) {
        if (strlen(arr[p1]) < strlen(arr[p2]))
            temp[p3++] = arr[p1++];
        else
            temp[p3++] = arr[p2++];
    }
    while (p2 <= r)
        temp[p3++] = arr[p2++];
    while (p1 <= mid)
        temp[p3++] = arr[p1++];
    for (p3 = 0; p3 < r - l + 1; p3++)
        arr[l + p3] = temp[p3];
    delete temp[r - l + 1];
}

template<class T>
void mergeSort(T arrToSort[], int l, int r) {
    int mid;                   // индекс, по которому делим массив

    if (l < r) {                // если есть более 1 элемента

        mid = (l + r) / 2;

        mergeSort(arrToSort, l, mid);       // сортировать левую половину
        mergeSort(arrToSort, mid + 1, r);// сортировать правую половину
        merge(arrToSort, l, mid, r);    // слить результаты в общий массив
    }
}

template<class T>
void msort(T arrToSort[], int size) {
    mergeSort(arrToSort, 0, size);
}

#endif //TASK1_TASK1_H
