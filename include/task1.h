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
int compare(const char *first, const char *second) {
    return (int) (strlen(first) <= strlen(second));
}


template<typename T>
int len(T &array) {
    return sizeof(array) / sizeof(array[0]);
}

template<typename T>
void print(T &array) {
    for (int i = 0; i < len(array); ++i)
        std::cout << array[i] << ' ';
    std::cout << '\n';
}

//template<class T>
//void merge(T &array, int left, int middle, int right) {
//    int first = middle - left + 1;
//    int second = right - middle + 1;
//
//
//}


//template<class T>
//void msort(T &array, int left = 0, int right = -1) {
//    if (right == -1) right = len(array);
//    if (left < right) {
//        int middle = left + (right - left) / 2;
//        msort(array, left, middle);
//        msort(array, middle + 1, right);
//        merge(array, left, middle, right);
//    }
//}

template<typename T>
T &merge(T &left, T &right, int size, T &array) {
    auto result = new T[len(left) + len(right)];
    int left_index = 0, right_index = 0;
    while (left_index < len(left) && right_index < len(right)) {
        if (compare(left[left_index], right[right_index])) {
            result[left_index + right_index] = left[left_index++];
        } else {
            result[left_index + right_index] = right[right_index++];
        }
    }

    while (left_index < len(left))
        result[left_index + right_index] = left[left_index++];

    while (right_index < len(right))
        result[left_index + right_index] = right[right_index++];

    if (len(left) + len(right) == size)
        for (int i = 0; i < size; ++i) {
            array[i] = result[i];
        }
    return result;
}


template<typename T>
T &msort(T &array, unsigned int size) {
    if (len(array) < 2)
        return array;
    int middle = len(array) / 2;
    auto left_part = new T[middle];
    auto right_part = new T[len(array) - middle];

    for (int i = 0; i < middle; ++i)
        left_part[i] = array[i];

    for (int i = 0; i < len(array) - middle; ++i)
        right_part[i] = array[i + middle];

    auto left = msort(left_part);
    auto right = msort(right_part);
    return merge(left, right, size, array);
}

#endif //TASK1_TASK1_H
