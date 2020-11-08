#include "task1.h"
#include <iostream>

int main()
{
	const size_t n = 4;
	int* arr1 = new int[n] {4, 3, 1, 2};
	msort(arr1, n);
	for (size_t i = 0; i < n; i++)
		cout << arr1[i] << ' ';
	cout << endl;
	delete[] arr1;

	double arr2[n]{ 4.0, 3.0, 2, 1 };
	msort(arr2, n);
	for (size_t i = 0; i < n; i++)
		cout << arr2[i] << " ";
	cout << endl;

	char* arr3[n]{ (char*)"aaaa", (char*)"aaa", (char*)"a", (char*)"aa"};
	msort(arr3, n);
	for (size_t i = 0; i < n; i++)
		cout << arr3[i] << "\n";
	cout << endl;
}