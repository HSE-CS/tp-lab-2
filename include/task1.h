#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
bool left_is_less(T a, T b){
    return a < b;
}

template<>
bool left_is_less(char* a, char* b){
    return (strlen(a) < strlen(b));
}

template<typename T> 
void msort(T* array, size_t size){
    if (size == 1) return;
    size_t lsize = size/2;
    size_t rsize = size - lsize;
    T* larray = new T[lsize];
    T* rarray = new T[rsize];
    for (int i = 0; i < lsize; i++)
        larray[i] = array[i];
    for (int i = lsize, j = 0; i < size; j++, i++)
        rarray[j] = array[i];
    msort(larray, lsize);
    msort(rarray, rsize);

    size_t l = 0;
    size_t r = 0;
    size_t m = 0;
    while (l != lsize && r != rsize){
        if (left_is_less(larray[l], rarray[r])){
            array[m] = larray[l];
            l++;
            m++;
        }
        else{
            array[m] = rarray[r];
            r++;
            m++;
        }
    }

    if (l == lsize){
        for (int i = m; i < size; i++, r++)
            array[i] = rarray[r];
    }
    else{
        for (int i = m; i < size; i++, l++)
            array[i] = larray[l];
    }

    delete[] larray;
    delete[] rarray;
 }
#endif