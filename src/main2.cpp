#include <iostream>
#include "task2.h"

using namespace std;

int main() {
	srand(time(nullptr));

	const size_t N = 10;
	int* arr;
	arr = createArr<int, N>(gen);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}