#pragma once
#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <string.h>

/*template <typename T>
void copy(T* from, T* to, size_t left, size_t right) {
	for (size_t i = left; i < right; i++) {
		to[i - left] = from[i];
	}
}*/

template <typename T>
void merge(T* arr, T* arr_l, T* arr_r, size_t left, size_t right, size_t size) {
	size_t l_idx = 0, r_idx = 0, idx = 0;
	for (size_t i = 0; i < size; ++i) {
		if ((l_idx < left) && (r_idx < right)) {
			if (arr_l[l_idx] < arr_r[r_idx]) {
				arr[i] = arr_l[l_idx];
				l_idx++;
			}
			else {
				arr[i] = arr_r[r_idx];
				r_idx++;
			}
		}
		else if (l_idx == left) {
			//copy(&arr_r[idx], arr, r_idx, size);
			arr[i] = arr_r[r_idx];
			r_idx++;
		}
		else if (r_idx == right) {
			//copy(&arr_l[idx], arr, l_idx, left);
			arr[i] = arr_l[l_idx];
			l_idx++;
		}
		//copy(tmp_arr, arr, 0, size);
	}
}

void merge(char** arr, char** arr_l, char** arr_r, size_t left, size_t right, size_t size) {
	size_t l_idx = 0, r_idx = 0, idx = 0;
	for (size_t i = 0; i < size; ++i) {
		if ((l_idx < left) && (r_idx < right)) {
			if (arr_l[l_idx] < arr_r[r_idx]) {
				arr[i] = arr_l[l_idx];
				l_idx++;
			}
			else {
				arr[i] = arr_r[r_idx];
				r_idx++;
			}
		}
		else if (l_idx == left) {
			//copy(&arr_r[idx], arr, r_idx, size);
			arr[i] = arr_r[r_idx];
			r_idx++;
		}
		else if (r_idx == right) {
			//copy(&arr_l[idx], arr, l_idx, left);
			arr[i] = arr_l[l_idx];
			l_idx++;
		}
		//copy(tmp_arr, arr, 0, size);
	}
}

template<typename T>
void msort(T arr[], size_t size) {
	//size_t left = 0, right = 0;
	if (size < 2) {
		return;
	}
	size_t left = size / 2;
	size_t right = size - left;

	T* tmp_arr_l = { 0 };
	tmp_arr_l = new T[left];
	for (size_t i = 0; i < left; ++i) {
		tmp_arr_l[i] = arr[i];
	}
	msort(tmp_arr_l, left);

	T* tmp_arr_r = { 0 };
	tmp_arr_r = new T[right];
	for (size_t i = 0; i < right; ++i) {
		tmp_arr_r[i] = arr[i + left];
	}
	msort(tmp_arr_r, right);

	merge<T>(arr, tmp_arr_l, tmp_arr_r, left, right, size);
}


void msort(char** arr, size_t size) {
	//size_t left = 0, right = 0;
	if (size < 2) {
		return;
	}
	size_t left = size / 2;
	size_t right = size - left;

	char** tmp_arr_l = { 0 };
	tmp_arr_l = new char*[left];
	for (size_t i = 0; i < left; ++i) {
		tmp_arr_l[i] = arr[i];
	}
	msort(tmp_arr_l, left);

	char** tmp_arr_r = { 0 };
	tmp_arr_r = new char*[right];
	for (size_t i = 0; i < right; ++i) {
		tmp_arr_r[i] = arr[i + left];
	}
	msort(tmp_arr_r, right);

	merge<char**>(arr, tmp_arr_l, tmp_arr_r, left, right, size);
}

#endif