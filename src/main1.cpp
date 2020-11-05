#include "task1.h"

int main() {
	int arr[] = { 2,6,1,-9,110 };
	msort(arr, 5, 0, 4);
	for (int i = 0; i < 5; ++i) {
		printf("%d\t", arr[i]);
	}

}