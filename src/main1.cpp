#include <iostream>
#include "task1.h"

int main() {
	int a[6] = { 1,3,5,2,4,6 };
	msort(a, 6);
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << "\n";
	}
	return 0;
}