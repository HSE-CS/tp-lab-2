#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS

int change(int a);
using namespace std;

int main()
{
	const size_t n = 10;
	int arr[n]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	map<int, n>(arr, change);

	for (size_t i = 0; i < n; i++)
		cout << arr[i] << ' ';
	return 0;
}


int change(int a)
{
	return (a * 2);
}