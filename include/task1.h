#ifndef TASK1_H
#define TASK1_H

template <typename T>
bool cmp(T left, T right) {
	return left < right;
}
template <> bool cmp <char*>(char* left, char* right)
{
	return strlen(left) < strlen(right);
}

template <typename T>
void msort(T* arr, size_t n) {
	if (n <= 1) return;
	size_t  mid = n / 2;
	size_t  left_size = mid;
	size_t  right_size = n - mid;
	T* left = arr;
	T* right = arr + mid;

	msort(left, left_size);
	msort(right, right_size);
	

	size_t left_index = 0, right_index = 0, index = 0;
	T* result = new T[n];
	
	while (left_index < left_size || right_index < right_size) {
		if (left_index == left_size) {
			result[index] = right[right_index];
			index++;
			right_index++;
		}
		else if (right_index == right_size) {
			result[index] = left[left_index];
			index++;
			left_index++;
		}
		else if (cmp(left[left_index], right[right_index])) {
			result[index] = left[left_index];
			index++;
			left_index++;
		}
		else {
			result[index] = right[right_index];
			index++;
			right_index++;
		}
	}
	
	for (size_t i = 0; i < n; i++) {
		arr[i] = result[i];
	}
	delete[] result;
}

#endif