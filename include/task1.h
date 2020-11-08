#include <iostream>
#include <cstring>
#ifndef TASK1_H
#define TASK1_H

using namespace std;

template<typename T> bool comp(T a, T b) {
	return a < b;
}

template<>bool comp <char *>(char*a, char *b){
return strlen(a) < strlen(b);
}

template<typename T>
void msort(T* arr, size_t n) {
	if (n > 1) {
		size_t left = n / 2;
		size_t right = n - left;

		T* a_left = new T[left];
		for (unsigned int i = 0; i < left; i++) {
			a_left[i] = arr[i];
		}

		msort(a_left, left);

		T* a_right = new T[right];
			for (unsigned int i = 0; i < right; i++) {
				a_right[i] = arr[i + left];
			}

		msort(a_right, right);

		size_t l_i = 0;
		size_t r_i = 0;
		for (unsigned int i = 0; i < n; i++) {
			if ((l_i < left) && (r_i < right)) {
				if (comp(a_left[l_i], a_right[r_i])) {
					arr[i] = a_left[l_i];
					l_i = l_i + 1;
				}else {
					arr[i] = a_right[r_i];
					r_i = r_i + 1;
				}
			}
			else if (l_i == left) {
				arr[i] = a_right[r_i];
				r_i = r_i + 1;
			}
			else if (r_i == right) {
				arr[i] = a_left[l_i];
				l_i = l_i + 1;
			}
		}
	}
}
#endif
