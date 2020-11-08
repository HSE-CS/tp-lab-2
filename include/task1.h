#pragma once
#define TASK1_H
#ifdef TASK1_H
template<typename T>

void merge(T* arg, int first, int last, size_t size) {
    if (first == last) {
        return;
    }
    int mid = (first + last + 1) / 2; 
    if ((first + last + 1) % 2 == 1)
        mid++;
    merge(arg, first, mid - 1, size);
    merge(arg, mid, last, size);
    int i = first;
    int j = mid;
    T* b = new T[size];
    for (int k = 0; k < last - first + 1; k++) {
        if ((j > last) || ((arg[i] < arg[j]) && (i < mid))) {
            b[k] = arg[i];
            i += 1;
        }
        else {
            b[k] = arg[j];
            j += 1;
        }
    }
    for (int k = 0; k < last - first + 1; k++) { arg[first + k] = b[k]; }
    delete b;
}
template<>
void merge(char** arg, int first, int last, size_t size) {
    if (first == last) {
        return;
    }
    int mid = (first + last + 1) / 2;
    if ((first + last + 1) % 2 == 1)
        mid++;
    merge(arg, first, mid - 1, size);
    merge(arg, mid, last, size);
    int i = first;
    int j = mid;
    char** b = new char* [size];

    for (int k = 0; k < last - first + 1; k++) {
        if ((j > last) || ((strlen(arg[i]) < strlen(arg[j])) && (i < mid))) {
            b[k] = arg[i];
            i += 1;
        }
        else {
            b[k] = arg[j];
            j += 1;
        }
    }
    for (int k = 0; k < last - first + 1; k++) { arg[first + k] = b[k]; }
    delete b;
}
template<typename T>
void msort(T* arg, size_t size) {
    int first = 0, last = size - 1, mid = (first + last + 1) / 2;
    if ((first + last + 1) % 2 == 1)
        mid++;
    merge(arg, first, mid - 1, size);
    merge(arg, mid, last, size);
    int i = first;
    int j = mid;
    T* b = new T[size];
    for (int k = 0; k < last - first + 1; k++) {
        if ((j > last) || ((arg[i] < arg[j]) && (i < mid))) {
            b[k] = arg[i];
            i += 1;
        }
        else {
            b[k] = arg[j];
            j += 1;
        }
    }
    for (int k = 0; k < last - first + 1; k++) { arg[first + k] = b[k]; }
    delete b;
}
template<>
void msort(char** arg, size_t size) {
    int first = 0, last = size - 1,mid = (first + last + 1) / 2;
    if ((first + last + 1) % 2 == 1)
        mid++;
    merge(arg, first, mid - 1, size);
    merge(arg, mid, last, size);
    int i = first;
    int j = mid;
    char** b = new char* [size];
    for (int k = 0; k < last - first + 1; k++) {
        if ((j > last) || ((strlen(arg[i]) < strlen(arg[j])) && (i < mid))) {
            b[k] = arg[i];
            i += 1;
        }
        else {
            b[k] = arg[j];
            j += 1;
        }
    }
    for (int k = 0; k < last - first + 1; k++) { arg[first + k] = b[k]; }
    delete b;
}
#endif // TASK1_H

