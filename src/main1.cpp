#include "task1.h"

int main() {

	const size_t size = 3;
	char* val[size]{ (char*)"ab", (char*)"abc", (char*)"abcd" };

	msort(val, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << val[i] << " ";
		int arr[] = { 2,6,1,-9,110 };
		msort(arr, 5, 0, 4);
		for (int i = 0; i < 5; ++i) {
			printf("%d\t", arr[i]);
		}

		return 0;
	}