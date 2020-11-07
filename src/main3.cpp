#include <iostream>
#include <time.h>
#include <string.h>
#include "task3.h"

#define SIZE3 5

template<class T>
T change(T val){
	return val + 1;
}

template<>
char* change(char* val){
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main(){
	int arr[SIZE3]{ 1, -3, 5, 9, 2 };
	map<int, SIZE3>(arr, change);
	for (int i = 0; i < SIZE3; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	return 0;
}