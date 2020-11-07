#ifndef  TASK1_H
#define TASK1_H

#include<climits>
#include<string.h>


template<class T>
bool comp(T a, T b) {
	return (a < b);
}
template<> bool comp<char*>(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template<class T>
void msort(T* arr, size_t size) {
	if (size > 1) {
		size_t left = size / 2;
		size_t right = size - left;
		T* left_array = new T[left];
		for (size_t i = 0; i < left; i++) {
			left_array[i] = arr[i];
		}
		msort(left_array, left);
		T* right_array = new T[right];
		for (size_t i = 0; i < right; i++) {
			right_array[i] = arr[i + left];
		}
		msort(right_array, right);
		size_t left_index = 0, right_index = 0;
		for (size_t i = 0; i < size; i++) {
			if (left_index < left && right_index < right) {
				if (comp(left_array[left_index], right_array[right_index])) {
					arr[i] = left_array[left_index];
					left_index++;
				}
				else {
					arr[i] = right_array[right_index];
					right_index++;
				}
			}
			else if (left_index == left) {
				arr[i] = right_array[right_index];
				right_array++;
			}
			else if (right_index == right) {
				arr[i] = left_array[left_index];
				left_array++;
			}
		}
	}
}
#endif 