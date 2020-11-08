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
		size_t L = size / 2;
		size_t R = size - L;
		T* left_arr = new T[L];
		for (size_t i = 0; i < L; i++) {
			left_arr[i] = arr[i];
		}
		msort(left_arr, L);
		T* right_arr = new T[R];
		for (size_t i = 0; i < R; i++) {
			right_arr[i] = arr[i + L];
		}
		msort(right_arr, R);
		size_t left_ind = 0, right_ind = 0;
		for (size_t i = 0; i < size; i++) {
			if (left_ind < L && right_ind < R) {
				if (comp(left_arr[left_ind], right_arr[right_ind])) {
					arr[i] = left_arr[left_ind];
					left_ind++;
				}
				else {
					arr[i] = right_arr[right_ind];
					right_ind++;
				}
			}
			else if (right_ind == R) {
				arr[i] = left_arr[left_ind];
				left_arr++;
			}
			else if (left_ind == L) {
				arr[i] = right_arr[right_ind];
				right_arr++;
			}
		}
	}
}
#endif // ! TASK1_H
