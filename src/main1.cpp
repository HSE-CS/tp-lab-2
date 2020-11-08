#include <iostream>
#include "../include/task1.h"

using namespace std;

int main()
{
	int arr1[] = { 5, 3, 4, 1, 2};
	msort(arr1, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr1[i] << " ";
	char* arr2[] = { (char*)"abc\0", (char*)"ab\0", (char*)"hello\0", (char*)"t\0" };
	msort(arr2, 4);
	for (int i = 0; i < 4; ++i)
		cout << arr2[i] << " ";

}