#include <iostream>
#include "task1.h"


int main()
{
	int arr[100]{ 97, 79, 13, 62, 17, 21, 16, 47, 36, 63, 67, 91, 68, 63, 75, 39, 62, 64, 24, 5, 59, 81, 61, 23, 52, 100, 39, 73, 75, 45, 42, 72, 24, 54, 33, 40, 74, 49, 87, 10, 12, 53, 100, 80, 15, 75, 18, 77, 38, 41, 81, 96, 22, 42, 19, 74, 42, 57, 47, 16, 2, 88, 88, 25, 41, 21, 65, 15, 69, 51, 25, 80, 4, 24, 59, 18, 98, 77, 95, 36, 17, 76, 31, 39, 17, 49, 12, 58, 6, 58, 74, 8, 46, 61, 32, 87, 81, 97, 1, 50 };
	msort(arr, 100);

	for (int i = 0; i < 100; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;

	const unsigned int size = 5;
	char str1[10]{ 'h', 'e', 'l', 'l', 'o', '\0' };
	char str2[10]{ 'l', 'l', 'o', '\0' };
	char str3[10]{ 'w', 'o', 'r', 'l' , 'd', '\0' };
	char str4[10]{ 'i', '\0' };
	char str5[10]{ 'a', 'm', '\0' };
	char* arr_str[size]{ str1, str2, str3, str4, str5 };

	msort(arr_str, size);

	for (int i = 0; i < size; i++)
		std::cout << arr_str[i] << std:: endl;

	return 0;
}