#include <iostream>
#include "task2.h"

#include <string>
using namespace std;
template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

int main() {
	const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(gen);
	int* expected = new int[n] {48, 49, 50, 51, 52};
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}