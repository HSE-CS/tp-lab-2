#pragma once
#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
 
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template<typename T>
void merge(T* arr, size_t left, size_t middle, size_t right) {
    size_t len1 = middle - left + 1, 
           len2 = right - middle;

    T* l_mass = new T[len1];
    T* r_mass = new T[len2];

    for (size_t i = 0; i < len1; i++)
        l_mass[i] = arr[left + i];

    for (size_t i = 0; i < len2; i++)
        r_mass[i] = arr[middle + 1 + i];

    size_t f_index = 0, 
           s_index = 0,
           m_index = 0;

    for (m_index = left; f_index < len1 && s_index < len2; m_index++) {
        arr[m_index] = l_mass[f_index] <= r_mass[s_index] 
            ? l_mass[f_index++] 
            : r_mass[s_index++];
    }

    for (f_index, m_index; f_index < len1; f_index++, m_index++) {
        arr[m_index] = l_mass[f_index];
    }

    for (f_index, m_index; s_index < len2; s_index++, m_index++) {
        arr[m_index] = r_mass[s_index];
    }
}
template<>
void merge(char** arr, size_t left, size_t middle, size_t right) {

    size_t len1 = middle - left + 1, 
           len2 = right - middle;

    char** l_mass = new char* [len1];
    char** r_mass = new char* [len2];

    for (size_t i = 0; i < len1; i++)
        l_mass[i] = arr[left + i];

    for (size_t j = 0; j < len2; j++)
        r_mass[j] = arr[middle + 1 + j];

    size_t f_index = 0, 
           s_index = 0,
           m_index = 0;

    for (m_index = left; f_index < len1 && s_index < len2; m_index++) {
        arr[m_index] = strlen(l_mass[f_index]) < strlen(r_mass[s_index])
            ? l_mass[f_index++] 
            : r_mass[s_index++];
    }

    for (f_index, m_index; f_index < len1; f_index++, m_index++) {
        arr[m_index] = l_mass[f_index];
    }

    for (f_index, m_index; s_index < len2; s_index++, m_index++) {
        arr[m_index] = r_mass[s_index];
    }
}
template<typename T>
void msort(T arr, size_t size, size_t left = 0, size_t right = 0) {
    if (size != 0) {
        msort(arr, 0, 0, size - 1);
    }

    if (left < right) {
        size_t middle = left + (right - left) / 2;

        msort(arr, 0, left, middle);
        msort(arr, 0, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

template<>
void msort(char** arr, size_t size, size_t left, size_t right) {
    if (size != 0) {
        msort(arr, 0, 0, size - 1);
    }

    if (left < right) {
        size_t middle = left + (right - left) / 2;

        msort(arr, 0, left, middle);
        msort(arr, 0, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
#endif //TASK1_TASK1_H