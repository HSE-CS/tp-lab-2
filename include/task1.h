#pragma once

#include <iostream>
#include <cstring>

template<typename T>
void merge(T* v1, T* v2, int l1, int l2);
template <typename T>
int cmp(T a, T b);


template<typename T>
void msort(T* v, int c) {
    int a = 0;
    c--;
    if (c > a) {
        int m;
        if ((a + c) % 2 == 0) {
            m = (a + c) / 2;
        }
        else {
            m = ((a + c) / 2) + 1;
        }

        msort(v+a, m - a);
        msort(v+m, c - m + 1);
        merge(v+a, v+m, m - a, c - m + 1);
    }

    return;
    
}

template<typename T>
void merge(T* v1, T* v2, int l1, int l2) {
    int k1 = 0;
    int k2 = 0;

    T* vk = new T[l1 + l2];

    for (int i = 0; i < l1 + l2; i++) {
        if (k2 < l2 && k1 < l1) {
            if (!cmp(v2[k2], v1[k1])) {
                vk[i] = v2[k2];
                k2++;
            }
            else {
                vk[i] = v1[k1];
                k1++;
            }
        }
        else {
            if (k1 >= l1) {
                vk[i] = v2[k2];
                k2++;
            }
            else {
                vk[i] = v1[k1];
                k1++;
            }
        }

    }
    memmove(v1, vk, (l1 + l2) * sizeof(T));
    return;

}

template <typename T>
int cmp(T a, T b){
    return a > b;
}
template <>
int cmp<char*>(char* a, char* b) {
    return strlen(a) > strlen(b);
}
