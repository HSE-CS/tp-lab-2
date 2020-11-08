#include <iostream>
#include <cstring>
#include "task3.h"


template<typename T>
T change(T k) {
	return k+10;
}

int main() {
	const size_t size = 5;
	int a[size]{ 1, 2, 3, 4, 5 };
	map<int, size>(a, change);

	for (int i = 0; i < size; i++) {
		std::cout << a[i] << " ";
	}

	return 0;

}