#include <iostream>
#include "task1.h"

int main() {

	const size_t n = 6;
	int val [n] {5, 3, 2, 4, 1, 6};
	msort(val, n);
	for (auto a : val)
		std::cout << a << ' ';

	std::cout << std::endl;

	double val2[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val2, n);
	for (auto a : val2)
		std::cout << a << ' ';

	std::cout << std::endl;

	char* val3[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val3, n);
	for (auto a : val3)
		std::cout << a << ' ';

	return 0;
}