#include <iostream>
#include <cstring>
#include "task1.h"

int main(){
	const size_t n1 = 6;
	int* val1 = new int[n1] {5, 3, 2, 4, 1, 6};
	msort(val1, n1);

	for (unsigned i = 0; i < n1; i++) {
		std::cout << val1[i] << " ";
	}

	const size_t n2 = 6;
	char* val2[n2]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val2, n2);
	for (unsigned i = 0; i < n2; i++) {
		std::cout << val2[i] << " ";
	}

	return 0;

}