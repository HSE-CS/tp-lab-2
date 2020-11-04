#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

template <typename T> T gen()
{
	return 0;
}

int main()
{
	const int n = 10;
	char* arr = createArr<char, n>(gen);
	for (int i = 0; i < n;i++)
	{
		std::cout << arr[i] << " ";
	}

}