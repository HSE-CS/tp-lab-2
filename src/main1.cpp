#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int arr1[] = { 1,3,4,5,6};
	msort(arr1, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr1[i] << " ";
	char* arr2[] = { (char*)"c\0", (char*)"abacsd\0", (char*)"help\0", (char*)"taa\0" };
	msort(arr2, 4);
	for (int i = 0; i < 4; ++i)
		cout << arr2[i] << " ";
} 