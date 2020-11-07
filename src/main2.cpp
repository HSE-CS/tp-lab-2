#include "task2.h"


int gen() {
	return 42;
}

int main() {
	srand(time(NULL));
	const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}