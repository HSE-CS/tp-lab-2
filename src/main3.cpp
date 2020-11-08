#include <iostream>
#include "task3.h"


template<class T> T change(T val) {
	return val + 1;
}

template<> char* change(char* val) {
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main3() {

	/*const size_t n = 5;
	int arr[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr, change);
	for (size_t i = 0; i < n; i++) std :: cout <<arr[i] << ' ';*/

	/*const size_t n = 5;
	double arr[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr,change);
	for (size_t i = 0; i < n; i++) std::cout << arr[i] << ' ';*/

	const size_t n = 5;
	char arr[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr,change);
	for (size_t i = 0; i < n; i++) std::cout << arr[i] << ' ';

	return 0;
}