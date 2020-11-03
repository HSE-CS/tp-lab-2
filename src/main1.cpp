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
	char* arrs[n] {(char*)"lalala\0", (char*)"la\0", (char*)"lala\0", (char*)"lalal\0", (char*)"l\0", (char*)"lalal\0"};
	msort(arrs, n);
	for (auto& i : arrs)
		cout << i << "\n";
	cout << endl;
	return 0;
}