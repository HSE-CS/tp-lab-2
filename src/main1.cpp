#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

int main()
{
	const int n = 6;
	/*int* val = new int[n] {5, 3, 2, 4, 1, 6};
	int* expected = new int[n] {1, 2, 3, 4, 5, 6};*/
	double val[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	double expected[n]{ -1, 2.1, 2.4, 2.5, 3.0, 4.0 };
	/*char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	char* expected[n]{ (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fff2", (char*)"ffff", (char*)"fffrr" };*/
	double* res = msort(val, n);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << res[i]<<" ";
	}

}