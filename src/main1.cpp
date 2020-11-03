#include "task1.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	const size_t n = 6;
	int* arr = new int[n] {5, 3, 2, 4, 1, 6};
	msort(arr, n);
	for (size_t i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
	delete[] arr;

	char* arrs[n] {(char*)"lalala", (char*)"la", (char*)"lala", (char*)"lalal", (char*)"l", (char*)"lalal"};
	msort(arrs, n);
	for (auto& i : arrs)
		cout << i << "\n";
	cout << endl;

	double val[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val, n);
	for (size_t i = 0; i < n; i++)
		cout << val[i] << ' ';
	cout << endl;


	return 0;
}