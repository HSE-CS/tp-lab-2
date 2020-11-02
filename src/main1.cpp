#include "task1.h"

int main()
{
	int arr[5] = { 8,5,3,2,2 };
	const char* strarr[2] = { "asda","beb" };
	//msort(arr, 5);
	//for (auto item : arr)
	//	cout << item << " ";
	msort(strarr, 2);
	for (auto item : strarr)
		cout << item << " ";
}