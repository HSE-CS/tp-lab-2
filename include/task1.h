#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>

template<typename T>
void msort(T arr[], size_t size) {
	size_t left = 0, right = 0;
	if (size > 1) {
		left = size / 2;
		right = size - left;
		msort(&arr[0], left);
		msort(&arr[left], right);

		T* tmp_arr = { 0 };
		tmp_arr = new T[size];
		size_t l_idx = 0, r_idx = 0, idx = 0;

		while ((l_idx<left) || (r_idx <size)) {
			if (arr[l_idx] < arr[r_idx]) {
				tmp_arr[idx++] = arr[l_idx];
				l_idx++;
			}
			else {
				tmp_arr[idx++] = arr[r_idx];
				r_idx++;
			}
			if (l_idx == left) {
				for (size_t i = left; i < right; i++) {
					tmp_arr[idx + i] = arr[left + i];
				}
			}
			if (r_idx == size) {
				for (size_t i = right; i < size; i++) {
					tmp_arr[idx + i] = arr[right + i];
				}
			}
		}
		for (size_t i = 0; i < size; i++) {
			arr[i] = tmp_arr[i];
		}
	}
}


void msort(char** arr, size_t size) {
	size_t left = 0, right = 0;
	if (size > 1) {
		left = size / 2;
		right = size - left;
		msort(&arr[0], left);
		msort(&arr[left], right);

		char** tmp_arr = { NULL };
		tmp_arr = new char*[size];
		size_t l_idx = 0, r_idx = 0, idx = 0;

		while ((l_idx < left) || (r_idx < size)) {
			if (strlen(arr[l_idx]) < strlen(arr[r_idx])) {
				tmp_arr[idx++] = arr[l_idx];
				l_idx++;
			}
			else {
				tmp_arr[idx++] = arr[r_idx];
				r_idx++;
			}
			if (l_idx == left) {
				for (size_t i = left; i < right; i++) {
					tmp_arr[idx + i] = arr[left + i];
				}
			}
			if (r_idx == size) {
				for (size_t i = right; i < size; i++) {
					tmp_arr[idx + i] = arr[right + i];
				}
			}
		}
		for (size_t i = 0; i < size; i++) {
			arr[i] = tmp_arr[i];
		}
	}
}