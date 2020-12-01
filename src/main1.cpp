#include <iostream>
#include "../include/task1.h"

using namespace std;

int main()
{
	int arr1[] = { 3, 4, 5 ,6 ,1};
	msort(arr1, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr1[i] << " ";
	char* arr2[] = { (char*)"ab\0", (char*)"abc\0", (char*)"help\0", (char*)"temp\0" };
	msort(arr2, 4);
	for (int i = 0; i < 4; ++i)
		cout << arr2[i] << " ";

} 