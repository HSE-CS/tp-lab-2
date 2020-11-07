#ifndef  TASK1_H
#define TASK1_H

#include<climits>
#include<string.h>
#include <iostream>
#include <typeinfo>

template<class T> bool comparator(T a, T b) {
	return (a < b);
}
template<> bool comparator<char*>(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template<class T>
void msort(T *array, size_t n) {
	if (n > 1) {
		size_t sizeOfLeftArray = n / 2;
		size_t sizeOfRightArray = n - sizeOfLeftArray;
		T *arrayOfLeft = new T[sizeOfLeftArray];
		for (size_t i = 0; i < sizeOfLeftArray; i++) {
			arrayOfLeft[i] = array[i];
		}
		msort(arrayOfLeft, sizeOfLeftArray);
		T* arrayOfRight = new T[sizeOfRightArray];
		for (size_t i = 0; i < sizeOfRightArray; i++) {
			arrayOfRight[i] = array[i + sizeOfLeftArray];
		}
		msort(arrayOfRight, sizeOfRightArray);
		size_t leftIndex = 0, rightIndex = 0;
		for (size_t i = 0; i < n; i++) {
			if (leftIndex < sizeOfLeftArray && rightIndex < sizeOfRightArray) {
				if (comparator(arrayOfLeft[leftIndex], arrayOfRight[rightIndex])) {
					array[i] = arrayOfLeft[leftIndex];
					leftIndex++;
				}
				else {
					array[i] = arrayOfRight[rightIndex];
					rightIndex++;
				}
			}
			else if (leftIndex == sizeOfLeftArray) {
				array[i] = arrayOfRight[rightIndex];
				arrayOfRight++;
			}
			else if (rightIndex == sizeOfRightArray) {
				array[i] = arrayOfLeft[leftIndex];
				arrayOfLeft++;
			}
		}
	}
}
#endif