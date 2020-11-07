#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int arr[8] = {5, 2, 6, 12, 1, 4, 8, 3};

	msort(arr, 8);
	for (int i = 0; i < 8; i++)
		cout << arr[i] << " ";
	cout << "\n";

	char* arr_s[5]{ (char*)"qwerty", (char*)"ABCD", (char*)"12345", (char*)"klmn", (char*)"xyz" };

	msort(arr_s, 5);
	for (int i = 0; i < 5; i++)
		cout << arr_s[i] << " ";

	return 0;
}
