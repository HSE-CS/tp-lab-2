#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>

template <typename T, size_t size>
void map(T* arr, T(*change)(T val)) {
	for (int i = 0; i < size; i++) {
		arr[i] = change(arr[i]);
	}
}