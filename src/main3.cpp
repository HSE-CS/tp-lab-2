#include <iostream>
#include "task3.h"


int main() {
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