/*
 * @author Stanislav Stoianov
 */

/*
 * Написать шаблонную функцию msort, сортирующую массив элементов T слиянием.
 * Если тип элемента массива char*, то производится сортировка по длине строк.
 */

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template<typename T>
bool comp(T a, T b) { return a < b; }

template<>
bool comp<char *>(char *a, char *b) { return strlen(a) < strlen(b); }

template<typename T>
void merge(T *arr, int first, int last);

template<typename T>
void sort(T *arr, int first, int last);

template<typename T>
void msort(T *array, size_t size) {
    sort(array, 0, size - 1);
}

template<typename T>
void merge(T *arr, int first, int last) {
    T *temp = new T[last + 1];
    int m = (first + last) / 2, i = first, k = m + 1;
    for (int j = first; j <= last; j++) {
        if (!(i <= m) || !((k > last) || (comp(arr[i], arr[k])))) {
            temp[j] = arr[k];
            k++;
        } else {
            temp[j] = arr[i];
            i++;
        }
    }
    for (int j = first; j <= last; j++) arr[j] = temp[j];
    delete[] temp;
}

template<typename T>
void sort(T *arr, int first, int last) {
    if (first < last) {
        sort(arr, first, (first + last) / 2);
        sort(arr, (first + last) / 2 + 1, last);
        merge(arr, first, last);
    }
}

#endif