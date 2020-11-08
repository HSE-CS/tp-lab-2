#include <iostream>
#include "task1.h"
#include <string>
using namespace std;
int main()
{
	int arr1[]{ 11, 34, 23, 9, 1, 10, 12, 15, 17, 2, 7 };
	char* arr2[]{ (char*)"hi", (char*)"hello", (char*)"Privet", (char*)"ball", (char*)"protection", (char*)"shelf", (char*)"dinamic", (char*)"list", (char*)"comprehension", (char*)"modified" };
	msort(arr1, 12);
	for (auto i : arr1)
		cout << i << endl;
	msort(arr2, 10);
	for (auto i : arr2)
		cout << i << endl;
	return 0;
}