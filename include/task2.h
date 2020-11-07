#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>


template< typename T, size_t size>
T* createArr(T(*gen)()) {
	T* array = new T[size];
	for (int i = 0; i < size; i++) {
		array[i] = gen();
	}
	return array;
}
