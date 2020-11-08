//
// Created by Алексей Трутнев on 07.11.2020.
//

#ifndef UNTITLED11_TASK1_H
#define UNTITLED11_TASK1_H

#include<iostream>
#include<cstring>

template<class T>
bool comp(T a, T b){
    return (a < b);
}

template<>
bool comp<char*>(char* a, char* b){
    return (strlen(a) < strlen(b));
}

template<class T>
void merge(T* arr, T* l_arr, T* r_arr, size_t l_size, size_t r_size, size_t size){
    size_t l_ind = {0};
    size_t r_ind = {0};

    for (size_t i = {0}; i < size; ++i){
        if (l_ind < l_size && r_ind < r_size){
            if (comp(l_arr[l_ind], r_arr[r_ind])){
                arr[i] = l_arr[l_ind];
                l_ind++;
            }else{
                arr[i] = r_arr[r_ind];
                r_ind++;
            }
        }else if (r_ind == r_size){
            arr[i] = l_arr[l_ind];
            l_arr++;
        }else if (l_ind == l_size){
            arr[i] = r_arr[r_ind];
            r_arr++;
        }
    }
}

template<class T>
void msort(T* arr, size_t size) {

    if (size <= 1) return;

    size_t l_size = size / 2;
    T* l_arr = new T[l_size];
    for (size_t i = {0}; i < l_size; ++i)
        l_arr[i] = arr[i];
    msort(l_arr, l_size);

    size_t r_size = size - l_size;
    T* r_arr = new T[r_size];
    for (size_t i = {0}; i < r_size; ++i)
        r_arr[i] = arr[i + l_size];
    msort(r_arr, r_size);

    merge(arr, l_arr, r_arr, l_size, r_size, size);
}

#endif //UNTITLED11_TASK1_H
