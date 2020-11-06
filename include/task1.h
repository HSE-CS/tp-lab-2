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
void msort(T *arr, size_t size) {
	if (size > 1) {
		size_t l_size = size / 2;
		size_t r_size = size - l_size;
		T *l_arr = new T[l_size];
		for (size_t i = 0; i < l_size; i++) {
			l_arr[i] = arr[i];
		}
		msort(l_arr, l_size);
		T* r_arr = new T[r_size];
		for (size_t i = 0; i < r_size; i++) {
			r_arr[i] = arr[i + l_size];
		}
		msort(r_arr, r_size);
		size_t l_ind = 0, r_ind = 0;
		for (size_t i = 0; i < size; i++) {
			if (l_ind < l_size && r_ind < r_size) {
				if (comp(l_arr[l_ind], r_arr[r_ind])) {
					arr[i] = l_arr[l_ind];
					l_ind++;
				}
				else {
					arr[i] = r_arr[r_ind];
					r_ind++;
				}
			}
			else if (l_ind == l_size) {
				arr[i] = r_arr[r_ind];
				r_arr++;
			}
			else if (r_ind == r_size) {
				arr[i] = l_arr[l_ind];
				l_arr++;
			}
		}
	}
}
#endif // ! TASK1_H
