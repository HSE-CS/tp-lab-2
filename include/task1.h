#ifndef LAB_2_TASK1_H
#define LAB_2_TASK1_H

#include <cstring>
#include <iostream>

template<class T>

T range(T num) {
    return num;
}

unsigned int range(char *str) {
    return strlen(str);
}

template<class T>

void merge(T *initial, unsigned int start, unsigned int mid, unsigned int end) {
    T* merged = new T[end - start + 1];

    unsigned int i, j, k;
    for (i = start, j = mid + 1, k = 0; i <= mid && j <= end; k++) {
    
        if (range(initial[i]) < range(initial[j])) {
            merged[k] = initial[i];
            i++;
        } 
        
        else {
            merged[k] = initial[j];
            j++;
        }
    }

    for (; i <= mid; i++, k++)
        merged[k] = initial[i];
        
    for (; j <= end; j++, k++)
        merged[k] = initial[j];

    for (i = 0; i < k; i++)
       initial[i + start] = merged[i];
}

template<class T>

void msort(T *initial, unsigned int size, unsigned int start = 0, unsigned int end = 0) {
    if (size != 0) {
        msort(initial, 0, 0, size - 1);
    }
    
    if (start < end) {
        unsigned int mid = start + (end - start) / 2;
        msort(initial, 0, start, mid);
        msort(initial, 0, mid + 1, end);
        merge(initial, start, mid, end);
    }
}

#endif
