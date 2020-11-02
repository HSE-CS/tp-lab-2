#include "task1.h"

int main() {

	const unsigned int size = 10;

	int arr[size] = { 35, 13, 7, 54, 9, 102, 30, 22, 11, 10 };

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	msort(arr, 0, size - 1);

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	return 0;
}