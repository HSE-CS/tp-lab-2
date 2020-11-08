#define task3_h
#include <iostream>


template<class T> T change(T val) {
	return val + 1;
}

template<> char* change(char* val){
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}


template<typename T, size_t N> void map(T* arr, T(*change)(T val)){
	for (size_t i = 0; i < N; ++i) {
		arr[i] = change(arr[i]);
	}
}
