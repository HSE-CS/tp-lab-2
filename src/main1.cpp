#include "task1.h"

int main()
{
	int arr[5] = { 8,5,3,2,2 };
	const char* strarr[6] = { "asda","beb","yhuhuh","ye","r","alalaalalal" };
	msort(arr, 5);
	for (auto item : arr)
		cout << item << " ";
	cout << endl;
	msort(strarr, 6);
	for (auto item : strarr)
		cout << item << " ";
}