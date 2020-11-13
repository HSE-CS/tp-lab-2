//
// Created by toliman on 08.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>
#include <iostream>

template<typename T>
int compare(T first, T second) {
    return (int) (first <= second);
}


template<>
int compare(char *first, char *second) {
    return (int) (strlen(first) <= strlen(second));
}


template<typename T>
int len(T &array) {
    return sizeof(array) / sizeof(array[0]);
}

//template<typename T>
//void print(T &array, int size) {
//    for (int i = 0; i < size; ++i)
//        std::cout << array[i] << ' ';
//    std::cout << '\n';
//}
//
//void printchar(char **array, int size) {
//    // for (int i = 0; i < size; ++i)
//    std::cout << array[2] << ' ';
//    std::cout << '\n';
//}

// Не сложилось не получилось
//
//template<typename T>
//T *merge(T &left, T &right, int size, T &array) {
//    auto result = new T[len(left) + len(right)];
//    int left_index = 0, right_index = 0;
//    while (left_index < len(left) && right_index < len(right)) {
//        if (compare(left[left_index], right[right_index])) {
//            result[left_index + right_index] = left[left_index++];
//        } else {
//            result[left_index + right_index] = right[right_index++];
//        }
//    }
//
//    while (left_index < len(left))
//        result[left_index + right_index] = left[left_index++];
//
//    while (right_index < len(right))
//        result[left_index + right_index] = right[right_index++];
//
//    if (len(left) + len(right) == size)
//        for (int i = 0; i < size; ++i) {
//            array[i] = result[i];
//        }
//    return result;
//}
//
//
//template<typename T>
//T *msort(T &array, unsigned int size) {
//    if (len(array) < 2)
//        return array;
//    int middle = len(array) / 2;
//    T *left_part = new T[middle];
//    T *right_part = new T[len(array) - middle];
//
//    for (int i = 0; i < middle; ++i)
//        left_part[i] = array[i];
//
//    for (int i = 0; i < len(array) - middle; ++i)
//        right_part[i] = array[i + middle];
//
//    auto left = msort(left_part, middle);
//    auto right = msort(right_part, len(array) - middle);
//    return merge(left, right, size, array);
//}

template<typename T>
void merge(T *array, int left, int middle, int right) {
    T *left_part = new T[middle - left + 1];
    T *right_part = new T[right - middle];
    for (int i = 0; i < middle - left + 1; ++i) left_part[i] = array[i + left];
    for (int i = 0; i < right - middle; ++i) right_part[i] = array[i + middle + 1];
    int left_index = 0, right_index = 0, base_index = left;
    while (left_index < middle - left + 1 && right_index < right - middle) {
        if (compare(left_part[left_index], right_part[right_index])) array[base_index++] = left_part[left_index++];
        else array[base_index++] = right_part[right_index++];
    }
    while (left_index < middle - left + 1) array[base_index++] = left_part[left_index++];
    while (right_index < right - middle) array[base_index++] = right_part[right_index++];
}


template<typename T>
void msort(T *array, const int size, int left = 0, int right = -1) {

    if (right == -1) right = size;


    if (left < right) {
        int middle = left + (right - left) / 2;
        msort(array, size, left, middle);
        msort(array, size, middle + 1, right);
        merge(array, left, middle, right);
    }
}

#endif //TASK1_TASK1_H
