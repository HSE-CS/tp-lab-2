#ifndef TASK1_H
#define TASK1_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <utility>

template <class T>
void msort(T *a, size_t len){
    if (len > 1){
        size_t m = len / 2;
        msort(a, m);
        msort(a+m, len-m);

        size_t i = 0, j = m, k = 0;
        T *tmp = new T[len];

        while (i < m || j < len){
            if (a[i] < a[j]){
                tmp[k++] = std::move(a[i++]);
            } else {
                tmp[k++] = std::move(a[j++]);
            }
            if (i == m){
                memcpy(tmp+k, a+j, (len-j)*sizeof(T));
                break;
            }
            if (j == len){
                memcpy(tmp+k, a+i, (m-i)*sizeof(T));
                break;
            }
        }
        memcpy(a, tmp, len*sizeof(T));
        delete[] tmp;
    }
}

// Copy-paste all the way
template <>
void msort(char **a, size_t len){
    if (len > 1){
        size_t m = len / 2;
        msort(a, m);
        msort(a+m, len-m);

        size_t i = 0, j = m, k = 0;
        char **tmp = (char**)malloc(sizeof(char*)*len);
        if (!tmp) exit(1);

        while (i < m || j < len){
            if (strlen(a[i]) < strlen(a[j])){
                tmp[k++] = std::move(a[i++]);
            } else {
                tmp[k++] = std::move(a[j++]);
            }
            if (i == m){
                memcpy(tmp+k, a+j, (len-j)*sizeof(char*));
                break;
            }
            if (j == len){
                memcpy(tmp+k, a+i, (m-i)*sizeof(char*));
                break;
            }
        }
        memcpy(a, tmp, len*sizeof(char*));
        free(tmp);
    }
}
#endif