#include "task2.h"

template <typename T>
T gen()
{
	static int t = 1;
	return t *= 2;
}
int main() {

	const size_t N = 10;
	int* array;
	array = createArr<int, N>(gen);
	for (size_t i = 0; i < N; i++) {
		std::cout << array[i] << "\n";
	}
	return 0;
}
