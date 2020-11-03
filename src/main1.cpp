#include "task1.h"

int main() {

	const size_t size = 3;
	char* val[size]{ (char*)"ab", (char*)"abc", (char*)"abcd" };

	msort(val, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << val[i] << " ";
	}

	return 0;
}