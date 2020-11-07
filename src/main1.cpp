#include "task1.h"

int main() {

	const unsigned int size = 5;

	//int arr[size] = { 35, 13, 7, 54, 9, 102, 30, 22, 11, 10 };

	int arr[size] = { 35, 13, 7, 54, 9 };
	//const char* str[] = { "aaaa", "aa", "aaaaa", "a", "aaa" };
	char* str[size]{ (char*)"aaaa", (char*)"aa", (char*)"aaaaa", (char*)"a", (char*)"aaa" };

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	msort(arr, size);
	

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;

	msort(str, size);

	for (int i = 0; i < size; i++)
		std::cout << str[i] << " ";

	return 0;
}