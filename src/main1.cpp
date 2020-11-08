#include "task1.h"

int main() {
	const size_t n = 6;
	int* val = new int[n] {5, 3, 2, 4, 1, 6};
	msort(val, n);
	for (size_t i = 0; i < n; ++i) {
		std::cout << val[i];
	}
	std::cout << std::endl;

	//const size_t n = 6;
	char* val1[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val1, n);
	for (size_t i = 0; i < n; ++i) {
		std::cout << val1[i] << "  ";
	}
	std::cout << std::endl;

	return 0;
}