#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template<typename T>
void merge(T *array, size_t left, size_t middle, size_t right) {
    size_t lenghtLeftArray = middle - left + 1, lenghtRightArray = right - middle;
    T leftArray[lenghtLeftArray], rightArray[lenghtRightArray];
    for (size_t iter = 0; iter < lenghtLeftArray; iter++)
        leftArray[iter] = array[left + iter];
    for (size_t iter = 0; iter < lenghtRightArray; iter++)
        rightArray[iter] = array[middle + 1 + iter];
    size_t firstIndex = 0, secondIndex = 0, mergeIndex = left;
    while (firstIndex < lenghtLeftArray && secondIndex < lenghtRightArray) {
        if (leftArray[firstIndex] <= rightArray[secondIndex]) {
            array[mergeIndex] = leftArray[firstIndex];
            firstIndex++;
        } else {
            array[mergeIndex] = rightArray[secondIndex];
            secondIndex++;

        }
        mergeIndex++;

    }
    while (firstIndex < lenghtLeftArray) {
        array[mergeIndex] = leftArray[firstIndex];
        firstIndex++;
        mergeIndex++;
    }
    while (secondIndex < lenghtRightArray) {
        array[mergeIndex] = rightArray[secondIndex];
        secondIndex++;
        mergeIndex++;
    }
}

template<>
void merge(char **array, size_t left, size_t middle, size_t right) {
    size_t lenghtLeftArray = middle - left + 1, lenghtRightArray = right - middle;
    char **leftArray = new char *[lenghtLeftArray];
    char **rightArray = new char *[lenghtRightArray];
    for (size_t i = 0; i < lenghtLeftArray; i++)
        leftArray[i] = array[left + i];
    for (size_t j = 0; j < lenghtRightArray; j++)
        rightArray[j] = array[middle + 1 + j];
    size_t firstIndex = 0, secondIndex = 0, mergeIndex = left;
    while (firstIndex < lenghtLeftArray && secondIndex < lenghtRightArray) {
        if (strlen(leftArray[firstIndex]) < strlen(rightArray[secondIndex])) {
            array[mergeIndex] = leftArray[firstIndex];
            firstIndex++;
        } else {
            array[mergeIndex] = rightArray[secondIndex];
            secondIndex++;

        }
        mergeIndex++;

    }
    while (firstIndex < lenghtLeftArray) {
        array[mergeIndex] = leftArray[firstIndex];
        firstIndex++;
        mergeIndex++;
    }
    while (secondIndex < lenghtRightArray) {
        array[mergeIndex] = rightArray[secondIndex];
        secondIndex++;
        mergeIndex++;
    }
}

template<typename T>
void msort(T array, size_t size, size_t left = 0, size_t right = 0) {
    if (size != 0) {
        msort(array, 0, 0, size - 1);
    }
    if (left < right) {
        size_t middle = left + (right - left) / 2;
        msort(array, 0, left, middle);
        msort(array, 0, middle + 1, right);
        merge(array, left, middle, right);
    }
}

template<>
void msort(char **array, size_t size, size_t left, size_t right) {
    if (size != 0) {
        msort(array, 0, 0, size - 1);
    }
    if (left < right) {
        size_t middle = left + (right - left) / 2;
        msort(array, 0, left, middle);
        msort(array, 0, middle + 1, right);
        merge(array, left, middle, right);
    }
}


#endif //TASK1_TASK1_H